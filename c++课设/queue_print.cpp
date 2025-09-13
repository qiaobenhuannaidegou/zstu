#include "queue_print.h"
#include "ui_queue_print.h"
#include <QFile>
#include <QStandardItemModel>

Queue_print::Queue_print(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Queue_print)
{
    ui->setupUi(this);
}
void Queue_print::read_data()
{
    QFile file("Queue.txt");
    if(file.open(QIODevice::ReadOnly))
    {
        qDebug()<<"open failed.";
    }
    //创立模型
    model=new QStandardItemModel(this);
    //把模型交给视图
    ui->tableView->setModel(model);
    //设立表头
    QStringList header={"NAME","TIME","TABLE NUMBER"};
    model->setHorizontalHeaderLabels(header);
    //行存储
    QTextStream in(&file);
    QList<QStandardItem*> items;

    while(!in.atEnd())
    {
        items.clear();
        QStringList queue =in.readLine().split('|');

        for(auto data:queue)
        {
            items.push_back(new QStandardItem(data));
        }
        model->appendRow(items);
    }
    file.close();
}
Queue_print::~Queue_print()
{
    delete ui;
    delete model;
}

void Queue_print::on_pushButton_clicked()
{
    QFile file("Queue.txt");
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug()<<"open failed.";
        return;
    }
    //创立模型
    model=new QStandardItemModel(this);
    //把模型交给视图
    ui->tableView->setModel(model);
    //设立表头
    QStringList header={"NAME","TIME","TABLE NUMBER"};
    model->setHorizontalHeaderLabels(header);
    //行存储
    QTextStream in(&file);
    QList<QStandardItem*> items;

    while(!in.atEnd())
    {
        items.clear();
        QStringList queue =in.readLine().split('|');

        for(auto data:queue)
        {
            items.push_back(new QStandardItem(data));
        }
        model->appendRow(items);
    }
    file.close();
}

