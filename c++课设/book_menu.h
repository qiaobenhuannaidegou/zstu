#ifndef BOOK_MENU_H
#define BOOK_MENU_H

#include <QWidget>

namespace Ui {
class book_menu;
}

class book_menu : public QWidget
{
    Q_OBJECT

public:
    explicit book_menu(QWidget *parent = nullptr);
    ~book_menu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::book_menu *ui;
};

#endif // BOOK_MENU_H
