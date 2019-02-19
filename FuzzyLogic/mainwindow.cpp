#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //set configurations
    ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectAxes |
                                    QCP::iSelectLegend | QCP::iSelectPlottables);
    ui->customPlot->plotLayout()->insertRow(0);
    QCPTextElement *title = new QCPTextElement(ui->customPlot, "Fuzzy Logic Interaction Example", QFont("sans", 17, QFont::Bold));
    ui->customPlot->plotLayout()->addElement(0, 0, title);

    //set font
    ui->customPlot->legend->setVisible(true);
    QFont legendFont = font();
    legendFont.setPointSize(10);
    ui->customPlot->legend->setFont(legendFont);
    ui->customPlot->legend->setSelectedFont(legendFont);
    ui->customPlot->legend->setSelectableParts(QCPLegend::spItems); // legend box shall not be selectable, only legend items

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setupDemo(int demoIndex)
{
    switch (demoIndex) {
        case 0:setupQuadraticDemo(ui->customPlot);
    }
    setWindowTitle("fuzzyLogic");
    statusBar()->clearMessage();
    currentDemoIndex=demoIndex;
    ui->customPlot->replot();
}
void MainWindow::setupQuadraticDemo(QCustomPlot *customPlot)
{
    QVector<double> x(1001),y(1001);
    for (int i=0; i<101; ++i)
    {
      x[i] = i/50.0 - 1; // x goes from -1 to 1
      y[i] = x[i]*x[i];  // let's plot a quadratic function
    }
    customPlot->addGraph();
    customPlot->graph(0)->setData(x,y);
    customPlot->xAxis->setLabel("X");
    customPlot->yAxis->setLabel("Y");
    // set axes ranges, so we see all data:
    customPlot->xAxis->setRange(this->xP, this->xN);
    customPlot->yAxis->setRange(this->yP, this->yN);

}

void MainWindow::on_pushButton_clicked()
{
    this->xP=ui->inputX->text().toInt();
    this->yP=ui->inputY->text().toInt();
    this->xN=ui->inputXN->text().toInt();
    this->yN=ui->inputYN->text().toInt();
    setupDemo(0);
}
//add function gamma
void MainWindow::on_pushButton_5_clicked()
{
    setupDemo(0);
}
//add function L
void MainWindow::on_pushButton_7_clicked()
{

}
//add function Lambda or triangle
void MainWindow::on_pushButton_8_clicked()
{

}

//add function PI o trapezoidal
void MainWindow::on_pushButton_9_clicked()
{

}
