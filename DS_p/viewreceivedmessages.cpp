#include "viewreceivedmessages.h"
#include "ui_viewreceivedmessages.h"
#include "filemanager.h"
#include "authmanager.h"
#include "welcomewindow.h"
#include <QSet>
#include <QMessageBox>
#include <QTextStream>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QQueue>
QQueue<int> viewReceivedMessages::favoriteMessageQueue;

viewReceivedMessages::viewReceivedMessages(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::viewReceivedMessages)
{
    ui->setupUi(this);
    setWindowTitle("Your Received Messages");
    ui->comboBox->setStyleSheet(
        "QComboBox QAbstractItemView { color: black; background-color: white; }"
        );

    User& currentuser = AuthManager::currentuser;
    FileManager fm;
    fm.readRemovedContacts(AuthManager::currentuser);

    QSet<int> messageSenders;

    QFile msgFile("/home/youmna/DS_p/messages.txt");
    if (msgFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&msgFile);
        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList parts = line.split(",");
            if (parts.size() >= 7) {
                int sid = parts[1].toInt();
                int rid = parts[2].toInt();

                if (rid == currentuser.id && sid != currentuser.id) {
                    messageSenders.insert(sid);
                }
            }
        }
        msgFile.close();
    }

    QFile userFile("/home/youmna/DS_p/users.txt");
    if (userFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&userFile);
        ui->comboBox->clear();
        while (!in.atEnd()) {
            int id = in.readLine().toInt();
            QString username = in.readLine();
            QString password = in.readLine();
            QString nickname = in.readLine();
            QString email = in.readLine();
            QString gender = in.readLine();

            if (messageSenders.contains(id)) {
                ui->comboBox->addItem(QString("%1 ").arg(id), id);
            }
        }
        userFile.close();
    }
}
viewReceivedMessages::~viewReceivedMessages()
{
    delete ui;
}
void viewReceivedMessages::on_back_clicked()
{
    welcomeWindow *w = new welcomeWindow();
    w->show();
    close();
}
QString getNicknameById(int id) {
    QFile file("/home/youmna/DS_p/users.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            int userId = in.readLine().toInt();
            in.readLine();
            in.readLine();
            QString nickname = in.readLine();
            in.readLine();
            in.readLine();
            if (userId == id)
                return nickname;
        }
    }
    return "Unknown";
}
void viewReceivedMessages::on_view_clicked()
{
    User& currentuser = AuthManager::currentuser;
    int selectedContactId = ui->comboBox->currentData().toInt();

    if (selectedContactId == 0) {
        QMessageBox::warning(this, "Error", "Please select a user to view messages from.");
        return;
    }

    FileManager fileManager;
    fileManager.ReadMessages(currentuser);

    QVector<Message> receivedMessages = currentuser.getReceivedMessages(selectedContactId);
    QWidget *messageContainer = new QWidget();
    QVBoxLayout *layout = new QVBoxLayout(messageContainer);
    bool hasMessages = false;

    for (Message msg : receivedMessages) {
        if (msg.getSID() != currentuser.id) {
            hasMessages = true;

            QWidget *card = new QWidget();
            card->setStyleSheet("background-color: #ffffff; border: 1px solid #ccc; border-radius: 10px; padding: 15px; margin: 8px;");

            QVBoxLayout *cardLayout = new QVBoxLayout(card);

            QString senderName = msg.isSenderNameShown() ? getNicknameById(msg.getSID()) : QString::number(msg.getSID());
            QString formattedMessage = QString(
                                           "<b>Time:</b> %1<br>"
                                           "<b>From:</b> %2<br><br>"
                                           "%3"
                                           ).arg(msg.getTime())
                                           .arg(senderName)
                                           .arg(msg.getContent());

            QLabel *messageLabel = new QLabel(formattedMessage);
            messageLabel->setWordWrap(true);
            messageLabel->setStyleSheet("font-size: 16px; color: #333;");

            // Favorite button
            QPushButton *favButton = new QPushButton();
            favButton->setProperty("msgId", msg.getMsgId());

            // Set initial button state
            if (msg.IsFavor()) {
                favButton->setText("❤ Remove from Favorite");
                favButton->setStyleSheet(
                    "QPushButton {"
                    "   background-color: #ff9999;"
                    "   color: #800000;"
                    "   font-weight: bold;"
                    "   border-radius: 8px;"
                    "   padding: 5px 12px;"
                    "   margin-top: 10px;"
                    "}"
                    "QPushButton:hover {"
                    "   background-color: #ff6666;"
                    "}"
                    );
            } else {
                favButton->setText("❤ Add to Favorite");
                favButton->setStyleSheet(
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
            }

            connect(favButton, &QPushButton::clicked, [this, &currentuser, favButton, msg]() mutable {
                int msgId = favButton->property("msgId").toInt();
                bool isFavorite = !msg.IsFavor();

                Message* updatedMsg = nullptr;

                for (auto& contactMsgs : currentuser.recievedmessages) {
                    for (Message& m : contactMsgs) {
                        if (m.getMsgId() == msgId) {
                            m.setFavor(isFavorite);
                            updatedMsg = &m;
                            break;
                        }
                    }
                    if (updatedMsg) break;

                }
                if (updatedMsg) {
                    FileManager fm;
                    fm.deleteMessageById(msgId);
                    fm.savedMessages(*updatedMsg);

                    // Update the queue
                    if (isFavorite) {
                        // Add to the queue
                        favoriteMessageQueue.enqueue(msgId);
                    } else {
                        // Remove from the queue
                        QQueue<int> updatedQueue;
                        while (!favoriteMessageQueue.isEmpty()) {
                            int id = favoriteMessageQueue.dequeue();
                            if (id != msgId) {
                                updatedQueue.enqueue(id);
                            }
                        }
                        favoriteMessageQueue = updatedQueue;
                    }

                }
                // Update button appearance
                if (isFavorite) {
                    favButton->setText("❤ Remove from Favorite");
                    favButton->setStyleSheet(
                        "QPushButton {"
                        "   background-color: #ff9999;"
                        "   color: #800000;"
                        "   font-weight: bold;"
                        "   border-radius: 8px;"
                        "   padding: 5px 12px;"
                        "   margin-top: 10px;"
                        "}"
                        "QPushButton:hover {"
                        "   background-color: #ff6666;"
                        "}"
                        );
                } else {
                    favButton->setText("❤ Add to Favorite");
                    favButton->setStyleSheet(
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
                }
            });

            QHBoxLayout *buttonLayout = new QHBoxLayout();
            buttonLayout->addStretch();
            buttonLayout->addWidget(favButton);

            cardLayout->addWidget(messageLabel);
            cardLayout->addLayout(buttonLayout);
            card->setLayout(cardLayout);

            layout->addWidget(card);
        }
    }
    if (!hasMessages) {
        QLabel *noMessages = new QLabel("No received messages from this contact.");
        noMessages->setStyleSheet("font-size: 20px; margin: auto; color: black;");
        layout->addWidget(noMessages);
    }

    ui->scrollArea->setWidget(messageContainer);
}
