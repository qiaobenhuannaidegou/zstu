/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_register
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *complete;
    QPushButton *pushButton_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;

    void setupUi(QWidget *register)
    {
        if (register->objectName().isEmpty())
            register->setObjectName("register");
        register->resize(800, 600);
        label = new QLabel(register);
        label->setObjectName("label");
        label->setGeometry(QRect(58, 29, 661, 61));
        label_2 = new QLabel(register);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 220, 69, 19));
        label_3 = new QLabel(register);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 170, 69, 19));
        label_4 = new QLabel(register);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 270, 69, 19));
        label_5 = new QLabel(register);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(170, 320, 69, 19));
        label_6 = new QLabel(register);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(170, 380, 69, 19));
        complete = new QPushButton(register);
        complete->setObjectName("complete");
        complete->setGeometry(QRect(170, 520, 93, 28));
        pushButton_2 = new QPushButton(register);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(480, 520, 93, 28));
        checkBox = new QCheckBox(register);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(240, 440, 98, 41));
        checkBox_2 = new QCheckBox(register);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(430, 440, 131, 41));
        textEdit = new QTextEdit(register);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(250, 160, 351, 31));
        textEdit_2 = new QTextEdit(register);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(250, 210, 351, 31));
        textEdit_3 = new QTextEdit(register);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(250, 260, 351, 31));
        textEdit_4 = new QTextEdit(register);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(250, 310, 351, 31));

        retranslateUi(register);

        QMetaObject::connectSlotsByName(register);
    } // setupUi

    void retranslateUi(QWidget *register)
    {
        register->setWindowTitle(QCoreApplication::translate("register", "Form", nullptr));
        label->setText(QCoreApplication::translate("register", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700;\">register</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("register", "password", nullptr));
        label_3->setText(QCoreApplication::translate("register", "<html><head/><body><p align=\"center\">id</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("register", "<html><head/><body><p align=\"center\">phone</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("register", "<html><head/><body><p align=\"center\">name</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("register", "<html><head/><body><p align=\"center\">identity</p></body></html>", nullptr));
        complete->setText(QCoreApplication::translate("register", "complete", nullptr));
        pushButton_2->setText(QCoreApplication::translate("register", "return log", nullptr));
        checkBox->setText(QCoreApplication::translate("register", "customer", nullptr));
        checkBox_2->setText(QCoreApplication::translate("register", "administor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register: public Ui_register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
