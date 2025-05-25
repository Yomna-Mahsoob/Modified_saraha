/********************************************************************************
** Form generated from reading UI file 'viewsendmessages.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWSENDMESSAGES_H
#define UI_VIEWSENDMESSAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewSendMessages
{
public:
    QWidget *widget;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *back;

    void setupUi(QDialog *ViewSendMessages)
    {
        if (ViewSendMessages->objectName().isEmpty())
            ViewSendMessages->setObjectName("ViewSendMessages");
        ViewSendMessages->resize(1010, 847);
        widget = new QWidget(ViewSendMessages);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-11, -21, 1051, 901));
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
        label->setGeometry(QRect(340, -10, 301, 161));
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
        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(170, 170, 671, 511));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 669, 509));
        scrollArea->setWidget(scrollAreaWidgetContents);
        back = new QPushButton(widget);
        back->setObjectName("back");
        back->setGeometry(QRect(290, 710, 432, 156));
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

        retranslateUi(ViewSendMessages);

        QMetaObject::connectSlotsByName(ViewSendMessages);
    } // setupUi

    void retranslateUi(QDialog *ViewSendMessages)
    {
        ViewSendMessages->setWindowTitle(QCoreApplication::translate("ViewSendMessages", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ViewSendMessages", "All Send Messages", nullptr));
        back->setText(QCoreApplication::translate("ViewSendMessages", "Back to main window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewSendMessages: public Ui_ViewSendMessages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWSENDMESSAGES_H
