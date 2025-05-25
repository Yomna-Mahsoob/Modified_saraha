#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "authmanager.h"
#include "welcomewindow.h"

class welcomeWindow;
namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_login_2_clicked();
    void on_Submit_clicked();

private:
    Ui::login *ui;
    AuthManager *authManager;

    welcomeWindow * w;

};

#endif // LOGIN_H
