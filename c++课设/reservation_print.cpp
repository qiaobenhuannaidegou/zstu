#include "reservation_print.h"
#include "ui_reservation_print.h"
#include <QFile>
#include <qstandarditemmodel.h>
class QStandardItemModel;
Reservation_print::Reservation_print(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Reservation_print)
{
    ui->setupUi(this);
}

void Reservation_print::read_data()
{
    QFile file("Reservation3.txt");
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug()<<"open failed.";
    }
    model=new QStandardItemModel(this);
    ui->tableView->setModel(model);
    QStringList header={"NAME","TYPE","TABLE NUMBER","TIME"};
    model->setHorizontalHeaderLabels(header);
    QTextStream in(&file);
    QList<QStandardItem*> items;

    while(!in.atEnd())
    {
        items.clear();
        QStringList res =in.readLine().split('|');

        for(auto data:res)
        {
            items.push_back(new QStandardItem(data));
        }
        model->appendRow(items);
    }
    file.close();
}

Reservation_print::~Reservation_print()
{
    delete ui;
    delete model;
}

void Reservation_print::on_pushButton_clicked()
{
    read_data();
}

