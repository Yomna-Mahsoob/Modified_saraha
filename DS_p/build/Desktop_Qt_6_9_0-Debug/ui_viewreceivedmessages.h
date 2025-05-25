/********************************************************************************
** Form generated from reading UI file 'viewreceivedmessages.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWRECEIVEDMESSAGES_H
#define UI_VIEWRECEIVEDMESSAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewReceivedMessages
{
public:
    QWidget *widget;
    QLabel *label;
    QPushButton *back;
    QListWidget *listWidget;
    QComboBox *comboBox;

    void setupUi(QDialog *viewReceivedMessages)
    {
        if (viewReceivedMessages->objectName().isEmpty())
            viewReceivedMessages->setObjectName("viewReceivedMessages");
        viewReceivedMessages->resize(953, 841);
        widget = new QWidget(viewReceivedMessages);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-11, -11, 981, 861));
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
        label->setGeometry(QRect(310, -10, 381, 131));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 38pt \"Sylfaen\";\n"
"    color: #34495e;\n"
"    border-radius: 10px;\n"
"    padding: 12px;\n"
"    padding-top: 48px;\n"
"    margin-top:20px;\n"
"    font-size: 30px;\n"
"   \n"
"}\n"
""));
        back = new QPushButton(widget);
        back->setObjectName("back");
        back->setGeometry(QRect(260, 670, 432, 156));
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
        listWidget = new QListWidget(widget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(170, 190, 621, 411));
        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(420, 130, 86, 26));

        retranslateUi(viewReceivedMessages);

        QMetaObject::connectSlotsByName(viewReceivedMessages);
    } // setupUi

    void retranslateUi(QDialog *viewReceivedMessages)
    {
        viewReceivedMessages->setWindowTitle(QCoreApplication::translate("viewReceivedMessages", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("viewReceivedMessages", "Received Messages", nullptr));
        back->setText(QCoreApplication::translate("viewReceivedMessages", "Back to main window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewReceivedMessages: public Ui_viewReceivedMessages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWRECEIVEDMESSAGES_H
