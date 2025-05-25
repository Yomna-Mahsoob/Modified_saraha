#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H
#include "favoriatemessages.h"
#include "mainwindow.h"
#include "viewsendmessages.h"
#include "viewreceivedmessages.h"
#include "viewcontacts.h"
class sendMessage;
#include <QDialog>

namespace Ui {
class welcomeWindow;
}

class welcomeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit welcomeWindow(QWidget *parent = nullptr);
    ~welcomeWindow();

private slots:
    void on_logout_clicked();
    void on_send_clicked();
    void on_fav_clicked();


    void on_view_Sendmessages_clicked();

    void on_view_received_messages_clicked();

    void on_undo_clicked();
    void on_contact_clicked();

private:
    Ui::welcomeWindow *ui;
    sendMessage * send;
    MainWindow * main_window;
    favoriateMessages * fav;
    ViewSendMessages * view_send;
    viewReceivedMessages * view_received;
    ViewContacts* contacts_window;

};

#endif // WELCOMEWINDOW_H
