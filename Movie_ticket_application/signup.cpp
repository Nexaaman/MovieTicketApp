#include "signup.h"
#include "ui_signup.h"
#include<QPixmap>
#include "login.h"
#include<QMessageBox>
#include<QString>
#include<QSqlDatabase>
#include<QDebug>
#include<QMessageBox>

signup::signup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
//    QPixmap pic("/home/aman/Projects/Instagram_clone_app/Instagram_clone_app/image/cineapp.png");
//    int w = ui->label->width();
//    int h = ui->label->height();
//    ui->label->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio));

    login conn;
    if(!conn.connOpen()) qDebug("not connected");
    else qDebug("connected");

}

signup::~signup()
{
    delete ui;
}

void signup::on_Login_clicked()
{
    this->hide();
    login *setdialog = new login();
    setdialog->show();
}


void signup::on_Signup_clicked()
{   
    login conn;
    QString email,fullname,username,password;
    email = ui->Mobile->text();
    fullname = ui->FullName->text();
    username = ui->UserName->text();
    password= ui->Password->text();

    if(!conn.connOpen()) qDebug("failed to open");
    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("insert into Accounts (email,Fullname,Username,password) values('"+email+"' , '"+fullname+"' , '"+username+"' , '"+password+"')");
    if(qry.exec()){
        QMessageBox::StandardButton reply = QMessageBox::information(this,"Info",
                                        "Account created succesfully click Ok to Login", QMessageBox::Ok);
        if(reply){
            this->hide();
            login *setdialog = new login();
            setdialog->show();
        }
        conn.connClose();
    }else{
        QMessageBox::information(this, "info" , "unsucessfull");
    }

}
