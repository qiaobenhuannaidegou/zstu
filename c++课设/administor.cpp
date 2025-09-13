#include "administor.h"
#include "ui_administor.h"
#include "queue_manage.h"
#include "reservation_print.h"
#include "print_menu.h"
#include <QLCDNumber>
#include <QTimer>
#include <QFile>

Administor::Administor(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Administor)
{
    ui->setupUi(this);

    ui->lcdNumber->setDigitCount(8);
    //创建定时器
    timer=new QTimer(this);
    connect(timer,&QTimer::timeout,this,&Administor::Current_diasplay);
    timer->start(1000);
}

void Administor::Current_diasplay()
{
    QString cur_time=QDateTime::currentDateTime().toString("hh:mm:ss");
    ui->lcdNumber->display(cur_time);
}

Administor::~Administor()
{
    delete ui;
}

void Administor::on_pushButton_4_clicked()
{
    this->close();
}

void Administor::on_pushButton_5_clicked()
{
    Reservation_print* c=new Reservation_print;
    c->show();
}

void Administor::on_pushButton_6_clicked()
{
    Queue_Manage *a=new Queue_Manage;
    a->show();
}


void Administor::on_pushButton_7_clicked()
{
    Print_menu *a=new Print_menu;
    a->show();
}

