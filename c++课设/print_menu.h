#ifndef PRINT_MENU_H
#define PRINT_MENU_H

#include <QWidget>
class QStandardItemModel;
namespace Ui {
class Print_menu;
}

class Print_menu : public QWidget
{
    Q_OBJECT

public:
    explicit Print_menu(QWidget *parent = nullptr);
    ~Print_menu();
    void read_data();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Print_menu *ui;
    QStandardItemModel *model;
};

#endif // PRINT_MENU_H
