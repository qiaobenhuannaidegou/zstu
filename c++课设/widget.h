#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class log_page;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_3_clicked();

    void on_Exit_clicked();

    void on_log_in_clicked();

public slots:
    QString Get_id();

private:
    Ui::log_page *ui;
};
#endif // WIDGET_H
