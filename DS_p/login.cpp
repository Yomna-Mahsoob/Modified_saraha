#include "login.h"
#include "ui_login.h"
#include "registerationwindow.h"
#include "mainwindow.h"
#include "welcomewindow.h"
#include "authmanager.h"
#include "ui_welcomewindow.h"
#include <QMessageBox>
#include "filemanager.h"
login::login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::login)
    , authManager(new AuthManager())
{
    ui->setupUi(this);
    setWindowTitle("Log In");
    w= new welcomeWindow(this);

}
login::~login()
{
    delete ui;
    delete authManager;
}

void login::on_login_2_clicked()
{
    RegisterationWindow *regWindow = new RegisterationWindow(this);
    hide();
    regWindow->show();
}

void login::on_Submit_clicked()
{
    QString email = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    int userId;

    if (authManager->login(email, password, userId)) {
        auto it = authManager->userMap.find(authManager->emailToUsername[email]);
        if (it != authManager->userMap.end()) {
            AuthManager::currentuser = it.value();

            FileManager fm;
            fm.ReadMessages(AuthManager::currentuser);

            QString message = QString(
                                  "<div style='color: black; font-size:14px;'>"
                                  "<b>Welcome, %1!</b><br>"
                                  "Email: %2<br>"
                                  "Gender: %3"
                                  "</div>")
                                  .arg(it.value().nickname)
                                  .arg(it.value().email)
                                  .arg(it.value().gender);


            QMessageBox* msgBox = new QMessageBox(this);
            msgBox->setWindowTitle("Welcome");
            msgBox->setText(message);
            msgBox->setIcon(QMessageBox::Information);
            msgBox->exec();

            welcomeWindow *welcome_window = new welcomeWindow();
            welcome_window->show();
            close();
        }
    }
}
