#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
    customPlot->addGraph();
    customPlot->graph(0)->setData(x,y);
    customPlot->xAxis->setLabel("x");
    customPlot->yAxis->setLabel("y");
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
