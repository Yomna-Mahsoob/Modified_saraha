#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "mainwindow.h"
#include"sendmessage.h"
#include "favoriatemessages.h"
#include "viewsendmessages.h"
#include "viewreceivedmessages.h"
#include "viewcontacts.h"
#include "message.h"
#include "filemanager.h"
#include"user.h"
class login;

welcomeWindow::welcomeWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::welcomeWindow)
{
    ui->setupUi(this);
    setWindowTitle("Options");
    User& currentuser = AuthManager::currentuser;
    ui->UserName->setText("Welcome, " + currentuser.username);
}

welcomeWindow::~welcomeWindow()
{
    delete ui;
}

void welcomeWindow::on_logout_clicked()
{
    MainWindow *main = new MainWindow();
    main->show();
    hide();
}

void welcomeWindow::on_send_clicked()
{
    sendMessage* send = new sendMessage();
    send->show();
    hide();
}

void welcomeWindow::on_fav_clicked()
{
    favoriateMessages *fav = new favoriateMessages();
    fav->show();
    hide();
}

void welcomeWindow::on_view_Sendmessages_clicked()
{
    ViewSendMessages *view = new ViewSendMessages();
    view->show();
    hide();
    view->displayMessages();
}

void welcomeWindow::on_view_received_messages_clicked()
{
    viewReceivedMessages *received = new viewReceivedMessages();
    received->show();
    hide();
}

void welcomeWindow::on_undo_clicked()
{
    User &currentuser = AuthManager::currentuser;
    QStack<Message> sentmessages = currentuser.getSentMessages();

    if (sentmessages.isEmpty()) {
        QMessageBox::warning(nullptr, "Undo", "No message to undo");
        return;
    }

    Message lastMessage = sentmessages.top();
    sentmessages.pop();
    FileManager fm;
    fm.deleteMessageById(lastMessage.getMsgId());
    //currentuser.setsentMessages(sentmessages);
    QMessageBox::information(nullptr, "Undo", "Last message undone successfully");
}

void welcomeWindow::on_contact_clicked()
{
    ViewContacts* vc = new ViewContacts();
    vc->show();
    close();
}
