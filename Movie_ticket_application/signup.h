#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>
#include<login.h>
#include<QtSql>
#include<QDebug>
#include<QFileInfo>
#include<QSqlDatabase>
namespace Ui {
class signup;
}

class signup : public QMainWindow
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();

private slots:
    void on_Login_clicked();

    void on_Signup_clicked();

private:
    Ui::signup *ui;
};

#endif // SIGNUP_H
