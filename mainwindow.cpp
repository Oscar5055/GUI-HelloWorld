#include "mainwindow.h"
#include "ui_mainwindow.h"


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


void MainWindow::on_ClickMe_clicked()
{
    if(ui->HelloWorld->isVisibleTo(false))
    {
        ui->HelloWorld->setVisible(false);
        ui->ClickMe->setText("Show Text Again");
    }
    else
    {
        ui->HelloWorld->setVisible(true);
        ui->ClickMe->setText("Hide Text");
    }

}


