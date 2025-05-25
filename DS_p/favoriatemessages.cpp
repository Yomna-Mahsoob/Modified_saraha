#include "favoriatemessages.h"
#include "ui_favoriatemessages.h"
#include "welcomewindow.h"
#include "message.h"
#include "login.h"
#include "QVBoxLayout"
#include "filemanager.h"
#include <QQueue>

favoriateMessages::favoriateMessages(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::favoriateMessages)
{
    ui->setupUi(this);
    setWindowTitle("Your Favoriate Messages");
    displayFavoriteMessages();
}

favoriateMessages::~favoriateMessages()
{
    delete ui;
}



// favoriatemessages.cpp
void favoriateMessages::displayFavoriteMessages()
{
    if (QWidget* oldWidget = ui->scrollArea->widget()) {
        oldWidget->deleteLater();
        ui->scrollArea->takeWidget();
    }

    User& currentUser = AuthManager::currentuser;
    QWidget *favoritesContainer = new QWidget();
    QVBoxLayout *layout = new QVBoxLayout(favoritesContainer);
    bool hasFavorites = false;


    //REFRESH BUTTON HERE
    QPushButton *refreshButton = new QPushButton("↻ Refresh Favorites");
    refreshButton->setStyleSheet(
        "QPushButton {"
        "   background-color: #e6f3ff;"
        "   color: #0066cc;"
        "   border: 1px solid #99c2ff;"
        "   border-radius: 5px;"
        "   padding: 5px 10px;"
        "   margin-bottom: 10px;"
        "}"
        "QPushButton:hover {"
        "   background-color: #cce0ff;"
        "}"
        );
    connect(refreshButton, &QPushButton::clicked, this, &favoriateMessages::displayFavoriteMessages);
    layout->addWidget(refreshButton);



    // Create a list of favorite message IDs and a map for quick lookup
    QList<int> favoriteIds;
    QMap<int, Message> messageMap;

    // First pass: Collect all favorite messages and build message map
    for (auto it = currentUser.recievedmessages.constBegin(); it != currentUser.recievedmessages.constEnd(); ++it) {
        for (const Message& msg : it.value()) {
            messageMap.insert(msg.getMsgId(), msg);
            if (msg.IsFavor()) {
                favoriteIds.append(msg.getMsgId());
            }
        }
    }

    // Second pass: Display messages from the favorite IDs list
    for (int msgId : favoriteIds) {
        if (messageMap.contains(msgId)) {
            const Message& msg = messageMap.value(msgId);
            hasFavorites = true;

            QWidget *card = new QWidget();
            card->setStyleSheet("background-color: #fdf5e6; border: 1px solid #ccc; border-radius: 10px; padding: 15px; margin: 8px;");
            QVBoxLayout *cardLayout = new QVBoxLayout(card);

            QString formattedMessage = QString(
                                           "<b>Time:</b> %1<br>"
                                           "<b>From (ID):</b> %2<br><br>"
                                           "%3"
                                           ).arg(msg.getTime())
                                           .arg(msg.getSID())
                                           .arg(msg.getContent());

            QLabel *messageLabel = new QLabel(formattedMessage);
            messageLabel->setStyleSheet("font-size: 16px; color: black;");
            messageLabel->setWordWrap(true);
            cardLayout->addWidget(messageLabel);

            QPushButton *removeButton = new QPushButton("Remove from Favorites");
            removeButton->setStyleSheet(
                "QPushButton {"
                "   background-color: #ffcccc;"
                "   color: #800000;"
                "   font-weight: bold;"
                "   border-radius: 8px;"
                "   padding: 5px 12px;"
                "   margin-top: 10px;"
                "}"
                "QPushButton:hover {"
                "   background-color: #ff9999;"
                "}"
                );

            connect(removeButton, &QPushButton::clicked, [this, msg, &currentUser]() {
                bool found = false;
                Message* updatedMsg = nullptr;

                // Find and update the message in received messages
                for (auto& contactMsgs : currentUser.recievedmessages) {
                    for (Message& m : contactMsgs) {
                        if (m.getMsgId() == msg.getMsgId()) {
                            m.setFavor(false);
                            updatedMsg = &m;
                            found = true;
                            break;
                        }
                    }
                    if (found) break;
                }

                if (updatedMsg) {
                    // Update the file system
                    FileManager fm;
                    fm.deleteMessageById(msg.getMsgId());
                    fm.savedMessages(*updatedMsg);
                }

                displayFavoriteMessages(); // Refresh the view
            });

            cardLayout->addWidget(removeButton);
            card->setLayout(cardLayout);
            layout->addWidget(card);
        }
    }

    if (!hasFavorites) {
        QLabel *noFavorites = new QLabel("No favorite messages yet.");
        noFavorites->setStyleSheet("font-size: 20px; margin: auto; color: black;");
        layout->addWidget(noFavorites);
    }

    ui->scrollArea->setWidget(favoritesContainer);
}

void favoriateMessages::on_removeOLdestFav_clicked()
{
    QQueue<int>& favoriteQueue = viewReceivedMessages::favoriteMessageQueue;

    if (!favoriteQueue.isEmpty()) {
        int oldestMsgId = favoriteQueue.dequeue();

        User& currentUser = AuthManager::currentuser;
        Message* oldestMsg = nullptr;

        for (auto& contactMsgs : currentUser.recievedmessages) {
            for (Message& msg : contactMsgs) {
                if (msg.getMsgId() == oldestMsgId && msg.IsFavor()) {
                    oldestMsg = &msg;
                    break;
                }
            }
            if (oldestMsg) break;
        }

        if (oldestMsg) {
            oldestMsg->setFavor(false);

            FileManager fm;
            fm.deleteMessageById(oldestMsgId);
            fm.savedMessages(*oldestMsg);

            displayFavoriteMessages(); // Refresh the UI
        }
    } else {
        QMessageBox::information(this, "No Favorites", "There are no favorite messages to remove.");
    }
}


void favoriateMessages::on_back_clicked()
{
    welcomeWindow *w= new welcomeWindow();
    w->show();
    close();
}

