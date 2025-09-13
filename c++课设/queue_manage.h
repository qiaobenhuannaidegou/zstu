#ifndef QUEUE_MANAGE_H
#define QUEUE_MANAGE_H

#include <QWidget>
class QStandardItemModel;
namespace Ui {
class Queue_Manage;
}

class Queue_Manage : public QWidget
{
    Q_OBJECT

public:
    explicit Queue_Manage(QWidget *parent = nullptr);
    ~Queue_Manage();
    void read_data();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Queue_Manage *ui;
    QStandardItemModel *model;
};

#endif // QUEUE_MANAGE_H
