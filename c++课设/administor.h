#ifndef ADMINISTOR_H
#define ADMINISTOR_H

#include <QWidget>

namespace Ui {
class Administor;
}

class Administor : public QWidget
{
    Q_OBJECT

public:
    explicit Administor(QWidget *parent = nullptr);
    ~Administor();


private slots:
    void on_pushButton_4_clicked();

    void Current_diasplay();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Administor *ui;
    QTimer *timer;
};

#endif // ADMINISTOR_H
