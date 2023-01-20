#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_pushButton_clicked()
{
    //сложение
    double a = ui->lineEdit->text().toDouble();
    double b = ui->lineEdit_2->text().toDouble();
    double ans = a + b;
    QString tmp;
    tmp.setNum(ans);
    ui->textBrowser->setText(tmp);
}

void MainWindow::on_pushButton_2_clicked()
{
    //вычитание
    double a = ui->lineEdit->text().toDouble();
    double b = ui->lineEdit_2->text().toDouble();
    double ans = a - b;
    QString tmp;
    tmp.setNum(ans);
    ui->textBrowser->setText(tmp);
}


void MainWindow::on_pushButton_3_clicked()
{
    //умножение
    double a = ui->lineEdit->text().toDouble();
    double b = ui->lineEdit_2->text().toDouble();
    double ans = a * b;
    QString tmp;
    tmp.setNum(ans);
    ui->textBrowser->setText(tmp);
}


void MainWindow::on_pushButton_4_clicked()
{
    //деление
    double a = ui->lineEdit->text().toDouble();
    double b = ui->lineEdit_2->text().toDouble();
    double ans = 0;
    if(b != 0) {
        ans = a / b;
    }
    QString tmp;
    tmp.setNum(ans);
    ui->textBrowser->setText(tmp);
}


void MainWindow::on_pushButton_5_clicked()
{
    //модуль числа
    double a = ui->lineEdit->text().toDouble();
    double ans = abs(a);
    QString tmp;
    tmp.setNum(ans);
    ui->textBrowser->setText(tmp);
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
}

