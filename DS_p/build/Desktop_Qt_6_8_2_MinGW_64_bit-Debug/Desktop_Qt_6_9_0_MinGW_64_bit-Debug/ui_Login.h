/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label_2;
    QPushButton *Submit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QPushButton *login_2;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(1120, 619);
        QFont font;
        font.setFamilies({QString::fromUtf8("Sylfaen")});
        font.setPointSize(28);
        login->setFont(font);
        login->setMouseTracking(true);
        login->setStyleSheet(QString::fromUtf8("QWidget {\n"
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
        label_2 = new QLabel(login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(340, 50, 391, 101));
        label_2->setStyleSheet(QString::fromUtf8("font: 28pt \"Sylfaen\";"));
        Submit = new QPushButton(login);
        Submit->setObjectName("Submit");
        Submit->setGeometry(QRect(320, 300, 432, 156));
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
        verticalLayoutWidget_2 = new QWidget(login);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(570, 170, 221, 101));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sylfaen")});
        font1.setPointSize(16);
        label_3->setFont(font1);

        verticalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setStyleSheet(QString::fromUtf8("\n"
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
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_2->addWidget(lineEdit_2);

        verticalLayoutWidget_3 = new QWidget(login);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(280, 170, 221, 101));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        verticalLayout_3->addWidget(label_4);

        lineEdit = new QLineEdit(verticalLayoutWidget_3);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("\n"
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

        verticalLayout_3->addWidget(lineEdit);

        label_5 = new QLabel(login);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(440, 430, 251, 56));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sylfaen")});
        font2.setPointSize(14);
        label_5->setFont(font2);
        login_2 = new QPushButton(login);
        login_2->setObjectName("login_2");
        login_2->setEnabled(true);
        login_2->setGeometry(QRect(470, 510, 122, 26));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sylfaen")});
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setUnderline(true);
        login_2->setFont(font3);
        login_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Sylfaen\";\n"
"color:#3498db;\n"
"border:0;\n"
"text-decoration: underline;"));

        retranslateUi(login);

        Submit->setDefault(true);
        login_2->setDefault(false);


        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("login", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700; color:#34599e;\">Log In</span></p></body></html>", nullptr));
        Submit->setText(QCoreApplication::translate("login", "Submit", nullptr));
        label_3->setText(QCoreApplication::translate("login", "Password", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("login", "Enter Your Password", nullptr));
        label_4->setText(QCoreApplication::translate("login", "Email", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("login", "Enter Your Email", nullptr));
        label_5->setText(QCoreApplication::translate("login", "Don't have an account?", nullptr));
        login_2->setText(QCoreApplication::translate("login", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
