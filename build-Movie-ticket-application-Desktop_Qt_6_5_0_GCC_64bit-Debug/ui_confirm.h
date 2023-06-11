/********************************************************************************
** Form generated from reading UI file 'confirm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRM_H
#define UI_CONFIRM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Confirm
{
public:
    QPushButton *btnBook;
    QComboBox *cmbSeats;
    QLabel *label;
    QLabel *lblInfo;
    QLabel *label_2;

    void setupUi(QDialog *Confirm)
    {
        if (Confirm->objectName().isEmpty())
            Confirm->setObjectName("Confirm");
        Confirm->resize(400, 223);
        btnBook = new QPushButton(Confirm);
        btnBook->setObjectName("btnBook");
        btnBook->setGeometry(QRect(150, 140, 75, 23));
        cmbSeats = new QComboBox(Confirm);
        cmbSeats->setObjectName("cmbSeats");
        cmbSeats->setGeometry(QRect(150, 70, 211, 22));
        label = new QLabel(Confirm);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 70, 101, 21));
        label->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Instagram Sans\";"));
        lblInfo = new QLabel(Confirm);
        lblInfo->setObjectName("lblInfo");
        lblInfo->setGeometry(QRect(240, 200, 151, 16));
        label_2 = new QLabel(Confirm);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 121, 61));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/cineapp.png")));

        retranslateUi(Confirm);

        QMetaObject::connectSlotsByName(Confirm);
    } // setupUi

    void retranslateUi(QDialog *Confirm)
    {
        Confirm->setWindowTitle(QCoreApplication::translate("Confirm", "Dialog", nullptr));
        btnBook->setText(QCoreApplication::translate("Confirm", "Book", nullptr));
        label->setText(QCoreApplication::translate("Confirm", "Select Seat", nullptr));
        lblInfo->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Confirm: public Ui_Confirm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRM_H
