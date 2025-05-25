/********************************************************************************
** Form generated from reading UI file 'sendmessage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMESSAGE_H
#define UI_SENDMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sendMessage
{
public:
    QWidget *widget;
    QLabel *label;
    QTextEdit *add_message;
    QPushButton *send_message;
    QPushButton *back;
    QComboBox *comboBox;

    void setupUi(QDialog *sendMessage)
    {
        if (sendMessage->objectName().isEmpty())
            sendMessage->setObjectName("sendMessage");
        sendMessage->resize(840, 714);
        widget = new QWidget(sendMessage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-11, -11, 881, 751));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 1,\n"
"        stop: 0 #d5f5e3,\n"
"        stop: 1 #d6eaf8\n"
"    );\n"
"    margin: 0; \n"
"    padding: 0;\n"
"}\n"
""));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, -50, 751, 201));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 36pt \"Sylfaen\";\n"
"    color: #34495e;\n"
"    border-radius: 10px;\n"
"    padding-top: 48px;\n"
"    margin-top:30px;\n"
"    font-size: 30px;\n"
"   \n"
"}\n"
""));
        add_message = new QTextEdit(widget);
        add_message->setObjectName("add_message");
        add_message->setGeometry(QRect(143, 194, 541, 231));
        add_message->setStyleSheet(QString::fromUtf8("\n"
"QTextEdit {\n"
"    min-width: 500px;\n"
"    max-width: 700px;\n"
"    heigth:350px;\n"
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
        send_message = new QPushButton(widget);
        send_message->setObjectName("send_message");
        send_message->setGeometry(QRect(200, 470, 432, 156));
        send_message->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        back = new QPushButton(widget);
        back->setObjectName("back");
        back->setGeometry(QRect(200, 560, 432, 156));
        back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2ecc71;\n"
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
"    background-color: #27ae60;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1e8449;\n"
"}"));
        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(370, 160, 76, 26));

        retranslateUi(sendMessage);

        QMetaObject::connectSlotsByName(sendMessage);
    } // setupUi

    void retranslateUi(QDialog *sendMessage)
    {
        sendMessage->setWindowTitle(QCoreApplication::translate("sendMessage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("sendMessage", "Send a Message honestly without him knowing you", nullptr));
        add_message->setPlaceholderText(QCoreApplication::translate("sendMessage", "Write a Message here ...", nullptr));
        send_message->setText(QCoreApplication::translate("sendMessage", "Send Message", nullptr));
        back->setText(QCoreApplication::translate("sendMessage", "Back to main window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sendMessage: public Ui_sendMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMESSAGE_H
