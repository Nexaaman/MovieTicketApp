#include "confirm.h"
#include "ui_confirm.h"
#include<login.h>
Confirm::Confirm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Confirm)
{
    ui->setupUi(this);

    QPixmap pic("/home/aman/Projects/Instagram_clone_app/Instagram_clone_app/image/cineapp.png");
    int w = ui->label_2->width();
    int h = ui->label_2->height();
    ui->label_2->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio));
    login conn;
    if(!conn.connOpen()) qDebug("not connected");
    else qDebug("connected");

}

Confirm::~Confirm()
{
    delete ui;
}

void Confirm::updateUI()
{
    ui->cmbSeats->clear();
    //ui->lblInfo->setText("");

    QSqlQuery query;
    query.prepare("select Seat from MovieTicket where Available='Y'");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        ui->lblInfo->setText(query.lastError().text());
    }
    else{
        qDebug() << "read was successful "<< query.lastQuery();
    }

    while(query.next())
    {
        ui->cmbSeats->addItem(query.value(0).toString());
    }

    if(ui->cmbSeats->count()<=0)
        ui->btnBook->setEnabled(false);
}

void Confirm::on_btnBook_clicked()
{
    QString sSeat = ui->cmbSeats->currentText();

    QSqlQuery query;
    query.prepare("update MovieTicket set Available='N' where Seat= '" + sSeat +"'");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        ui->lblInfo->setText(query.lastError().text());
    }
    else{
        if(query.numRowsAffected() > 0)
        {
            ui->lblInfo->setText("Success!");
            qDebug() << "read was successful "<< query.lastQuery();
        }
        else
        {
            ui->lblInfo->setText("Unable to update data");
        }
    }

    updateUI();
    emit mysignal();
}

