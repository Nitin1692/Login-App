#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/imhg/imfj/login.png");
    int w = ui->label_3->width();
    int h = ui->label_3->height();
    ui->label_3->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    if(username=="zayn" && password == "test" ){
        ui->statusbar->showMessage("Username and password is correct", 5000);
    }
    else{
        ui->statusbar->showMessage("Username and password is not correct", 5000);
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    hide();
    sign = new signin(this);
    sign->show();
}

