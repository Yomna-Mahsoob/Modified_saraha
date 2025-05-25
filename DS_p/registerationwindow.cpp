#include "registerationwindow.h"
#include "ui_registerationwindow.h"
#include "login.h"
#include "mainwindow.h"
#include <QMessageBox>

RegisterationWindow::RegisterationWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterationWindow)
    , authManager(new AuthManager())
{
    ui->setupUi(this);
    setWindowTitle("Registeration");
}

RegisterationWindow::~RegisterationWindow()
{
    delete ui;
    delete authManager;
}

void RegisterationWindow::on_login_clicked()
{
    login *Login = new login(this);
    hide();
    Login->show();
}
void RegisterationWindow::showCustomMessage(const QString &title, const QString &message, QMessageBox::Icon icon)
{
    QMessageBox* msgBox = new QMessageBox(this);
    msgBox->setWindowTitle(title);
    msgBox->setText(message);
    msgBox->setIcon(icon);
    msgBox->setStyleSheet(
        "QLabel{color: white; font-size: 14px;} "
        "QPushButton{background-color: #444; color: white; border: 1px solid white; padding: 5px;} "
        "QMessageBox{background-color: black;}"        );
    msgBox->exec();
}

void RegisterationWindow::on_Submit_clicked()
{
    QString email = ui->Email->text();
    QString username = ui->Username->text();
    QString password = ui->password->text();
    QString confirmPassword = ui->confirm_password->text();
    QString nickname = ui->nickname->text();
    QString gender;

    if (ui->Gender->isChecked()) {
        gender = "Male";
    } else if (ui->G_female->isChecked()) {
        gender = "Female";
    } else {
        showCustomMessage("Error", "Please select a gender!", QMessageBox::Warning);
        return;
    }

    if (password != confirmPassword) {
        showCustomMessage("Error", "Passwords do not match!", QMessageBox::Warning);
        return;
    }

    if (authManager->registerUser(username, password, nickname, email, gender)) {
        login *loginWindow = new login();
        loginWindow->show();
        close();
    }
}
