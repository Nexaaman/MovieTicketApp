#include "interface.h"
#include "ui_interface.h"
#include "login.h"
interface::interface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::interface)
{
    ui->setupUi(this);
}

interface::~interface()
{
    delete ui;
}
void interface::on_pushButton_clicked()
{
    this->hide();
    login *setdialog = new login();
    setdialog->show();
}

