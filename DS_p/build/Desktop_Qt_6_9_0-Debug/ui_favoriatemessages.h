/********************************************************************************
** Form generated from reading UI file 'favoriatemessages.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAVORIATEMESSAGES_H
#define UI_FAVORIATEMESSAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_favoriateMessages
{
public:
    QWidget *widget;
    QLabel *label;
    QPushButton *back;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *favoriateMessages)
    {
        if (favoriateMessages->objectName().isEmpty())
            favoriateMessages->setObjectName("favoriateMessages");
        favoriateMessages->resize(894, 691);
        widget = new QWidget(favoriateMessages);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-20, 0, 911, 691));
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
        label->setGeometry(QRect(300, -60, 301, 201));
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
        back->setGeometry(QRect(250, 590, 432, 156));
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
        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(170, 100, 581, 441));
        scrollArea->setStyleSheet(QString::fromUtf8("\n"
"QScrollArea{\n"
"    min-width: 500px;\n"
"    max-width: 700px;\n"
"    heigth:500px;\n"
"    border: 1px solid #2ecc71;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"}\n"
"\n"
"\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 569, 429));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(favoriateMessages);

        QMetaObject::connectSlotsByName(favoriateMessages);
    } // setupUi

    void retranslateUi(QDialog *favoriateMessages)
    {
        favoriateMessages->setWindowTitle(QCoreApplication::translate("favoriateMessages", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("favoriateMessages", "Favoriate Messages", nullptr));
        back->setText(QCoreApplication::translate("favoriateMessages", "Back to main window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class favoriateMessages: public Ui_favoriateMessages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAVORIATEMESSAGES_H
