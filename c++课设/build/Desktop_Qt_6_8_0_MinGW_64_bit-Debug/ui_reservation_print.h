/********************************************************************************
** Form generated from reading UI file 'reservation_print.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVATION_PRINT_H
#define UI_RESERVATION_PRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reservation_print
{
public:
    QLabel *label;
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QWidget *Reservation_print)
    {
        if (Reservation_print->objectName().isEmpty())
            Reservation_print->setObjectName("Reservation_print");
        Reservation_print->resize(800, 600);
        label = new QLabel(Reservation_print);
        label->setObjectName("label");
        label->setGeometry(QRect(128, 38, 511, 51));
        tableView = new QTableView(Reservation_print);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 110, 800, 500));
        pushButton = new QPushButton(Reservation_print);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(22, 57, 121, 41));

        retranslateUi(Reservation_print);

        QMetaObject::connectSlotsByName(Reservation_print);
    } // setupUi

    void retranslateUi(QWidget *Reservation_print)
    {
        Reservation_print->setWindowTitle(QCoreApplication::translate("Reservation_print", "Form", nullptr));
        label->setText(QCoreApplication::translate("Reservation_print", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Reservation_Show</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Reservation_print", "Flase", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reservation_print: public Ui_Reservation_print {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVATION_PRINT_H
