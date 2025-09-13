/********************************************************************************
** Form generated from reading UI file 'print_menu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINT_MENU_H
#define UI_PRINT_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Print_menu
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *Print_menu)
    {
        if (Print_menu->objectName().isEmpty())
            Print_menu->setObjectName("Print_menu");
        Print_menu->resize(800, 600);
        tableView = new QTableView(Print_menu);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 100, 800, 500));
        pushButton = new QPushButton(Print_menu);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 60, 101, 31));
        label = new QLabel(Print_menu);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 19, 261, 61));

        retranslateUi(Print_menu);

        QMetaObject::connectSlotsByName(Print_menu);
    } // setupUi

    void retranslateUi(QWidget *Print_menu)
    {
        Print_menu->setWindowTitle(QCoreApplication::translate("Print_menu", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Print_menu", "Flash", nullptr));
        label->setText(QCoreApplication::translate("Print_menu", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Menu</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Print_menu: public Ui_Print_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINT_MENU_H
