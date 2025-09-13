#include "login.h"
#include "ui_login.h"
#include "queue_print.h"
#include <book_menu.h>
#include <widget.h>
#include <reservationseat.h>
#include <QTimer>
#include <QDateTime>
#include <QTime>
#include <QDebug>
#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QStringList>
#include <QPixmap>
#include <QLabel>

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);

    ui->lcdNumber->setDigitCount(8);
    //创建定时器
    timer=new QTimer(this);
    connect(timer,&QTimer::timeout,this,&Login::current_display);//timeout超时信号
    timer->start(1000);
}

void Login::current_display()
{
    QString cur_time=QDateTime::currentDateTime().toString("hh:mm:ss");
    ui->lcdNumber->display(cur_time);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_5_clicked()
{
    this->close();
}

void Login::on_pushButton_clicked()
{
    this->hide();

    ReservationSeat *a=new ReservationSeat;
    a->show();
}

void Login::on_pushButton_6_clicked()
{
    book_menu* a=new book_menu;
    a->show();
}

bool deleteLineWithId(QStringList& lines, const QString& id)
{
    bool found = false;
    for (auto it = lines.begin(); it != lines.end(); )
    {
        if (it->contains(id))
        {
            it = lines.erase(it);
            found = true;
        }
        else
        {
            ++it;
        }
    }
    return found;
}

QDateTime Qs_to_QDate(QString &R_time)
{
    QTime time=QTime::fromString(R_time);

    QDateTime cur=QDateTime::currentDateTime();
    QDateTime l_time=QDateTime(cur.date(),time);
    return l_time;
}

void Cancel_res()
{
    QString R_time;

    QFile file("Reservation3.txt");
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "File open failed.";
    }
    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList parts = line.split("|");
        R_time=parts.last();
    }
    file.close();

    QDateTime l_time;
    QDateTime now = QDateTime::currentDateTime();

    Widget a;
    QString id=a.Get_id();
    l_time=Qs_to_QDate(R_time);

    if (now.addSecs(3 * 60 * 60) >= l_time)
    {
        QString filename = "Reservation3.txt";
        QString id_to_delete = id;

        QFile inputFile(filename);
        if (inputFile.open(QIODevice::ReadOnly))
        {
            QTextStream in(&inputFile);
            QStringList lines;
            while (!in.atEnd()) {
                lines.append(in.readLine());
            }
            inputFile.close();

            bool deleted = deleteLineWithId(lines, id_to_delete);

            QFile outputFile(filename);
            if (outputFile.open(QIODevice::WriteOnly | QIODevice::Text))
            {
                QTextStream out(&outputFile);
                for (const QString& line : lines)
                {
                    out << line << Qt::endl;
                }
                outputFile.close();

                if (deleted)
                {
                    QMessageBox suc;
                    suc.setText("Success,but you need to pay 5% of the reservation cost.");
                    suc.addButton("OK.",QMessageBox::AcceptRole);
                    suc.exec();

                    QLabel *label=new QLabel();
                    QPixmap pixmap("C:/Users/dai/Desktop/818107712257358933f54871ad21a65.jpg");
                    label->setPixmap(pixmap);
                    label->resize(1400,800);
                    label->show();
                }
                else
                {
                    qDebug() << "Fail to find";
                }
            }
            else
            {
                QMessageBox fal;
                fal.setText("You haven't book a seat yet.");
                fal.exec();
            }
        }
        else
        {
            qDebug() << "Open failed";
        }
    }
    else
    {
        QMessageBox win;
        win.setText("Time out,you can't cancel it.");
        win.exec();
    }
}

void Login::on_pushButton_3_clicked()
{
    Cancel_res();
}

void Login::on_pushButton_2_clicked()
{
    Cancel_res();

    this->hide();
    ReservationSeat *a=new ReservationSeat;
    a->show();
}

bool Is_Time_Fair()
{
    QTime now=QTime::currentTime();
    int cur_hour = now.hour();
    int cur_minute = now.minute();

    int morning_start_hour = 10;
    int morning_start_minute = 0;
    int morning_end_hour = 12;
    int morning_end_minute = 30;

    int evening_start_hour = 17;
    int evening_start_minute = 0;
    int evening_end_hour = 19;
    int evening_end_minute = 30;

    if ((cur_hour == morning_start_hour && cur_minute > morning_start_minute) || (cur_hour > morning_start_hour && cur_hour < morning_end_hour) || (cur_hour == morning_end_hour && cur_minute < morning_end_minute))
    {
        return true;
    }

    if ((cur_hour == evening_start_hour && cur_minute > evening_start_minute) || (cur_hour > evening_start_hour && cur_hour < evening_end_hour) || (cur_hour == evening_end_hour && cur_minute < evening_end_minute))
    {
        return true;
    }

    return false;
}

void Login::on_pushButton_4_clicked()
{
    if(Is_Time_Fair())
    {
        Queue_print* c=new Queue_print;
        c->show();
    }
    else
    {
        QMessageBox *qb=new QMessageBox;
        qb->setText("Time unfair,please wait.");
        qb->exec();
    }
}

