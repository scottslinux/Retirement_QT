#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qlocale.h"
#include <QMainWindow>
#include <QtCharts>
#include <QtCharts/QChartView>
#include <QLineSeries>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_startBal_editingFinished();

    void on_startAge_editingFinished();



    void on_wd_age_slider_valueChanged(int value);

    void on_wd_slider_valueChanged(int value);

    void on_WD_on_off_button_toggled(bool checked);

private:
    Ui::MainWindow *ui;


    float initbal, years,r, FV,PV,n, WD_amnt;
    int age, WD_age;    //default to 68 years for WD

    std::vector<float> totalsByYear;

    float calcfutureVal(float PV,float rate, int nyears);
    bool isWithdrawling;

    QLocale locale;



};
#endif // MAINWINDOW_H
