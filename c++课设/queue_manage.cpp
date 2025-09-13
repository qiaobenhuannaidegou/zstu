#include "queue_manage.h"
#include "ui_queue_manage.h"
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <QStandardItemModel>

Queue_Manage::Queue_Manage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Queue_Manage)
{
    ui->setupUi(this);
}

Queue_Manage::~Queue_Manage()
{
    delete ui;
    delete model;
}

void Queue_Manage::read_data()
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

void Queue_Manage::on_pushButton_clicked()
{
    model->setRowCount(model->rowCount()+1);
}

void Queue_Manage::on_pushButton_4_clicked()
{
    QFile file("Queue.txt");
    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug()<<"open failed.";
    }

    QTextStream in(&file);

    QStringList line_data;
    for(int i=0;i<model->rowCount();i++)
    {
        for(int j=0;j<model->columnCount();j++)
        {
            if(!model->item(i,j))
            {
                goto end;
            }
            line_data.append(model->item(i,j)->text());
        }
        QString line=line_data.join("|")+"\n";
        in<<line;
    }
    end:;
}

void Queue_Manage::on_pushButton_2_clicked()
{
    QModelIndex index=ui->tableView->currentIndex();
    model->removeRow(index.row());
}

void Queue_Manage::on_pushButton_5_clicked()
{
    read_data();
}

