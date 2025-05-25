/********************************************************************************
** Form generated from reading UI file 'RegisterWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(1037, 664);
        Dialog->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 1,\n"
"        stop: 0 #d5f5e3,\n"
"        stop: 1 #d6eaf8\n"
"    );\n"
"    margin: 0; \n"
"    padding: 0; \n"
"}\n"
""));
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(120, 130, 821, 511));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"       background-color: #f0f0f0;  \n"
"       border: 1px solid #ccc;       \n"
"       border-radius: 5px;      \n"
"       padding: 5px;                \n"
"       font-size: 14px;              \n"
"       color: #333;      \n"
"     min-width: 400px;\n"
"    max-width: 600px;           \n"
"    }\n"
"    QLineEdit::placeholder {\n"
"       color: #888;                 \n"
"    }"));

        verticalLayout->addWidget(lineEdit);

        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 30, 361, 71));
        label->setStyleSheet(QString::fromUtf8("font: 28pt \"Sylfaen\";"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("Dialog", "Enter Your Email", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p align=\"center\"><span style=\" color:#34599e;\">Create Account</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
