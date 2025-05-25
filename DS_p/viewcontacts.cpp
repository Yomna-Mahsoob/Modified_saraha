#include "viewcontacts.h"
#include "ui_viewcontacts.h"
#include "welcomewindow.h"
#include <QMessageBox>
#include <QListWidgetItem>
#include<filemanager.h>

ViewContacts::ViewContacts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ViewContacts)
{
    FileManager fm;
    fm.readRemovedContacts(AuthManager::currentuser);
    ui->setupUi(this);
    setWindowTitle("Your Contacts");
    refreshContacts();
}

ViewContacts::~ViewContacts()
{
    delete ui;
}

void ViewContacts::refreshContacts()
{
    FileManager fm;
    fm.readRemovedContacts(AuthManager::currentuser);
    fm.readUserContacts(AuthManager::currentuser);
    ui->contactList->clear();

    User& currentUser = AuthManager::currentuser;
    auto contacts = currentUser.getContactsSortedByMessageCount();

    if (contacts.isEmpty()) {
        QListWidgetItem *item = new QListWidgetItem("No Contacts Available");
        item->setForeground(QColor(Qt::black));
        item->setTextAlignment(Qt::AlignCenter);
        ui->contactList->addItem(item);
        return;
    }

    for (const Contact& contact : contacts) {
        // Create the visual card
        QWidget *card = new QWidget();
        card->setStyleSheet("background-color: #ffffff;"
                            "border: 1px solid #ccc;"
                            "border-radius: 10px;"
                            "padding: 15px;"
                            "margin: 8px;");

        QVBoxLayout *cardLayout = new QVBoxLayout(card);

        QLabel *label = new QLabel();
        label->setTextFormat(Qt::RichText);
        label->setWordWrap(true);
        label->setStyleSheet("color: black; font-size: 18px;");

        QString formattedContact = QString(
                                       "<b>Contact ID:</b> %1<br>"
                                       "<b>Messages Exchanged:</b> %2"
                                       ).arg(contact.getContactId())
                                       .arg(contact.getMessageCount());

        label->setText(formattedContact);
        cardLayout->addWidget(label);

        // Add card to QListWidget
        QListWidgetItem *item = new QListWidgetItem();
        item->setSizeHint(card->sizeHint());
        item->setData(Qt::UserRole, contact.getContactId());
        ui->contactList->addItem(item);
        ui->contactList->setItemWidget(item, card);
    }
}

void ViewContacts::on_back_clicked()
{
    welcomeWindow *w = new welcomeWindow();
    w->show();
    this->close();
}

void ViewContacts::on_searchContactButton_clicked()
{
    QString searchTerm = ui->searchContactInput->text().trimmed();
    if(searchTerm.isEmpty()) {
        refreshContacts();
        return;
    }

    bool valid;
    int searchId = searchTerm.toInt(&valid);
    if(!valid) {
        QMessageBox::warning(this, "Error", "Invalid Search ID");
        return;
    }

    User& currentUser = AuthManager::currentuser;
    ui->contactList->clear();

    if(currentUser.searchContact(searchId)) {
        for(const Contact& contact : currentUser.getContactsSortedByMessageCount()) {
            if(contact.getContactId() == searchId) {
                // Create styled card
                QWidget *card = new QWidget();
                card->setStyleSheet("background-color: #ffffff; border: 1px solid #ccc; border-radius: 10px; padding: 15px; margin: 8px;");

                QVBoxLayout *cardLayout = new QVBoxLayout(card);

                QLabel *label = new QLabel();
                label->setTextFormat(Qt::RichText);
                label->setWordWrap(true);
                label->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);

                QString formattedContact = QString(
                                               "<b>Contact ID:</b> %1<br>"
                                               "<b>Messages Exchanged:</b> %2"
                                               ).arg(contact.getContactId())
                                               .arg(contact.getMessageCount());

                label->setText(formattedContact);
                label->setStyleSheet("color: black; margin: auto;font-size: 18px;");
                cardLayout->addWidget(label);

                QListWidgetItem *item = new QListWidgetItem(ui->contactList);
                item->setSizeHint(card->sizeHint());

                ui->contactList->addItem(item);
                ui->contactList->setItemWidget(item, card);

                break;
            }
        }
    } else {
        QListWidgetItem *item = new QListWidgetItem("Contact not found");
        item->setForeground(QColor(Qt::black));
        item->setTextAlignment(Qt::AlignCenter);
        ui->contactList->addItem(item);
    }
}

void ViewContacts::on_removeContactButton_clicked()
{
    QString input = ui->removeContactInput->text().trimmed();
    if(input.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please Enter A Contact ID");
        return;
    }

    bool valid;
    int contactId = input.toInt(&valid);
    if(!valid) {
        QMessageBox::warning(this, "Error", "Invalid ID format");
        return;
    }

    User& currentUser = AuthManager::currentuser;
    if(currentUser.removeContact(contactId)) {
        FileManager fm;
        fm.saveRemovedContacts(currentUser);
        fm.deleteContact(currentUser, contactId);
        refreshContacts();

        QMessageBox::information(this, "Success", "Contact Removed");
    } else {
        QMessageBox::warning(this, "Error", "Contact Not Found");
    }

    ui->removeContactInput->clear();


}
