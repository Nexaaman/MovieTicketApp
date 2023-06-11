#include "dashboard.h"
#include "ui_dashboard.h"
#include<ticket.h>
Dashboard::Dashboard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dashboard)
{
    ui->setupUi(this);
}

Dashboard::~Dashboard()
{
    delete ui;
}



void Dashboard::on_pushButton_clicked()
{
    this->hide();
    Ticket *tick = new Ticket();
    tick->show();
}

