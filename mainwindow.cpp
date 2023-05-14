#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>

//#include "secondwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_ok_clicked()
{
    QString firstName = ui->leFirstName->text();
    QString LastName = ui->leLastName->text();
    ui->lb_welcome->setText("Welcome, " + firstName + " " + LastName);
}


void MainWindow::on_btn_clear_clicked()
{
    ui->leFirstName->setText("");
    ui->leLastName->setText("");
    ui->lb_welcome->setText("");


}


void MainWindow::on_pushButton_clicked()
{
//    Secondwindow H;
//    H.setModal(true);
//    H.exec();

//    hide();
    Secondwindow = new class Secondwindow(this);
    Secondwindow->show();
//    show();
}

