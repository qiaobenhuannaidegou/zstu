#include "reservationseat.h"
#include "ui_reservationseat.h"
#include <widget.h>
#include <login.h>
#include <book_menu.h>
#include <QList>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QDateTime>
#include <QTimer>
#include <QDateTimeEdit>
#include <QMessageBox>

ReservationSeat::ReservationSeat(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ReservationSeat)
{
    ui->setupUi(this);

    ui->checkBox->setEnabled(false);
    ui->checkBox_2->setEnabled(false);
    ui->checkBox_3->setEnabled(false);
    ui->checkBox_4->setEnabled(false);
    ui->checkBox_5->setEnabled(false);
    ui->checkBox_6->setEnabled(false);
    ui->checkBox_7->setEnabled(false);
    ui->checkBox_8->setEnabled(false);
    ui->checkBox_9->setEnabled(false);
    ui->checkBox_10->setEnabled(false);
    ui->checkBox_11->setEnabled(false);
    ui->checkBox_12->setEnabled(false);

    connect(ui->radioButton,&QRadioButton::toggled,this,&ReservationSeat::on_radioButton_toggled);
    connect(ui->radioButton_2,&QRadioButton::toggled,this,&ReservationSeat::on_radioButton_2_toggled);
    connect(ui->radioButton_3,&QRadioButton::toggled,this,&ReservationSeat::on_radioButton_3_toggled);

    ui->lcdNumber->setDigitCount(8);
    timer=new QTimer(this);
    connect(timer,&QTimer::timeout,this,&ReservationSeat::current_display);
    timer->start(1000);

    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    ui->dateTimeEdit->setMinimumDate(QDate(2024,5,28));
    ui->dateTimeEdit->setDisplayFormat("yyyy-MM-dd-hh:mm");
    ui->dateTimeEdit->setCalendarPopup(true);
}

void ReservationSeat::current_display()
{
    QString cur_time=QDateTime::currentDateTime().toString("hh:mm:ss");
    ui->lcdNumber->display(cur_time);
}

ReservationSeat::~ReservationSeat()
{
    delete ui;
}

void ReservationSeat::on_radioButton_2_toggled(bool checked)
{
    ui->checkBox->setEnabled(checked);
    ui->checkBox_2->setEnabled(checked);
    ui->checkBox_3->setEnabled(checked);
    ui->checkBox_4->setEnabled(checked);
}

void ReservationSeat::on_radioButton_toggled(bool checked)
{
    ui->checkBox_5->setEnabled(checked);
    ui->checkBox_6->setEnabled(checked);
    ui->checkBox_7->setEnabled(checked);
    ui->checkBox_8->setEnabled(checked);
}

void ReservationSeat::on_radioButton_3_toggled(bool checked)
{
    ui->checkBox_9->setEnabled(checked);
    ui->checkBox_10->setEnabled(checked);
    ui->checkBox_11->setEnabled(checked);
    ui->checkBox_12->setEnabled(checked);
}

void ReservationSeat::on_pushButton_2_clicked()
{
    this->hide();

    Login *a=new Login;
    a->show();
}

void ReservationSeat::on_pushButton_clicked()
{
    QList<QCheckBox*> *CheckBoxList1=new QList<QCheckBox*>;
    CheckBoxList1->append(ui->checkBox);
    CheckBoxList1->append(ui->checkBox_2);
    CheckBoxList1->append(ui->checkBox_3);
    CheckBoxList1->append(ui->checkBox_4);
    QList<QCheckBox*> *CheckBoxList2=new QList<QCheckBox*>;
    CheckBoxList2->append(ui->checkBox_5);
    CheckBoxList2->append(ui->checkBox_6);
    CheckBoxList2->append(ui->checkBox_7);
    CheckBoxList2->append(ui->checkBox_8);
    QList<QCheckBox*> *CheckBoxList3=new QList<QCheckBox*>;
    CheckBoxList3->append(ui->checkBox_9);
    CheckBoxList3->append(ui->checkBox_10);
    CheckBoxList3->append(ui->checkBox_11);
    CheckBoxList3->append(ui->checkBox_12);


    QFile file("Reservation3.txt");
    if(!file.open(QIODevice::Append | QIODevice::Text|QIODevice::WriteOnly))
    {
        qDebug()<<"Fail to open";
        return;
    }

    QString type="";
    QString number="";

    QTextStream out(&file);

    if(ui->radioButton_2->isChecked())
    {
        type=ui->radioButton_2->text()+'|';
        for(auto it:*CheckBoxList1)
        {
            if(it->isChecked())
            {
                number=number+it->text()+'|';
            }
        }
    }
    if(ui->radioButton->isChecked())
    {
        type=ui->radioButton->text()+'|';
        for(auto it:*CheckBoxList2)
        {
            if(it->isChecked())
            {
                number=number+it->text()+'|';
            }
        }
    }
    if(ui->radioButton_3->isChecked())
    {
        type=ui->radioButton_3->text()+'|';
        for(auto it:*CheckBoxList3)
        {
            if(it->isChecked())
            {
                number=number+it->text()+'|';
            }
        }
    }

    Widget a;
    QString id=a.Get_id();

    QString time=ui->dateTimeEdit->text();

    out<<id<<'|'<<type<<number<<time<<Qt::endl;

    file.close();

    QMessageBox qmb;
    qmb.setText("Success.");
    qmb.setStandardButtons(QMessageBox::Ok);
    qmb.exec();
}

