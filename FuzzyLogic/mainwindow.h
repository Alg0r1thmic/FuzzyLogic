#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setupDemo(int demoIndex);
    void setupQuadraticDemo(QCustomPlot *customPlot);
private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QString demoName;
    int currentDemoIndex;
    int xP,yP,xN,yN;

};

#endif // MAINWINDOW_H
