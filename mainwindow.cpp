#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    initbal(0), years(0),r(0), FV(0),PV(0),n(0),WD_amnt(50000),age(59),
    WD_age(68), isWithdrawling(false) ,     //initialize only using name of the vector
                            //don't declare it again
    totalsByYear({0})
{   //constructor body
    totalsByYear.resize(50);    //resize and 0 initialize vector
    for(int i=0;i<50;i++)
        totalsByYear[i]=0;

    QLocale locale(QLocale::English, QLocale::UnitedStates); // US English locale for formatting currency

    ui->setupUi(this);
    ui->WD_age->setText(QString::number(WD_age));
    ui->WD_amnt->setText(locale.toCurrencyString(WD_amnt));
    ui->on_offlabel->setText("OFF");

    on_pushButton_clicked();










}


MainWindow::~MainWindow()
{
    delete ui;
}


//=======================================================
//FV-future value, PV-present value, r-rate, n-number of years invested
//  FV=PV×(1+r/n)^n×t
//
//  r-annual interest rate     n- number of periods(ie compunded monthly) t-years invested

float MainWindow::calcfutureVal(float PV,float rate, int nyears)
{




    float FutureVal=PV*pow((1+((rate/100)/12)),nyears*12);


    return FutureVal;    //return future value
}
//=======================================================


//*****************************************************
//          Amortize Button Clicked

void MainWindow::on_pushButton_clicked()
{
    int wdFactor=0;

    r=ui->APR->text().toFloat();

    ui->textBox->clear();

    totalsByYear[0]=calcfutureVal(PV,r,1);

    //populate the vector with the amortization schedule
    for(int years=1;years<50;years++)
    {
        if(isWithdrawling && (WD_age<=(years+age)))  wdFactor=1;    //only start withdrawling if its is turned on and you are at or past the age chosen
        else wdFactor=0;

        totalsByYear[years]=calcfutureVal(totalsByYear[years-1]-(wdFactor*WD_amnt),r,1);   //calc FV from last years PV appreciating 1 year at a time
    }


    for(int j=0;j<50;j++)   //populate the amortization schedule text box
    {
        ui->textBox->append("Age: "+(QString::number(age+j))+"\t"+locale.toCurrencyString(qRound(totalsByYear[j])));
    }

    //offset to age 65
    int offset65=65-age;
    int offset70=70-age;
    int offset75=75-age;
    int offset80=80-age;

    ui->label65->setText(locale.toCurrencyString(qRound(totalsByYear[offset65])));
    ui->label70->setText(locale.toCurrencyString(qRound(totalsByYear[offset70])));
    ui->label75->setText(locale.toCurrencyString(qRound(totalsByYear[offset75])));
    ui->label80->setText(locale.toCurrencyString(qRound(totalsByYear[offset80])));

    ui->textBox->moveCursor(QTextCursor::Start); //reset to the top of the textBox




    auto series = new QLineSeries;



    for(int i=0;i<30;i++)             //let's load the graph with data
        series->append(i+age,totalsByYear[i]);


    auto chart = new QChart;
    chart->legend()->hide();
    chart->addSeries(series);
    chart->setTitle("Projected Growth Over 30 Years");
    chart->setVisible(true);


    QFont titleFont;
    titleFont.setFamily("Arial"); // Set font family
    titleFont.setPointSize(18);   // Set font size
    titleFont.setBold(true);      // Make it bold
    chart->setTitleFont(titleFont);







    // Create and configure the X-axis
    auto axisX = new QValueAxis();
    axisX->setRange(50,90);      // Set range of the X-axis
    axisX->setTickCount(5);      // Number of ticks (including min and max)
    axisX->setTitleText("AGE");
    chart->addAxis(axisX, Qt::AlignBottom); // Add X-axis to the bottom
    series->attachAxis(axisX);             // Attach the axis to the series

    // Create and configure the Y-axis
    auto axisY = new QValueAxis();
    axisY->setRange(totalsByYear[0],totalsByYear[29]);      // Set range of the Y-axis
    axisY->setTickCount(5);      // Number of ticks (including min and max)
    axisY->setTitleText("VALUE");
    chart->addAxis(axisY, Qt::AlignLeft);  // Add Y-axis to the left
    series->attachAxis(axisY);             // Attach the axis to the series




    QChartView *chartView= new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setVisible(true);

    ui->gridLayout->addWidget(chartView,0,0);



}
//*****************************************************************************
void MainWindow::on_startBal_editingFinished()
{
    PV=ui->startBal->text().toFloat();  //capture the present value and convert display to currency
    ui->startBal->setText(locale.toCurrencyString(qRound(ui->startBal->text().toFloat())));
}

//*****************************************************************************
void MainWindow::on_startAge_editingFinished()
{
    if(ui->startAge->text().toInt()>0)
    {
        age=ui->startAge->text().toInt();   //if age has been changed save it

    }
    else
        ui->startAge->setText(QString::number(age));    //otherwise fill in the default
}
//*****************************************************************************

//  adjusting the withdrawl amount slider





void MainWindow::on_wd_age_slider_valueChanged(int value)
{
    ui->WD_age->setText(QString::number(ui->wd_age_slider->value()));
    WD_age=ui->wd_age_slider->value();
    on_pushButton_clicked();    //hit the amortize button to repeat calculation

}

//*****************************************************************************
void MainWindow::on_wd_slider_valueChanged(int value)
{
    ui->WD_amnt->setText(locale.toCurrencyString(ui->wd_slider->value()*50000)); //display the amount in the textbox WD_amnt
    WD_amnt=ui->wd_slider->value()*50000;
    on_pushButton_clicked();    //hit the amortize button to repeat calculation
}

//*****************************************************************************
void MainWindow::on_WD_on_off_button_toggled(bool withdrawing)
{
    isWithdrawling=withdrawing;

    if(isWithdrawling)
        ui->on_offlabel->setText("ON");
        else
            ui->on_offlabel->setText("OFF");
    on_pushButton_clicked();    //hit the amortize button to repeat calculation


}

