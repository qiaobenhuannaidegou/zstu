#ifndef QUEUE_PRINT_H
#define QUEUE_PRINT_H

#include <QWidget>
class QStandardItemModel;
namespace Ui {
class Queue_print;
}

class Queue_print : public QWidget
{
    Q_OBJECT

public:
    explicit Queue_print(QWidget *parent = nullptr);
    ~Queue_print();
    void read_data();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Queue_print *ui;
    QStandardItemModel *model;
};

#endif // QUEUE_PRINT_H
