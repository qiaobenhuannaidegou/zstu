/********************************************************************************
** Form generated from reading UI file 'administor.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTOR_H
#define UI_ADMINISTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administor
{
public:
    QLabel *label;
    QPushButton *pushButton_4;
    QCalendarWidget *calendarWidget;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QWidget *Administor)
    {
        if (Administor->objectName().isEmpty())
            Administor->setObjectName("Administor");
        Administor->resize(800, 600);
        label = new QLabel(Administor);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 50, 351, 61));
        pushButton_4 = new QPushButton(Administor);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(630, 520, 131, 51));
        pushButton_4->setStyleSheet(QString::fromUtf8(""));
        calendarWidget = new QCalendarWidget(Administor);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(450, 80, 296, 229));
        lcdNumber = new QLCDNumber(Administor);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(460, 380, 281, 91));
        lcdNumber->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));
        pushButton_5 = new QPushButton(Administor);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(80, 160, 291, 81));
        pushButton_6 = new QPushButton(Administor);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(80, 400, 291, 81));
        pushButton_7 = new QPushButton(Administor);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(80, 270, 291, 81));

        retranslateUi(Administor);

        QMetaObject::connectSlotsByName(Administor);
    } // setupUi

    void retranslateUi(QWidget *Administor)
    {
        Administor->setWindowTitle(QCoreApplication::translate("Administor", "Form", nullptr));
        label->setText(QCoreApplication::translate("Administor", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Welcome Administrator</span></p></body></html>", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Administor", "Exit", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Administor", "Print Reservation", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Administor", "Manage Queues", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Administor", "Print Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Administor: public Ui_Administor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTOR_H
