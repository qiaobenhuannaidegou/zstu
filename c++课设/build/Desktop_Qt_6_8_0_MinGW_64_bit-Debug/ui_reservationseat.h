/********************************************************************************
** Form generated from reading UI file 'reservationseat.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVATIONSEAT_H
#define UI_RESERVATIONSEAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReservationSeat
{
public:
    QLabel *label;
    QLCDNumber *lcdNumber;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_12;
    QDateTimeEdit *dateTimeEdit;

    void setupUi(QWidget *ReservationSeat)
    {
        if (ReservationSeat->objectName().isEmpty())
            ReservationSeat->setObjectName("ReservationSeat");
        ReservationSeat->resize(800, 600);
        label = new QLabel(ReservationSeat);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 40, 441, 81));
        lcdNumber = new QLCDNumber(ReservationSeat);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(650, 370, 131, 51));
        lcdNumber->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 255), stop:0.19397 rgba(0, 0, 0, 255), stop:0.202312 rgba(122, 97, 0, 255), stop:0.495514 rgba(76, 58, 0, 255), stop:0.504819 rgba(255, 255, 255, 255), stop:0.79 rgba(255, 255, 255, 255), stop:1 rgba(255, 158, 158, 255));"));
        radioButton = new QRadioButton(ReservationSeat);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(300, 120, 161, 23));
        radioButton_2 = new QRadioButton(ReservationSeat);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(80, 120, 171, 23));
        radioButton_3 = new QRadioButton(ReservationSeat);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(560, 120, 118, 23));
        pushButton = new QPushButton(ReservationSeat);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 480, 191, 61));
        pushButton_2 = new QPushButton(ReservationSeat);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(440, 480, 191, 61));
        checkBox = new QCheckBox(ReservationSeat);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(110, 160, 98, 23));
        checkBox_2 = new QCheckBox(ReservationSeat);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(110, 200, 98, 23));
        checkBox_3 = new QCheckBox(ReservationSeat);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(110, 240, 98, 23));
        checkBox_4 = new QCheckBox(ReservationSeat);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(110, 280, 98, 23));
        checkBox_5 = new QCheckBox(ReservationSeat);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setGeometry(QRect(320, 160, 111, 23));
        checkBox_6 = new QCheckBox(ReservationSeat);
        checkBox_6->setObjectName("checkBox_6");
        checkBox_6->setGeometry(QRect(320, 200, 111, 23));
        checkBox_7 = new QCheckBox(ReservationSeat);
        checkBox_7->setObjectName("checkBox_7");
        checkBox_7->setGeometry(QRect(320, 240, 121, 23));
        checkBox_8 = new QCheckBox(ReservationSeat);
        checkBox_8->setObjectName("checkBox_8");
        checkBox_8->setGeometry(QRect(320, 280, 111, 23));
        checkBox_9 = new QCheckBox(ReservationSeat);
        checkBox_9->setObjectName("checkBox_9");
        checkBox_9->setGeometry(QRect(560, 160, 98, 23));
        checkBox_10 = new QCheckBox(ReservationSeat);
        checkBox_10->setObjectName("checkBox_10");
        checkBox_10->setGeometry(QRect(560, 280, 98, 23));
        checkBox_11 = new QCheckBox(ReservationSeat);
        checkBox_11->setObjectName("checkBox_11");
        checkBox_11->setGeometry(QRect(560, 200, 98, 23));
        checkBox_12 = new QCheckBox(ReservationSeat);
        checkBox_12->setObjectName("checkBox_12");
        checkBox_12->setGeometry(QRect(560, 240, 98, 23));
        dateTimeEdit = new QDateTimeEdit(ReservationSeat);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(130, 360, 501, 71));

        retranslateUi(ReservationSeat);

        QMetaObject::connectSlotsByName(ReservationSeat);
    } // setupUi

    void retranslateUi(QWidget *ReservationSeat)
    {
        ReservationSeat->setWindowTitle(QCoreApplication::translate("ReservationSeat", "Form", nullptr));
        label->setText(QCoreApplication::translate("ReservationSeat", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Please Choose the Type and Time</span></p></body></html>", nullptr));
        radioButton->setText(QCoreApplication::translate("ReservationSeat", "four people table", nullptr));
        radioButton_2->setText(QCoreApplication::translate("ReservationSeat", "tow people table", nullptr));
        radioButton_3->setText(QCoreApplication::translate("ReservationSeat", "room", nullptr));
        pushButton->setText(QCoreApplication::translate("ReservationSeat", "complete", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ReservationSeat", "return last page", nullptr));
        checkBox->setText(QCoreApplication::translate("ReservationSeat", "table 1", nullptr));
        checkBox_2->setText(QCoreApplication::translate("ReservationSeat", "table 2", nullptr));
        checkBox_3->setText(QCoreApplication::translate("ReservationSeat", "table 3", nullptr));
        checkBox_4->setText(QCoreApplication::translate("ReservationSeat", "table 4", nullptr));
        checkBox_5->setText(QCoreApplication::translate("ReservationSeat", "big table 1", nullptr));
        checkBox_6->setText(QCoreApplication::translate("ReservationSeat", "big table 2", nullptr));
        checkBox_7->setText(QCoreApplication::translate("ReservationSeat", "big table 3", nullptr));
        checkBox_8->setText(QCoreApplication::translate("ReservationSeat", "big table 4", nullptr));
        checkBox_9->setText(QCoreApplication::translate("ReservationSeat", "room 1", nullptr));
        checkBox_10->setText(QCoreApplication::translate("ReservationSeat", "room 4", nullptr));
        checkBox_11->setText(QCoreApplication::translate("ReservationSeat", "room 2", nullptr));
        checkBox_12->setText(QCoreApplication::translate("ReservationSeat", "room 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReservationSeat: public Ui_ReservationSeat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVATIONSEAT_H
