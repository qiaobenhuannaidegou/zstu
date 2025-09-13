#include "print_menu.h"
#include "ui_print_menu.h"
#include <QFile>
#include <QStandardItemModel>

Print_menu::Print_menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Print_menu)
{
    ui->setupUi(this);
}

void Print_menu::read_data()
{
    QFile file("book_menu.txt");
    if(file.open(QIODevice::ReadOnly))
    {
        qDebug()<<"open failed.";
    }
    //创立模型
    model=new QStandardItemModel(this);
    //把模型交给视图
    ui->tableView->setModel(model);
    //设立表头
    QStringList header={"NAME"};
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


void Print_menu::on_pushButton_clicked()
{
    read_data();
}



Print_menu::~Print_menu()
{
    delete ui;
    delete model;
}
