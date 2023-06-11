#ifndef LOGIN_H
#define LOGIN_H
#include<QMainWindow>
#include<QtSql>
#include<QDebug>
#include<QFileInfo>
#include<QSqlDatabase>
namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT
public:
//    QSqlDatabase mydb;
    void connClose(){
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen(){
        mydb = QSqlDatabase::addDatabase("QMYSQL");
        mydb.setHostName("127.0.0.1");
        mydb.setDatabaseName("instagram_db");
        mydb.setUserName("root");
        mydb.setPassword("");
        if(!mydb.open()){
            qDebug("not connected");
            return false;
        }else{
            qDebug("connected");
            return true;
        }
    }
public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pushButton_2_clicked();

    void on_login_2_clicked();

private:
    Ui::login *ui;
    QSqlDatabase mydb;
};

#endif // LOGIN_H
