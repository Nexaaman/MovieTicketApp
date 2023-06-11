#include "login.h"
#include "ui_login.h"
#include<QPixmap>
#include<QDebug>
#include<signup.h>
#include<QSqlDatabase>
#include<QDebug>
#include<QMessageBox>
#include<dashboard.h>
login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

//    QPixmap pic("/home/aman/Projects/Instagram_clone_app/Instagram_clone_app/image/cineapp.png");
//    int w = ui->label->width();
//    int h = ui->label->height();
//    ui->label->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio));
    bool test = QSqlDatabase::isDriverAvailable("QMYSQL");
    qDebug()<<test;

    if(!connOpen()){
        qDebug("failed to open db");
    }else{
        qDebug("connected..");
    }

}

login::~login()
{
    delete ui;
}



void login::on_pushButton_2_clicked()
{
    this->hide();
    signup *setdialog2 = new signup();
    setdialog2->show();
}


void login::on_login_2_clicked()
{
    QString Email = ui->phone->text();
    QString Password = ui->password->text();

    if(!connOpen()){
        qDebug("not connected");
        return;
    }
//    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from Accounts where email = '"+Email+"' AND password = '"+Password+"'");
    if(qry.exec()){
        int cnt = 0;
        while(qry.next()){
            cnt++;
        }if(cnt == 1){
            this->hide();
            Dashboard *dashbrd = new Dashboard();
            dashbrd->show();
//            QMessageBox::information(this, "info" , "user name and password correct");
            connClose();
        }if(cnt>1){
            QMessageBox::information(this , "info" ,"user and password are duplicate");

        }if(cnt<1){
            QMessageBox::information(this , "info" ,"user password are incorrect");

        }
    }
}
