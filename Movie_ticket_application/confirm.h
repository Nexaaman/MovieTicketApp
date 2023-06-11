#ifndef CONFIRM_H
#define CONFIRM_H

#include <QDialog>

namespace Ui {
class Confirm;
}

class Confirm : public QDialog
{
    Q_OBJECT

public:
    explicit Confirm(QWidget *parent = nullptr);
    ~Confirm();
    void updateUI();

private slots:
    void on_btnBook_clicked();

private:
    Ui::Confirm *ui;

signals:
void mysignal();

};

#endif // CONFIRM_H
