#include "ticket.h"
#include "ui_ticket.h"
#include<confirm.h>
#include<cancel.h>
#include<QSqlDatabase>
#include<login.h>
#include<QPixmap>
Ticket::Ticket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ticket)
{
    ui->setupUi(this);

        QPixmap pic("/home/aman/Projects/Instagram_clone_app/Instagram_clone_app/image/image.jpg");
        int w = ui->label_3->width();
        int h = ui->label_3->height();
        ui->label_3->setPixmap(pic.scaled(w,h));


    QPixmap pm("/home/aman/Projects/Instagram_clone_app/Instagram_clone_app/image/infoImage.jpg");
    ui->lblInfoImage->setPixmap(pm);

    ptrBook  = new Confirm(this);
    ptrCancel = new cancel(this);

    bool test = QSqlDatabase::isDriverAvailable("QMYSQL");
    qDebug()<<test;
    login conn;
    if(!conn.connOpen()) qDebug("not connected");
    else qDebug("connected");

    connect(ptrBook, &Confirm::mysignal, this, &Ticket::updateUI);
    connect(ptrCancel, &cancel::mysignal1, this, &Ticket::updateUI);
    updateUI();
}

Ticket::~Ticket()
{
    delete ui;
    delete ptrBook;
    delete ptrCancel;
}

void Ticket::updateUI()
{
    qDebug() << "in updateUI()";
    login connn;

    if(!connn.connOpen()) qDebug("failed to open");
    connn.connOpen();
    QSqlQuery query;
    query.prepare("select Seat Available from MovieTicket");

//    QSqlQuery query(MyDB::getInstance()->getDBInstance());
//    query.prepare("select Seat, Available from cppbuzz_movie_ticket_booking");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        //ui->lblInfo->setText(query.lastError().text());
    }
    else{
        qDebug() << "read was successful "<< query.lastQuery();
    }
    while(query.next())
    {
        QString sLabel = "lbl" + query.value(0).toString();
        qDebug() <<"label is : "<< sLabel;
        QLabel * ptr = this->findChild<QLabel*>(sLabel);
        if(ptr!=nullptr)
        {   qDebug() << "label found "<<sLabel;
            if(query.value(1).toString().compare("N") == 0)
            {
                //int no = (qrand() % ((6 + 1) - 1) + 1);
                QPixmap pm("/home/aman/Projects/Instagram_clone_app/Instagram_clone_app/image/booked.jpg");
                ptr->setPixmap(pm);
                ptr->setScaledContents(true);
                qDebug()<<query.value(0).toString() << " : is booked";
            }
            else
            {
                QPixmap pm("/home/aman/Projects/Instagram_clone_app/Instagram_clone_app/image/available.jpg");
                ptr->setPixmap(pm);
                ptr->setScaledContents(true);
                qDebug()<<query.value(0).toString() << " : is Available";
            }
        }
    }

}




void Ticket::on_btnBook_clicked()
{
    ptrBook->updateUI();
    ptrBook->show();
}


void Ticket::on_btnCancel_clicked()
{
    ptrCancel->updateUI();
    ptrCancel->show();
}



void Ticket::on_btnReset_clicked()
{
    login connn;
    if(!connn.connOpen()) qDebug("failed to open");
    connn.connOpen();
    QSqlQuery query;
    query.prepare("update MovieTicket set Available = 'Y'");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        //ui->lblInfo->setText(query.lastError().text());
    }
    else{
        if(query.numRowsAffected() > 0)
        {

            qDebug() << "Update was successful. "<< query.lastQuery();
        }
        else
        {
            qDebug() << "Update Failed. "<< query.lastQuery();
        }

    }

    updateUI();
}

