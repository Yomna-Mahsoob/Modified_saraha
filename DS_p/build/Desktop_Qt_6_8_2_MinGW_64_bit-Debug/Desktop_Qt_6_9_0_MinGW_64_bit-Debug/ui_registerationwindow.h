/********************************************************************************
** Form generated from reading UI file 'registerationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERATIONWINDOW_H
#define UI_REGISTERATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterationWindow
{
public:
    QWidget *widget;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *email_label;
    QLineEdit *Email;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *Username_label;
    QLineEdit *Username;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *nickname_label;
    QLineEdit *nickname;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *password_label;
    QLineEdit *password;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QLineEdit *confirm_password;
    QPushButton *Submit;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *G_male;
    QRadioButton *G_female;
    QRadioButton *Gender;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *login;

    void setupUi(QDialog *RegisterationWindow)
    {
        if (RegisterationWindow->objectName().isEmpty())
            RegisterationWindow->setObjectName("RegisterationWindow");
        RegisterationWindow->resize(856, 674);
        widget = new QWidget(RegisterationWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 20, 921, 711));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 1,\n"
"        stop: 0 #d5f5e3,\n"
"        stop: 1 #d6eaf8\n"
"    );\n"
"    margin: 0; \n"
"    padding:0;\n"
"}\n"
""));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 0, 391, 101));
        label->setStyleSheet(QString::fromUtf8("font: 28pt \"Sylfaen\";"));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 110, 381, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        email_label = new QLabel(verticalLayoutWidget);
        email_label->setObjectName("email_label");
        email_label->setStyleSheet(QString::fromUtf8("font: 14pt \"Sylfaen\";\n"
"color:black;"));

        verticalLayout->addWidget(email_label);

        Email = new QLineEdit(verticalLayoutWidget);
        Email->setObjectName("Email");
        Email->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"    min-width: 200px;\n"
"    max-width: 300px;\n"
"    heigth:55px;\n"
"    background-color: #f0f0f0;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #888;\n"
"}\n"
""));

        verticalLayout->addWidget(Email);

        verticalLayoutWidget_2 = new QWidget(widget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(450, 110, 381, 91));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Username_label = new QLabel(verticalLayoutWidget_2);
        Username_label->setObjectName("Username_label");
        Username_label->setStyleSheet(QString::fromUtf8("font: 14pt \"Sylfaen\";\n"
"color:black;"));

        verticalLayout_2->addWidget(Username_label);

        Username = new QLineEdit(verticalLayoutWidget_2);
        Username->setObjectName("Username");
        Username->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"    min-width: 200px;\n"
"    max-width: 300px;\n"
"    heigth:55px;\n"
"    background-color: #f0f0f0;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #888;\n"
"}\n"
""));

        verticalLayout_2->addWidget(Username);

        verticalLayoutWidget_3 = new QWidget(widget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(30, 350, 381, 91));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        nickname_label = new QLabel(verticalLayoutWidget_3);
        nickname_label->setObjectName("nickname_label");
        nickname_label->setStyleSheet(QString::fromUtf8("font: 14pt \"Sylfaen\";\n"
"color:black;"));

        verticalLayout_3->addWidget(nickname_label);

        nickname = new QLineEdit(verticalLayoutWidget_3);
        nickname->setObjectName("nickname");
        nickname->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"    min-width: 200px;\n"
"    max-width: 300px;\n"
"    heigth:55px;\n"
"    background-color: #f0f0f0;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #888;\n"
"}\n"
""));

        verticalLayout_3->addWidget(nickname);

        verticalLayoutWidget_4 = new QWidget(widget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(450, 220, 381, 101));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        password_label = new QLabel(verticalLayoutWidget_4);
        password_label->setObjectName("password_label");
        password_label->setStyleSheet(QString::fromUtf8("font: 14pt \"Sylfaen\";\n"
"color:black;"));

        verticalLayout_4->addWidget(password_label);

        password = new QLineEdit(verticalLayoutWidget_4);
        password->setObjectName("password");
        password->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"    min-width: 200px;\n"
"    max-width: 300px;\n"
"    heigth:55px;\n"
"    background-color: #f0f0f0;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #888;\n"
"}\n"
""));
        password->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_4->addWidget(password);

        verticalLayoutWidget_5 = new QWidget(widget);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(30, 220, 381, 101));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_5);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"Sylfaen\";\n"
"color:black;"));

        verticalLayout_5->addWidget(label_3);

        confirm_password = new QLineEdit(verticalLayoutWidget_5);
        confirm_password->setObjectName("confirm_password");
        confirm_password->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"    min-width: 200px;\n"
"    max-width: 300px;\n"
"    heigth:55px;\n"
"    background-color: #f0f0f0;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #888;\n"
"}\n"
""));
        confirm_password->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_5->addWidget(confirm_password);

        Submit = new QPushButton(widget);
        Submit->setObjectName("Submit");
        Submit->setGeometry(QRect(190, 490, 432, 156));
        Submit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    font-weight: bold;\n"
"    margin-bottom:100px;\n"
"	font: 18pt \"NSimSun\";\n"
"    min-width: 400px;\n"
"    min-height: 40px;\n"
"    \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1c5980;\n"
"}\n"
""));
        verticalLayoutWidget_6 = new QWidget(widget);
        verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
        verticalLayoutWidget_6->setGeometry(QRect(449, 349, 371, 91));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        G_male = new QLabel(verticalLayoutWidget_6);
        G_male->setObjectName("G_male");
        G_male->setStyleSheet(QString::fromUtf8("font: 14pt \"Sylfaen\";\n"
"color:black;\n"
""));

        horizontalLayout->addWidget(G_male);

        G_female = new QRadioButton(verticalLayoutWidget_6);
        G_female->setObjectName("G_female");
        G_female->setStyleSheet(QString::fromUtf8("font: 10pt \"Sylfaen\";\n"
"color:black;"));

        horizontalLayout->addWidget(G_female);

        Gender = new QRadioButton(verticalLayoutWidget_6);
        Gender->setObjectName("Gender");
        Gender->setStyleSheet(QString::fromUtf8("font: 10pt \"Sylfaen\";\n"
"color:black;"));

        horizontalLayout->addWidget(Gender);


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayoutWidget_2 = new QWidget(widget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(210, 560, 411, 81));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 13pt \"Sylfaen\";\n"
"color:black;"));

        horizontalLayout_2->addWidget(label_2);

        login = new QPushButton(horizontalLayoutWidget_2);
        login->setObjectName("login");
        login->setStyleSheet(QString::fromUtf8("font: 12pt \"Sylfaen\";\n"
"color:#3498db;\n"
"border:0;\n"
"text-decoration: underline;"));

        horizontalLayout_2->addWidget(login);


        retranslateUi(RegisterationWindow);

        QMetaObject::connectSlotsByName(RegisterationWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterationWindow)
    {
        RegisterationWindow->setWindowTitle(QCoreApplication::translate("RegisterationWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RegisterationWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700; color:#34599e;\">Create Account</span></p></body></html>", nullptr));
        email_label->setText(QCoreApplication::translate("RegisterationWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Email</span></p></body></html>", nullptr));
        Email->setPlaceholderText(QCoreApplication::translate("RegisterationWindow", "Enter Your Email", nullptr));
        Username_label->setText(QCoreApplication::translate("RegisterationWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Username</span></p></body></html>", nullptr));
        Username->setPlaceholderText(QCoreApplication::translate("RegisterationWindow", "Enter Your Username", nullptr));
        nickname_label->setText(QCoreApplication::translate("RegisterationWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Nickname</span></p></body></html>", nullptr));
        nickname->setPlaceholderText(QCoreApplication::translate("RegisterationWindow", "Enter Your Nickname", nullptr));
        password_label->setText(QCoreApplication::translate("RegisterationWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Password</span></p></body></html>", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("RegisterationWindow", "Enter Password", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterationWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Confirm Password</span></p></body></html>", nullptr));
        confirm_password->setPlaceholderText(QCoreApplication::translate("RegisterationWindow", "Re-Enter password", nullptr));
        Submit->setText(QCoreApplication::translate("RegisterationWindow", "Submit", nullptr));
        G_male->setText(QCoreApplication::translate("RegisterationWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Gender</span></p></body></html>", nullptr));
        G_female->setText(QCoreApplication::translate("RegisterationWindow", "Female", nullptr));
        Gender->setText(QCoreApplication::translate("RegisterationWindow", "Male", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterationWindow", "Already have an account?       ", nullptr));
        login->setText(QCoreApplication::translate("RegisterationWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterationWindow: public Ui_RegisterationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERATIONWINDOW_H
