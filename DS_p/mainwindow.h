#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "registerationwindow.h"
#include "ui_login.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Register_clicked();
    void on_login_clicked();

private:
    Ui::MainWindow *ui;
    RegisterationWindow *r;
   Ui:: login *LogIn;
};
#endif // MAINWINDOW_H
