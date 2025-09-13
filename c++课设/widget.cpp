#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <form.h>
#include <login.h>
#include <administor.h>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QMessageBox>

QString id;

bool Check_exist(const QString &ID, const QString &password)
{
    QFile file("Information2.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "File open failed.";
        return false;
    }
    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList parts = line.split("|");
        if (parts.size() >= 2)
        {
            if (parts[0] == ID && parts[1] == password)
            {
                file.close();
                return true;
            }
        }
    }
    file.close();
    return false;
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::log_page)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_3_clicked()
{
    this->hide();
    Form *a=new Form;
    a->show();
}

void Widget::on_Exit_clicked()
{
    this->close();
}

void Widget::on_log_in_clicked()
{
    id=ui->lineEdit_2->text();
    QString password=ui->lineEdit->text();

    if(id=="Administrator"&&password=="050728")
    {
        QMessageBox meg;
        QString wel="welcome "+id;
        meg.setText(wel);
        meg.addButton("Get it!",QMessageBox::AcceptRole);
        meg.exec();

        this->hide();
        Administor *c=new Administor;
        c->show();
    }
    else
    {
        if(Check_exist(id,password))
        {
            QMessageBox megbox;
            QString wel="welcome "+id;
            megbox.setText(wel);
            megbox.addButton("Get it!",QMessageBox::AcceptRole);
            megbox.exec();

            this->hide();
            Login *b=new Login;
            b->show();
        }
        else
        {
            QMessageBox megbox;
            megbox.setText("You have not create a account yet or input account error");
            megbox.addButton("Get it!",QMessageBox::AcceptRole);
            megbox.exec();
        }
    }
}

QString Widget::Get_id()
{
    return id;
}

