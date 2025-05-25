#ifndef VIEWSENDMESSAGES_H
#define VIEWSENDMESSAGES_H
#include "message.h"
#include <QDialog>

namespace Ui {
class ViewSendMessages;
}

class ViewSendMessages : public QDialog
{
    Q_OBJECT

public:
    explicit ViewSendMessages(QWidget *parent = nullptr);
    ~ViewSendMessages();
    void displayMessages();

private slots:
    void on_back_clicked();

private:
    Ui::ViewSendMessages *ui;
};

#endif // VIEWSENDMESSAGES_H
