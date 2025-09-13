#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
class QStandardItemModel;
namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_5_clicked();

    void current_display();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Login *ui;
    QTimer* timer;
    QStandardItemModel *model;
};

#endif // LOGIN_H
