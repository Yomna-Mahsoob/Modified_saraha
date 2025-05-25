/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcomeWindow
{
public:
    QWidget *widget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *send;
    QPushButton *view_received_messages;
    QPushButton *fav;
    QPushButton *contact;
    QPushButton *view_Sendmessages;
    QPushButton *undo;
    QPushButton *logout;
    QComboBox *comboBox;

    void setupUi(QDialog *welcomeWindow)
    {
        if (welcomeWindow->objectName().isEmpty())
            welcomeWindow->setObjectName("welcomeWindow");
        welcomeWindow->resize(1079, 822);
        widget = new QWidget(welcomeWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-1, -1, 1091, 841));
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
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(300, 30, 434, 817));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        send = new QPushButton(verticalLayoutWidget);
        send->setObjectName("send");
        send->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    font-weight: bold;\n"
"    margin-bottom:50px;\n"
"	font: 18pt \"NSimSun\";\n"
"    min-width: 200px;\n"
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
"\n"
""));

        verticalLayout->addWidget(send);

        view_received_messages = new QPushButton(verticalLayoutWidget);
        view_received_messages->setObjectName("view_received_messages");
        view_received_messages->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    font-weight: bold;\n"
"    margin-bottom:50px;\n"
"	font: 18pt \"NSimSun\";\n"
"    min-width: 200px;\n"
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
"\n"
""));

        verticalLayout->addWidget(view_received_messages);

        fav = new QPushButton(verticalLayoutWidget);
        fav->setObjectName("fav");
        fav->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    font-weight: bold;\n"
"    margin-bottom:50px;\n"
"	font: 18pt \"NSimSun\";\n"
"    min-width: 200px;\n"
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
"\n"
""));

        verticalLayout->addWidget(fav);

        contact = new QPushButton(verticalLayoutWidget);
        contact->setObjectName("contact");
        contact->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    font-weight: bold;\n"
"    margin-bottom:50px;\n"
"	font: 18pt \"NSimSun\";\n"
"    min-width: 200px;\n"
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
"\n"
""));

        verticalLayout->addWidget(contact);

        view_Sendmessages = new QPushButton(verticalLayoutWidget);
        view_Sendmessages->setObjectName("view_Sendmessages");
        view_Sendmessages->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    font-weight: bold;\n"
"    margin-bottom:50px;\n"
"	font: 18pt \"NSimSun\";\n"
"    min-width: 200px;\n"
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
"\n"
""));

        verticalLayout->addWidget(view_Sendmessages);

        undo = new QPushButton(verticalLayoutWidget);
        undo->setObjectName("undo");
        undo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    font-weight: bold;\n"
"    margin-bottom:50px;\n"
"	font: 18pt \"NSimSun\";\n"
"    min-width: 200px;\n"
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
"\n"
""));

        verticalLayout->addWidget(undo);

        logout = new QPushButton(verticalLayoutWidget);
        logout->setObjectName("logout");
        logout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    font-weight: bold;\n"
"    margin-bottom:50px;\n"
"	font: 18pt \"NSimSun\";\n"
"    min-width: 200px;\n"
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
"\n"
""));

        verticalLayout->addWidget(logout);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(830, 150, 86, 26));

        retranslateUi(welcomeWindow);

        QMetaObject::connectSlotsByName(welcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *welcomeWindow)
    {
        welcomeWindow->setWindowTitle(QCoreApplication::translate("welcomeWindow", "Dialog", nullptr));
        send->setText(QCoreApplication::translate("welcomeWindow", "Send Message", nullptr));
        view_received_messages->setText(QCoreApplication::translate("welcomeWindow", "View Received Messages", nullptr));
        fav->setText(QCoreApplication::translate("welcomeWindow", "Favoriate Messages", nullptr));
        contact->setText(QCoreApplication::translate("welcomeWindow", "Contacts", nullptr));
        view_Sendmessages->setText(QCoreApplication::translate("welcomeWindow", "View Send Messages", nullptr));
        undo->setText(QCoreApplication::translate("welcomeWindow", "Undo Last Message", nullptr));
        logout->setText(QCoreApplication::translate("welcomeWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcomeWindow: public Ui_welcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
