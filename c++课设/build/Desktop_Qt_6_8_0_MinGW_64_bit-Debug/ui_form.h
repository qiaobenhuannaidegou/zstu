/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QTextEdit *NAME;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *complete;
    QTextEdit *PHONE;
    QTextEdit *ID;
    QTextEdit *PASSWORD;
    QPushButton *pushButton_2;
    QLabel *label_5;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(800, 600);
        NAME = new QTextEdit(Form);
        NAME->setObjectName("NAME");
        NAME->setGeometry(QRect(252, 360, 351, 31));
        label_2 = new QLabel(Form);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(172, 270, 69, 19));
        label = new QLabel(Form);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 70, 661, 61));
        label_4 = new QLabel(Form);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(172, 320, 69, 19));
        label_3 = new QLabel(Form);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(172, 220, 69, 19));
        complete = new QPushButton(Form);
        complete->setObjectName("complete");
        complete->setGeometry(QRect(330, 480, 181, 61));
        PHONE = new QTextEdit(Form);
        PHONE->setObjectName("PHONE");
        PHONE->setGeometry(QRect(252, 310, 351, 31));
        ID = new QTextEdit(Form);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(252, 210, 351, 31));
        PASSWORD = new QTextEdit(Form);
        PASSWORD->setObjectName("PASSWORD");
        PASSWORD->setGeometry(QRect(252, 260, 351, 31));
        pushButton_2 = new QPushButton(Form);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(630, 530, 151, 41));
        label_5 = new QLabel(Form);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(172, 370, 69, 19));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "password", nullptr));
        label->setText(QCoreApplication::translate("Form", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700;\">register</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "<html><head/><body><p align=\"center\">phone</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "<html><head/><body><p align=\"center\">id</p></body></html>", nullptr));
        complete->setText(QCoreApplication::translate("Form", "complete", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Form", "return log page", nullptr));
        label_5->setText(QCoreApplication::translate("Form", "<html><head/><body><p align=\"center\">name</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
