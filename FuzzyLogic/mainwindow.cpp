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

void MainWindow::setupForUser(QCustomPlot *customPlot)
{
    customPlot->xAxis->setLabel("X");
    customPlot->yAxis->setLabel("Y");
    // set axes ranges, so we see all data:
    customPlot->xAxis->setRange(this->xP, this->xN);
    customPlot->yAxis->setRange(this->yP, this->yN);

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
    customPlot->addGraph();
    QPen redDotPen;
    redDotPen.setStyle(Qt::DotLine);
    redDotPen.setColor(QColor(170, 100, 100, 180));
    redDotPen.setWidthF(2);
    customPlot->graph(0)->setPen(redDotPen);
    customPlot->graph(0)->setBrush(QBrush(QPixmap("./balboa.jpg"))); // fill with texture of specified image

    customPlot->addGraph();
    customPlot->graph(1)->setPen(QPen(Qt::red));

    // activate channel fill for graph 0 towards graph 1:
    customPlot->graph(0)->setChannelFillGraph(customPlot->graph(1));
    QVector<double> x(10);
    QVector<double> y0(250), y1(10);
    for (int i=0; i<10; ++i)
    {
      // just playing with numbers, not much to learn here
        if(i<5)
        {
            x[i] = i;
            y1[i] = 1;

        }
        else
        {
            x[i]=i;
            y1[i]=i;
        }
    }

    // pass data points to graphs:
    //customPlot->graph(0)->setData(x, y0);
    customPlot->graph(1)->setData(x, y1);


}
void MainWindow::on_pushButton_clicked()
{
    this->xP=ui->inputX->text().toInt();
    this->yP=ui->inputY->text().toInt();
    this->xN=ui->inputXN->text().toInt();
    this->yN=ui->inputYN->text().toInt();
    setupForUser(ui->customPlot);
}
//add function gamma
void MainWindow::on_pushButton_5_clicked()
{

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
