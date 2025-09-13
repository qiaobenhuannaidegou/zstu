/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_log_page
{
public:
    QLabel *password;
    QLabel *id;
    QLabel *title;
    QPushButton *log_in;
    QPushButton *Exit;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *log_page)
    {
        if (log_page->objectName().isEmpty())
            log_page->setObjectName("log_page");
        log_page->resize(800, 600);
        password = new QLabel(log_page);
        password->setObjectName("password");
        password->setGeometry(QRect(50, 310, 171, 41));
        id = new QLabel(log_page);
        id->setObjectName("id");
        id->setGeometry(QRect(110, 200, 161, 41));
        title = new QLabel(log_page);
        title->setObjectName("title");
        title->setGeometry(QRect(80, 39, 641, 81));
        log_in = new QPushButton(log_page);
        log_in->setObjectName("log_in");
        log_in->setGeometry(QRect(230, 450, 131, 51));
        Exit = new QPushButton(log_page);
        Exit->setObjectName("Exit");
        Exit->setGeometry(QRect(640, 450, 131, 51));
        pushButton_3 = new QPushButton(log_page);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(460, 450, 131, 51));
        lineEdit = new QLineEdit(log_page);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(230, 310, 371, 41));
        lineEdit->setEchoMode(QLineEdit::Password);
        lineEdit_2 = new QLineEdit(log_page);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(230, 200, 371, 41));

        retranslateUi(log_page);

        QMetaObject::connectSlotsByName(log_page);
    } // setupUi

    void retranslateUi(QWidget *log_page)
    {
        log_page->setWindowTitle(QCoreApplication::translate("log_page", "Widget", nullptr));
        password->setText(QCoreApplication::translate("log_page", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">PASSWORD</span></p></body></html>", nullptr));
        id->setText(QCoreApplication::translate("log_page", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">ID</span></p></body></html>", nullptr));
        title->setText(QCoreApplication::translate("log_page", "<html><head/><body><p align=\"center\"><span style=\" font-family:'\351\273\221\344\275\223'; font-size:12pt; font-weight:700;\"/><span style=\" font-family:'\351\273\221\344\275\223'; font-size:20pt; font-weight:700;\">Restaurant Reservation System</span></p></body></html>", nullptr));
        log_in->setText(QCoreApplication::translate("log_page", "Log in", nullptr));
        Exit->setText(QCoreApplication::translate("log_page", "Exit", nullptr));
        pushButton_3->setText(QCoreApplication::translate("log_page", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class log_page: public Ui_log_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
