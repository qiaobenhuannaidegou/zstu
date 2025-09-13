/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QCalendarWidget *calendarWidget;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_6;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(800, 600);
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 30, 311, 61));
        pushButton = new QPushButton(Login);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 110, 241, 91));
        pushButton_2 = new QPushButton(Login);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 350, 241, 91));
        pushButton_3 = new QPushButton(Login);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(100, 230, 241, 91));
        pushButton_4 = new QPushButton(Login);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(100, 470, 241, 91));
        pushButton_5 = new QPushButton(Login);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(620, 520, 111, 51));
        calendarWidget = new QCalendarWidget(Login);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(440, 80, 296, 229));
        lcdNumber = new QLCDNumber(Login);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(440, 370, 291, 91));
        lcdNumber->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));
        pushButton_6 = new QPushButton(Login);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(460, 520, 101, 51));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        label->setText(QCoreApplication::translate("Login", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Welcome Customer</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Login", "Reservation Seat", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Login", "Modify Reservation", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Login", "Cancel Reservation", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Login", "Print On Site Queue", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Login", "Exit", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Login", "Book Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
