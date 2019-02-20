#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QInputDialog>
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
    void setupForUser(QCustomPlot *customPlot);
    void setupDemo(int demoIndex);
    void setupQuadraticDemo(QCustomPlot *customPlot);

    //void FindFunctionTipe(QCustomPlot)
private slots:
    void on_pushButton_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();

    //--------------------------------interactions-----------------------------------------
    void titleDoubleClick(QMouseEvent *event);
    void axisLabelDoubleClick(QCPAxis* axis, QCPAxis::SelectablePart part);
    void legendDoubleClick(QCPLegend* legend, QCPAbstractLegendItem* item);
    void selectionChanged();
    void mousePress();
    void mouseWheel();

    void addRandomGraph();
    void contextMenuRequest(QPoint pos);

    void removeSelectedGraph();
    void removeAllGraphs();
    //---------------------------------------------------------------------------------------
    void setupGammaFunction();
    void setupLFunction();
    void setupLambdaFunction();
    void setupPIFunction();

    //---------------------------resize plots------------------
   // void resizeFunctions();

    //--------------------------------progress bar ------------------------

    void on_horizontalSlider_valueChanged(int value);

    void on_horizontalSlider_3_valueChanged(int value);

    void on_horizontalSlider_2_valueChanged(int value);

    void on_horizontalSlider_5_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    QString demoName;
    int currentDemoIndex;
    int xP,yP,xN,yN;

};

#endif // MAINWINDOW_H
