#include "dialog10.h"
#include "ui_dialog10.h"

Dialog10::Dialog10(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dialog10)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),SIGNAL(closeMe()));
}

Dialog10::~Dialog10()
{
    delete ui;
}
