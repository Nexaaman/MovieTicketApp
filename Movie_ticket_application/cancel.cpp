#include "cancel.h"
#include "ui_cancel.h"
#include<login.h>
cancel::cancel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cancel)
{
    ui->setupUi(this);
    login conn;
    if(!conn.connOpen()) qDebug("not connected");
    else qDebug("connected");
    updateUI();
}

cancel::~cancel()
{
    delete ui;
}

void cancel::updateUI()
{
    ui->cmbSeats->clear();
    //ui->lblInfo->setText("");

    QSqlQuery query;
    query.prepare("select Seat from MovieTicket where Available='N'");

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
        ui->btnCancel->setEnabled(false);

}

void cancel::on_btnCancel_clicked()
{
    QString sSeat = ui->cmbSeats->currentText();

    QSqlQuery query;
    query.prepare("update MovieTicket set Available='Y' where Seat= '" + sSeat +"'");

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
    emit mysignal1();
}
