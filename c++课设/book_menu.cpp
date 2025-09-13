#include "book_menu.h"
#include "ui_book_menu.h"
#include "widget.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QLabel>

int food_number[8]={0,0,0,0,0,0,0,0};
const double price[8]={9.99,19.99,17.99,18.99,16.99,15.99,20.99,10.99};
const QString name[8]={"mapo tofu","beef","set meal 1","set meal 2","set meal 3","beef noodles","set meal 4","chicken"};


book_menu::book_menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::book_menu)
{
    ui->setupUi(this);
}

book_menu::~book_menu()
{
    delete ui;
}

void book_menu::on_pushButton_clicked()
{
    this->close();
}


void book_menu::on_pushButton_2_clicked()
{
    QMessageBox qmb;
    qmb.setText("If you book now,you will get 90% discount,but you need to pay 10% advancely.");
    qmb.exec();

    QFile file("book_menu.txt");

    if(!file.open(QIODevice::Text|QIODevice::Append|QIODevice::WriteOnly))
    {
        qDebug()<<"open failed.";
    }

    QTextStream out(&file);

    Widget *a=new Widget;
    QString id=a->Get_id();

    food_number[0]=ui->spinBox->value();
    food_number[1]=ui->spinBox_2->value();
    food_number[2]=ui->spinBox_3->value();
    food_number[3]=ui->spinBox_4->value();
    food_number[4]=ui->spinBox_5->value();
    food_number[5]=ui->spinBox_6->value();
    food_number[6]=ui->spinBox_7->value();
    food_number[7]=ui->spinBox_8->value();

    double total_pay=0;
    for(int i=0;i<8;i++)
    {
        total_pay+=price[i]*food_number[i]*0.9;
    }
    double advance_pay=total_pay*0.1;
    total_pay-=advance_pay;

    out<<id<<":";
    for(int i=0;i<8;i++)
    {
        if(food_number[i]!=0)
        {
            out<<name[i]<<":"<<food_number[i]<<"|";
        }
    }

    out<<"Remaining to pay:"<<total_pay<<Qt::endl;
    QString ad_pay_s=QString::number(advance_pay);
    QString ad="you need to pay "+ad_pay_s+"$ advancely";

    QMessageBox qeb;
    qeb.setText(ad);
    qeb.exec();

    QLabel *label=new QLabel();
    QPixmap pixmap("C:/Users/dai/Desktop/818107712257358933f54871ad21a65.jpg");
    label->setPixmap(pixmap);
    label->resize(1400,800);
    label->show();
}

