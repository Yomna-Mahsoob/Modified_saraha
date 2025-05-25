/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *login;
    QPushButton *Register;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1037, 599);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-20, 0, 1081, 611));
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
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(99, 50, 893, 471));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 36pt \"Sylfaen\";\n"
"    color: #34495e;\n"
"    border-radius: 10px;\n"
"    padding: 12px;\n"
"    padding-top: 48px;\n"
"    margin-top:55px;\n"
"    font-size: 30px;\n"
"   \n"
"}\n"
""));
        label_2->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        login = new QPushButton(verticalLayoutWidget);
        login->setObjectName("login");
        login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2ecc71;\n"
"    color: white;\n"
"    border-radius: 6px;\n"
"    padding: 6px 14px;\n"
"    font-size: 13px;\n"
"    font-weight: bold;\n"
"	font: 18pt \"NSimSun\";\n"
"    margin-bottom:100px;\n"
"   min-width: 120px;\n"
"    min-height: 40px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #27ae60;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1e8449;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(login);

        Register = new QPushButton(verticalLayoutWidget);
        Register->setObjectName("Register");
        Register->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    font-weight: bold;\n"
"    margin-bottom:100px;\n"
"	font: 18pt \"NSimSun\";\n"
"    min-width: 120px;\n"
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

        horizontalLayout_3->addWidget(Register);


        verticalLayout_2->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1037, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:700;\">Welcome To Saraha</span></p></body></html>", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "Log In", nullptr));
        Register->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
