/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLineEdit *UserName;
    QPushButton *Signup;
    QLineEdit *FullName;
    QLineEdit *Mobile;
    QLineEdit *Password;
    QLabel *label;
    QTextEdit *textEdit;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QPushButton *Login;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(1112, 768);
        signup->setStyleSheet(QString::fromUtf8("background-color: rgb(250,250, 250);"));
        centralwidget = new QWidget(signup);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(330, 70, 511, 541));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        UserName = new QLineEdit(groupBox);
        UserName->setObjectName("UserName");
        UserName->setGeometry(QRect(40, 280, 421, 41));
        Signup = new QPushButton(groupBox);
        Signup->setObjectName("Signup");
        Signup->setGeometry(QRect(40, 400, 421, 41));
        Signup->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);\n"
"font: 700 13pt \"Instagram Sans\";\n"
"background-color: rgb(224, 27, 36);"));
        FullName = new QLineEdit(groupBox);
        FullName->setObjectName("FullName");
        FullName->setGeometry(QRect(40, 230, 421, 41));
        Mobile = new QLineEdit(groupBox);
        Mobile->setObjectName("Mobile");
        Mobile->setGeometry(QRect(40, 180, 421, 41));
        Password = new QLineEdit(groupBox);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(40, 330, 421, 41));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 50, 401, 111));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/cineapp.png")));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(100, 450, 301, 70));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(329, 640, 511, 80));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 30, 151, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Instagram Sans")});
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Instagram Sans\";"));
        Login = new QPushButton(groupBox_2);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(280, 30, 71, 25));
        Login->setStyleSheet(QString::fromUtf8("background-color: rgba(250, 250, 250,0);\n"
"color: rgb(0,0,250);"));
        signup->setCentralWidget(centralwidget);
        menubar = new QMenuBar(signup);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1112, 22));
        signup->setMenuBar(menubar);
        statusbar = new QStatusBar(signup);
        statusbar->setObjectName("statusbar");
        signup->setStatusBar(statusbar);

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QMainWindow *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        UserName->setPlaceholderText(QCoreApplication::translate("signup", "   User Name", nullptr));
        Signup->setText(QCoreApplication::translate("signup", "Sign Up", nullptr));
        FullName->setPlaceholderText(QCoreApplication::translate("signup", "   Full Name", nullptr));
        Mobile->setPlaceholderText(QCoreApplication::translate("signup", "    Mobile Number or  Email", nullptr));
        Password->setPlaceholderText(QCoreApplication::translate("signup", "   Password", nullptr));
        label->setText(QString());
        textEdit->setHtml(QCoreApplication::translate("signup", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">       By signing up, You agree to our <span style=\" font-weight:700;\">Terms</span>,     <span style=\" font-weight:700;\">Data</span> policy and <span style=\" font-weight:700;\">cookies policy</span>.</p></body></html>", nullptr));
        groupBox_2->setTitle(QString());
        label_2->setText(QCoreApplication::translate("signup", "Have an account?", nullptr));
        Login->setText(QCoreApplication::translate("signup", "Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
