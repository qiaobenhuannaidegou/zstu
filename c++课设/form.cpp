#include "form.h"
#include "ui_form.h"
#include"widget.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QLineEdit>
#include <QMessageBox>
#include <QDebug>

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
}

bool Check_phone(const QString &phone)
{
    if (phone.length() < 11)
    {
        return false;
    }
    if (phone[0] != '1')
    {
        return false;
    }
    return true;
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_2_clicked()
{
    this->hide();
    Widget *b=new Widget;
    b->show();
}

void Form::on_complete_clicked()
{
    QFile file("Information2.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text|QIODevice::WriteOnly)) {
        qDebug() << "failed to open.";
        return;
    }

    QTextStream out(&file);

    QString id = ui->ID->toPlainText();
    QString password = ui->PASSWORD->toPlainText();
    QString name = ui->NAME->toPlainText();
    QString phone = ui->PHONE->toPlainText();

    if (!Check_phone(phone))
    {
        QMessageBox::warning(nullptr, "warniing", "please input the right phone number.");
    }
    else
    {
        out << id << "|" << password << "|" << name << "|" << phone << "|"  << Qt::endl;
        QMessageBox qmb;
        qmb.addButton("I Get it.",QMessageBox::AcceptRole);
        qmb.setText("Succeed!");
        qmb.exec();
    }

    file.close(); 
}

