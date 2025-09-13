#ifndef RESERVATION_PRINT_H
#define RESERVATION_PRINT_H

#include <QWidget>
class QStandardItemModel;
namespace Ui {
class Reservation_print;
}

class Reservation_print : public QWidget
{
    Q_OBJECT

public:
    explicit Reservation_print(QWidget *parent = nullptr);
    ~Reservation_print();
    void read_data();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Reservation_print *ui;
    QStandardItemModel *model;
};

#endif // RESERVATION_PRINT_H
