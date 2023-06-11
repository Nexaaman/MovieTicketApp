/********************************************************************************
** Form generated from reading UI file 'cancel.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANCEL_H
#define UI_CANCEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_cancel
{
public:
    QLabel *label;
    QPushButton *btnCancel;
    QComboBox *cmbSeats;
    QLabel *lblInfo;

    void setupUi(QDialog *cancel)
    {
        if (cancel->objectName().isEmpty())
            cancel->setObjectName("cancel");
        cancel->resize(400, 221);
        label = new QLabel(cancel);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 90, 101, 21));
        label->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Instagram Sans\";\n"
""));
        btnCancel = new QPushButton(cancel);
        btnCancel->setObjectName("btnCancel");
        btnCancel->setGeometry(QRect(160, 150, 75, 23));
        cmbSeats = new QComboBox(cancel);
        cmbSeats->setObjectName("cmbSeats");
        cmbSeats->setGeometry(QRect(170, 90, 181, 22));
        lblInfo = new QLabel(cancel);
        lblInfo->setObjectName("lblInfo");
        lblInfo->setGeometry(QRect(290, 190, 151, 16));

        retranslateUi(cancel);

        QMetaObject::connectSlotsByName(cancel);
    } // setupUi

    void retranslateUi(QDialog *cancel)
    {
        cancel->setWindowTitle(QCoreApplication::translate("cancel", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("cancel", "Select Seat", nullptr));
        btnCancel->setText(QCoreApplication::translate("cancel", "Cancel", nullptr));
        lblInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class cancel: public Ui_cancel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANCEL_H
