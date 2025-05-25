/********************************************************************************
** Form generated from reading UI file 'viewcontacts.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCONTACTS_H
#define UI_VIEWCONTACTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewContacts
{
public:
    QWidget *widget;
    QListWidget *contactList;
    QPushButton *back;
    QLabel *Contacts;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *addContactButton;
    QLineEdit *addContactInput;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *searchContactButton;
    QLineEdit *removeContactInput;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *removeContactButton;
    QLineEdit *searchContactInput;

    void setupUi(QWidget *ViewContacts)
    {
        if (ViewContacts->objectName().isEmpty())
            ViewContacts->setObjectName("ViewContacts");
        ViewContacts->resize(850, 850);
        ViewContacts->setStyleSheet(QString::fromUtf8("QWidget {\n"
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
        widget = new QWidget(ViewContacts);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-1, -1, 850, 851));
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
        contactList = new QListWidget(widget);
        contactList->setObjectName("contactList");
        contactList->setGeometry(QRect(30, 90, 800, 431));
        back = new QPushButton(widget);
        back->setObjectName("back");
        back->setGeometry(QRect(210, 740, 432, 156));
        back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2ecc71;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    font: bold 18pt \"NSimSun\";  /* <-- This line is updated */\n"
"    margin-bottom: 100px;\n"
"    min-width: 400px;\n"
"    min-height: 40px;\n"
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
        Contacts = new QLabel(widget);
        Contacts->setObjectName("Contacts");
        Contacts->setGeometry(QRect(300, -70, 221, 191));
        Contacts->setStyleSheet(QString::fromUtf8("QLabel {\n"
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
        Contacts->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 540, 621, 196));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        addContactButton = new QPushButton(layoutWidget);
        addContactButton->setObjectName("addContactButton");
        addContactButton->setMinimumSize(QSize(140, 58));
        addContactButton->setMaximumSize(QSize(300, 16777215));
        addContactButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 4px 10px;  /* Smaller padding */\n"
"    font: 14pt \"NSimSun\";  /* Smaller font */\n"
"    font-weight: bold;\n"
"    min-width: 120px;   /* Smaller min width */\n"
"    min-height: 30px;   /* Smaller min height */\n"
"    margin-bottom: 20px;\n"
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

        horizontalLayout->addWidget(addContactButton);

        addContactInput = new QLineEdit(layoutWidget);
        addContactInput->setObjectName("addContactInput");
        addContactInput->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"    min-width: 200px;\n"
"    max-width: 300px;\n"
"    heigth:55px;\n"
"    background-color: #f0f0f0;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 18px;\n"
"    color: #333;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #888;\n"
"}\n"
""));

        horizontalLayout->addWidget(addContactInput);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        searchContactButton = new QPushButton(layoutWidget);
        searchContactButton->setObjectName("searchContactButton");
        searchContactButton->setMinimumSize(QSize(140, 58));
        searchContactButton->setMaximumSize(QSize(300, 16777215));
        searchContactButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 4px 10px;  /* Smaller padding */\n"
"    font: 14pt \"NSimSun\";  /* Smaller font */\n"
"    font-weight: bold;\n"
"    min-width: 120px;   /* Smaller min width */\n"
"    min-height: 30px;   /* Smaller min height */\n"
"    margin-bottom: 20px;\n"
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

        horizontalLayout_2->addWidget(searchContactButton);

        removeContactInput = new QLineEdit(layoutWidget);
        removeContactInput->setObjectName("removeContactInput");
        removeContactInput->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"    min-width: 200px;\n"
"    max-width: 300px;\n"
"    heigth:55px;\n"
"    background-color: #f0f0f0;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 18px;\n"
"    color: #333;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #888;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(removeContactInput);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        removeContactButton = new QPushButton(layoutWidget);
        removeContactButton->setObjectName("removeContactButton");
        removeContactButton->setMinimumSize(QSize(140, 58));
        removeContactButton->setMaximumSize(QSize(300, 16777215));
        removeContactButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 4px 10px;  /* Smaller padding */\n"
"    font: 14pt \"NSimSun\";  /* Smaller font */\n"
"    font-weight: bold;\n"
"    min-width: 120px;   /* Smaller min width */\n"
"    min-height: 30px;   /* Smaller min height */\n"
"    margin-bottom: 20px;\n"
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

        horizontalLayout_3->addWidget(removeContactButton);

        searchContactInput = new QLineEdit(layoutWidget);
        searchContactInput->setObjectName("searchContactInput");
        searchContactInput->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"    min-width: 200px;\n"
"    max-width: 300px;\n"
"    heigth:55px;\n"
"    background-color: #f0f0f0;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 18px;\n"
"    color: #333;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #888;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(searchContactInput);


        verticalLayout->addLayout(horizontalLayout_3);

        layoutWidget->raise();
        back->raise();
        Contacts->raise();
        contactList->raise();

        retranslateUi(ViewContacts);

        QMetaObject::connectSlotsByName(ViewContacts);
    } // setupUi

    void retranslateUi(QWidget *ViewContacts)
    {
        ViewContacts->setWindowTitle(QCoreApplication::translate("ViewContacts", "Form", nullptr));
        back->setText(QCoreApplication::translate("ViewContacts", "Back to main window", nullptr));
        Contacts->setText(QCoreApplication::translate("ViewContacts", "Your Contacts", nullptr));
        addContactButton->setText(QCoreApplication::translate("ViewContacts", "Add New Contact", nullptr));
        addContactInput->setText(QString());
        addContactInput->setPlaceholderText(QCoreApplication::translate("ViewContacts", "Enter a Contact to Add:", nullptr));
        searchContactButton->setText(QCoreApplication::translate("ViewContacts", "Search Contacts", nullptr));
        removeContactInput->setText(QString());
        removeContactInput->setPlaceholderText(QCoreApplication::translate("ViewContacts", "Enter a Contact to Search:", nullptr));
        removeContactButton->setText(QCoreApplication::translate("ViewContacts", "Remove Contact", nullptr));
        searchContactInput->setText(QString());
        searchContactInput->setPlaceholderText(QCoreApplication::translate("ViewContacts", "Enter a Contact to Remove:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewContacts: public Ui_ViewContacts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCONTACTS_H
