#ifndef FAVORIATEMESSAGES_H
#define FAVORIATEMESSAGES_H
class welcomeWindow;
#include <QDialog>
#include<message.h>

namespace Ui {
class favoriateMessages;
}

class favoriateMessages : public QDialog
{
    Q_OBJECT

public:
    explicit favoriateMessages(QWidget *parent = nullptr);
    ~favoriateMessages();

private slots:
    void on_removeOLdestFav_clicked();


    void on_back_clicked();

private:
    Ui::favoriateMessages *ui;
    welcomeWindow*w;
private:
    void displayFavoriteMessages();
    QList<Message*> getOrderedFavoriteMessages(QMap<int, Message*>& map);
};

#endif // FAVORIATEMESSAGES_H
