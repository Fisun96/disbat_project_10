#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dialog = new Dialog10;

    connect(ui->pushButton,SIGNAL(clicked()),SLOT(openDialog()));
    connect(dialog,SIGNAL(closeMe()),SLOT(closeDialog()));
    connect(ui->pushButton_2,SIGNAL(clicked()),SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete dialog;
}

void MainWindow::openDialog()
{
    dialog->show();
}

void MainWindow::closeDialog()
{
    dialog->close();
}
