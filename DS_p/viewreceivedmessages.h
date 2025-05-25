#ifndef VIEWRECEIVEDMESSAGES_H
#define VIEWRECEIVEDMESSAGES_H

#include <QDialog>
#include <QQueue>

namespace Ui {
class viewReceivedMessages;
}

class viewReceivedMessages : public QDialog
{
    Q_OBJECT

public:
    explicit viewReceivedMessages(QWidget *parent = nullptr);
    ~viewReceivedMessages();

    static QQueue<int> favoriteMessageQueue; // Queue to track favorite message IDs


private slots:
    void on_back_clicked();

    void on_view_clicked();

private:
    Ui::viewReceivedMessages *ui;
};

#endif // VIEWRECEIVEDMESSAGES_H
