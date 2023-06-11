#ifndef TICKET_H
#define TICKET_H
#include<confirm.h>
#include<cancel.h>
#include <QDialog>

namespace Ui {
class Ticket;
}

class Ticket : public QDialog
{
    Q_OBJECT

public:
    explicit Ticket(QWidget *parent = nullptr);
    ~Ticket();
    void updateUI();
private slots:
    void on_btnBook_clicked();

    void on_btnCancel_clicked();

    void on_btnReset_clicked();

private:
    Ui::Ticket *ui;
    Confirm *ptrBook;
    cancel *ptrCancel;
};

#endif // TICKET_H
