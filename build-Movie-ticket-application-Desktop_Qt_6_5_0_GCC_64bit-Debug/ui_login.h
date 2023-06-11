/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *login_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *phone;
    QLineEdit *password;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(1197, 832);
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 250, 250);"));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(340, 80, 511, 481));
        groupBox->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        login_2 = new QPushButton(groupBox);
        login_2->setObjectName("login_2");
        login_2->setGeometry(QRect(50, 340, 421, 41));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(login_2->sizePolicy().hasHeightForWidth());
        login_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Instagram Sans")});
        font.setPointSize(14);
        font.setBold(true);
        login_2->setFont(font);
        login_2->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);\n"
"background-color: rgb(224, 27, 36);"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 60, 391, 111));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/cineapp.png")));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 420, 151, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Instagram Sans")});
        font1.setPointSize(13);
        label_2->setFont(font1);
        phone = new QLineEdit(groupBox);
        phone->setObjectName("phone");
        phone->setGeometry(QRect(50, 210, 421, 41));
        password = new QLineEdit(groupBox);
        password->setObjectName("password");
        password->setGeometry(QRect(50, 270, 421, 41));
        password->setEchoMode(QLineEdit::Password);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(340, 610, 511, 101));
        groupBox_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 30, 191, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Instagram Sans")});
        font2.setPointSize(13);
        font2.setBold(false);
        font2.setItalic(false);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("font: italic 14pt \"Instagram Sans\";\n"
"font: 13pt \"Instagram Sans\";"));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(270, 40, 71, 25));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 250);\n"
"background-color: rgba(252, 250, 250, 0);"));
        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1197, 22));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName("statusbar");
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Login", nullptr));
        groupBox->setTitle(QString());
        login_2->setText(QCoreApplication::translate("login", "Log in", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("login", "Forgot Password?", nullptr));
        phone->setPlaceholderText(QCoreApplication::translate("login", "  Phone number,  user name or email", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("login", "Password", nullptr));
        groupBox_2->setTitle(QString());
        label_3->setText(QCoreApplication::translate("login", "Don't have an account?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("login", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
