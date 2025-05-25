#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registerationwindow.h"
// #include "ui_login.h"
#include "login.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
setWindowTitle("Saraha");
    r = new RegisterationWindow(this);
   login * log_in= new login (this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Register_clicked()
{
    r->show();
    hide();
}

void MainWindow::on_login_clicked()
{
    login * log_in =new login ();
    log_in->show();
    hide();
}
