#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QFile file("C:\\Users\\Sebastián\\Desktop\\DEMO_FINAL\\Alumnos.txt");
    if(!file.open(QIODevice::ReadOnly))
    QMessageBox::information(0,"info",file.errorString());
    QTextStream in (&file);
    ui->textBrowser->setText(in.readAll());
}



void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::on_pushButton_3_clicked()
{

}
