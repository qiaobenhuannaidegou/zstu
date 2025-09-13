#ifndef RESERVATIONSEAT_H
#define RESERVATIONSEAT_H

#include <QWidget>
#include <QRadioButton>
#include <QCheckBox>
#include <QGroupBox>
#include <QMessageBox>

namespace Ui {
class ReservationSeat;
}

class ReservationSeat : public QWidget
{
    Q_OBJECT

public:
    explicit ReservationSeat(QWidget *parent = nullptr);
    ~ReservationSeat();

private slots:
    void on_radioButton_2_toggled(bool checked);

    void on_radioButton_toggled(bool checked);

    void on_radioButton_3_toggled(bool checked);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void current_display();
private:
    Ui::ReservationSeat *ui;
    QTimer *timer;
};


#endif // RESERVATIONSEAT_H
