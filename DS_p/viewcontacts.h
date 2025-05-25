#ifndef VIEWCONTACTS_H
#define VIEWCONTACTS_H

#include "contact.h"
#include <QWidget>
#include <QMessageBox>

namespace Ui {
class ViewContacts;
}

class ViewContacts : public QWidget
{
    Q_OBJECT

public:
    explicit ViewContacts(QWidget *parent = nullptr);
    ~ViewContacts();

private slots:
    void on_back_clicked();

    void on_searchContactButton_clicked();
    void on_removeContactButton_clicked();

private:
    Ui::ViewContacts *ui;
    void refreshContacts();
    void displayContact(const Contact& contact);
};
#endif // VIEWCONTACTS_H
