/********************************************************************************
** Form generated from reading UI file 'queue_manage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUEUE_MANAGE_H
#define UI_QUEUE_MANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Queue_Manage
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label;

    void setupUi(QWidget *Queue_Manage)
    {
        if (Queue_Manage->objectName().isEmpty())
            Queue_Manage->setObjectName("Queue_Manage");
        Queue_Manage->resize(800, 600);
        tableView = new QTableView(Queue_Manage);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 130, 800, 471));
        pushButton = new QPushButton(Queue_Manage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 90, 151, 31));
        pushButton_2 = new QPushButton(Queue_Manage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(590, 90, 151, 31));
        pushButton_4 = new QPushButton(Queue_Manage);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(420, 90, 151, 31));
        pushButton_5 = new QPushButton(Queue_Manage);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(220, 90, 151, 31));
        label = new QLabel(Queue_Manage);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 20, 451, 51));

        retranslateUi(Queue_Manage);

        QMetaObject::connectSlotsByName(Queue_Manage);
    } // setupUi

    void retranslateUi(QWidget *Queue_Manage)
    {
        Queue_Manage->setWindowTitle(QCoreApplication::translate("Queue_Manage", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Queue_Manage", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Queue_Manage", "Delete", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Queue_Manage", "Save", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Queue_Manage", "Show", nullptr));
        label->setText(QCoreApplication::translate("Queue_Manage", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Queue_Manage</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Queue_Manage: public Ui_Queue_Manage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEUE_MANAGE_H
