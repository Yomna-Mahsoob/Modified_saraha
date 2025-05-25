#include "sendmessage.h"
#include "ui_sendmessage.h"
#include "welcomewindow.h"
#include "message.h"
#include "filemanager.h"
#include "user.h"
#include <QMessageBox>
#include <QDateTime>
#include "authmanager.h"
sendMessage::sendMessage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::sendMessage)
{
    ui->setupUi(this);
    setWindowTitle("Send Message");
    ui->comboBox->setStyleSheet(
        "QComboBox QAbstractItemView { color: black; background-color: white; }"
        );

    DisplayUsers();
}
sendMessage::~sendMessage()
{
    delete ui;
}
void sendMessage::on_send_message_clicked()
{
    bool showName = ui->checkBox->isChecked();
    User& currentuser = AuthManager::currentuser;
    int recipientId = ui->comboBox->currentData().toInt();
    if (recipientId == -1) {
        QMessageBox::warning(this, "Error", "Please select a user to send the message.");
        return;
    }
    FileManager fileManager;
    fileManager.ReadMessages(currentuser);
    User reciever;
    reciever.id = recipientId;
    fileManager.ReadMessages(reciever);
    QString content = ui->add_message->toPlainText().trimmed();
    if (!limit_Message_length(content))
        return;
    QString timestamp = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
    Message new_msg(fileManager.getNextMessageId(), currentuser.id, recipientId, content, timestamp, false, showName);
    currentuser.addsentMessages(new_msg);
    reciever.addRecievedMessages(currentuser.id, new_msg);
    fileManager.savedMessages(new_msg);
    QMessageBox::information(this, " ", "Your message is sent");
    ui->add_message->clear();
    ViewSendMessages v;
    v.displayMessages();
}
bool sendMessage::limit_Message_length(QString& text)
{
    int max_length = 600;
    if (text.length() > max_length) {
        QMessageBox::warning(this, "Warning!", "600 letters only");
        return false;
    } else if (text.length() < 1) {
        QMessageBox::warning(this, "Warning!", "Enter more letters");
        return false;
    }
    return true;
}
void sendMessage::DisplayUsers()
{
    ui->comboBox->clear();
    ui->errorLabel->clear(); // Clear previous error
    ui->errorLabel->setVisible(false);
    QFile file("/home/youmna/DS_p/users.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            int id = in.readLine().toInt();
            QString username = in.readLine();
            QString nickname = in.readLine();
            QString password = in.readLine();
            QString email = in.readLine();
            QString gender = in.readLine();

            if (id != AuthManager::currentuser.id) {
                ui->comboBox->addItem(username, id);
            }
        }
        file.close();
    } else {
        ui->errorLabel->setText("⚠ Failed to load users.");
        ui->errorLabel->setStyleSheet("color: red; font-weight: bold;");
        ui->errorLabel->setVisible(true);
    }

    if (ui->comboBox->count() == 0) {
        ui->comboBox->addItem("No users available", -1);
    }
}

void sendMessage::on_back_clicked()
{
    welcomeWindow *w = new welcomeWindow();
    w->show();
    close();
}
