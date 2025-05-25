#ifndef SENDMESSAGE_H
#define SENDMESSAGE_H
class welcomeWindow;
#include <QDialog>

namespace Ui {
class sendMessage;
}

class sendMessage : public QDialog
{
    Q_OBJECT

public:
    explicit sendMessage(QWidget *parent = nullptr);
    bool limit_Message_length(QString& text);
    ~sendMessage();
    void DisplayUsers();

private slots:
    void on_send_message_clicked();
    void on_back_clicked();
private:
    Ui::sendMessage *ui;
    welcomeWindow* w;
};

#endif // SENDMESSAGE_H
