#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    newDialog = new Dialog(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete newDialog;

}




void MainWindow::on_pushButton_clicked()
{
    newDialog->show();
}

