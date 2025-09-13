/********************************************************************************
** Form generated from reading UI file 'queue_print.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUEUE_PRINT_H
#define UI_QUEUE_PRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Queue_print
{
public:
    QTableView *tableView;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *Queue_print)
    {
        if (Queue_print->objectName().isEmpty())
            Queue_print->setObjectName("Queue_print");
        Queue_print->resize(800, 600);
        tableView = new QTableView(Queue_print);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 100, 800, 500));
        label = new QLabel(Queue_print);
        label->setObjectName("label");
        label->setGeometry(QRect(188, 28, 401, 51));
        pushButton = new QPushButton(Queue_print);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 60, 121, 32));

        retranslateUi(Queue_print);

        QMetaObject::connectSlotsByName(Queue_print);
    } // setupUi

    void retranslateUi(QWidget *Queue_print)
    {
        Queue_print->setWindowTitle(QCoreApplication::translate("Queue_print", "Form", nullptr));
        label->setText(QCoreApplication::translate("Queue_print", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Queue_Print</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Queue_print", "flase", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Queue_print: public Ui_Queue_print {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEUE_PRINT_H
