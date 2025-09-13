/********************************************************************************
** Form generated from reading UI file 'pay.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAY_H
#define UI_PAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pay
{
public:

    void setupUi(QWidget *Pay)
    {
        if (Pay->objectName().isEmpty())
            Pay->setObjectName("Pay");
        Pay->resize(300, 400);

        retranslateUi(Pay);

        QMetaObject::connectSlotsByName(Pay);
    } // setupUi

    void retranslateUi(QWidget *Pay)
    {
        Pay->setWindowTitle(QCoreApplication::translate("Pay", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pay: public Ui_Pay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAY_H
