#include "viewsendmessages.h"
#include "ui_viewsendmessages.h"
#include "user.h"
#include "filemanager.h"
#include "authmanager.h"
#include "welcomewindow.h"
#include "sendmessage.h"
#include <QVBoxLayout>
ViewSendMessages::ViewSendMessages(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ViewSendMessages)
{
    ui->setupUi(this);
    setWindowTitle("Your Send Messages");
    displayMessages();
}

ViewSendMessages::~ViewSendMessages()
{
    delete ui;
}
void ViewSendMessages::displayMessages()
{
    User& currentuser = AuthManager::currentuser;
    FileManager fileManager;
    fileManager.ReadMessages(currentuser);
    QStack<Message> sentMessages = currentuser.getSentMessages();
    QWidget *messageContainer = new QWidget();
    QVBoxLayout *layout = new QVBoxLayout(messageContainer);
    bool hasMessages = false;
    while (!sentMessages.isEmpty()) {
        Message msg = sentMessages.top();
        sentMessages.pop();

        if (msg.getRID() != currentuser.id) {
            hasMessages = true;

            QWidget *card = new QWidget();
            card->setStyleSheet("background-color: #ffffff;border: 1px solid #ccc;border-radius: 10px;"
                                "padding: 15px; margin: 8px;");

            QVBoxLayout *cardLayout = new QVBoxLayout(card);

            QString formattedMessage = QString(
                                           "<b>Time:</b> %1<br>"
                                           "<b>To (ID):</b> %2<br><br>"
                                           "%3"
                                           ).arg(msg.getTime())
                                           .arg(msg.getRID())
                                           .arg(msg.getContent());


            QLabel *messageLabel = new QLabel(formattedMessage);
            messageLabel->setWordWrap(true);
            messageLabel->setStyleSheet("font-size: 16px; color: #333;");
            cardLayout->addWidget(messageLabel);
            card->setLayout(cardLayout);
            layout->addWidget(card);
        }
    }

    if (!hasMessages) {
        QLabel *noMessages = new QLabel("No sent messages to other users right now.");
        noMessages->setStyleSheet("font-size: 20px;margin:auto; color: black;");
        layout->addWidget(noMessages);
    }

    ui->scrollArea->setWidget(messageContainer);
}

void ViewSendMessages::on_back_clicked()
{
    welcomeWindow *w = new welcomeWindow();
    w->show();
    close();
}
