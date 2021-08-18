#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<help.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_compute_clicked();

    void on_one_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_zero_2_clicked();

    void on_add_clicked();

    void on_sub_clicked();

    void on_pro_clicked();

    void on_divi_clicked();

    void on_clear_clicked();

    void on_kuohao1_clicked();

    void on_kuohao2_clicked();

    void on_Backspace_clicked();

    void on_radical_clicked();

    void on_Power_clicked();

    void on_log_clicked();

    void on_decimal_clicked();  
    void on_actionhelp_triggered();
    void slotopen();

private:
    Ui::MainWindow *ui;
    QString perform;
    QString inputlist;
};

#endif // MAINWINDOW_H
