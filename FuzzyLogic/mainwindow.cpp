#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QDebug>
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //set configurations
    ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectAxes |
                                    QCP::iSelectLegend | QCP::iSelectPlottables);
    //ui->customPlot_2->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectAxes |QCP::iSelectLegend | QCP::iSelectPlottables);
    ui->customPlot->plotLayout()->insertRow(0);
    ui->customPlot_2->plotLayout()->insertRow(0);
    ui->customPlot_3->plotLayout()->insertRow(0);

    QCPTextElement *title = new QCPTextElement(ui->customPlot, "Temperatura", QFont("sans", 17, QFont::Bold));
    QCPTextElement *title1 = new QCPTextElement(ui->customPlot_2, "Results", QFont("sans", 17, QFont::Bold));
    QCPTextElement *title2 = new QCPTextElement(ui->customPlot_3, "Velocidad", QFont("sans", 17, QFont::Bold));

    ui->customPlot->plotLayout()->addElement(0, 0, title);

    ui->customPlot_2->plotLayout()->addElement(0, 0, title1);

    ui->customPlot_3->plotLayout()->addElement(0, 0, title2);

    ui->customPlot_2->xAxis->setRange(0, 400);
    ui->customPlot_2->yAxis->setRange(0, 1);

    ui->customPlot_3->xAxis->setRange(0, 400);
    ui->customPlot_3->yAxis->setRange(0, 1);
    //set font
    ui->customPlot->legend->setVisible(true);
    QFont legendFont = font();
    legendFont.setPointSize(10);
    ui->customPlot->legend->setFont(legendFont);
    ui->customPlot->legend->setSelectedFont(legendFont);
    ui->customPlot->legend->setSelectableParts(QCPLegend::spItems); // legend box shall not be selectable, only legend items
    //set font1
    ui->customPlot_3->legend->setVisible(true);
    QFont legendFont1 = font();
    legendFont1.setPointSize(10);
    ui->customPlot_3->legend->setFont(legendFont1);
    ui->customPlot_3->legend->setSelectedFont(legendFont1);
    ui->customPlot_3->legend->setSelectableParts(QCPLegend::spItems); // legend box shall not be selectable, only legend items


    //connect diferents signal and slots

    // connect slot that ties some axis selections together (especially opposite axes):
    connect(ui->customPlot, SIGNAL(selectionChangedByUser()), this, SLOT(selectionChanged()));
    connect(ui->customPlot_3, SIGNAL(selectionChangedByUser()), this, SLOT(selectionChanged()));

    // connect slots that takes care that when an axis is selected, only that direction can be dragged and zoomed:
    connect(ui->customPlot, SIGNAL(mousePress(QMouseEvent*)), this, SLOT(mousePress()));
    connect(ui->customPlot, SIGNAL(mouseWheel(QWheelEvent*)), this, SLOT(mouseWheel()));
    //-----------------------------------------------------------
    connect(ui->customPlot_3, SIGNAL(mousePress(QMouseEvent*)), this, SLOT(mousePress()));
    connect(ui->customPlot_3, SIGNAL(mouseWheel(QWheelEvent*)), this, SLOT(mouseWheel()));

    // connect some interaction slots:
    connect(ui->customPlot, SIGNAL(axisDoubleClick(QCPAxis*,QCPAxis::SelectablePart,QMouseEvent*)), this, SLOT(axisLabelDoubleClick(QCPAxis*,QCPAxis::SelectablePart)));
    connect(ui->customPlot, SIGNAL(legendDoubleClick(QCPLegend*,QCPAbstractLegendItem*,QMouseEvent*)), this, SLOT(legendDoubleClick(QCPLegend*,QCPAbstractLegendItem*)));
    connect(title, SIGNAL(doubleClicked(QMouseEvent*)), this, SLOT(titleDoubleClick(QMouseEvent*)));
    // connect some interaction slots:
    connect(ui->customPlot_3, SIGNAL(axisDoubleClick(QCPAxis*,QCPAxis::SelectablePart,QMouseEvent*)), this, SLOT(axisLabelDoubleClick(QCPAxis*,QCPAxis::SelectablePart)));
    connect(ui->customPlot_3, SIGNAL(legendDoubleClick(QCPLegend*,QCPAbstractLegendItem*,QMouseEvent*)), this, SLOT(legendDoubleClick(QCPLegend*,QCPAbstractLegendItem*)));

    // setup policy and connect slot for context menu popup:
    ui->customPlot->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->customPlot, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(contextMenuRequest(QPoint)));
    // setup policy and connect slot for context menu popup:
    ui->customPlot_3->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->customPlot_3, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(contextMenuRequest(QPoint)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

//interacciones  con el usuario cambiar el nombre del titulo ,nombre del eje
//change tittle with double click
void MainWindow::titleDoubleClick(QMouseEvent* event)
{
  Q_UNUSED(event)
  if (QCPTextElement *title = qobject_cast<QCPTextElement*>(sender()))
  {
    // Set the plot title by double clicking on it
    bool ok;
    QString newTitle = QInputDialog::getText(this, "QCustomPlot example", "New plot title:", QLineEdit::Normal, title->text(), &ok);
    if (ok)
    {
      title->setText(newTitle);
      ui->customPlot->replot();
    }
  }
}
//change axis with double click
void MainWindow::axisLabelDoubleClick(QCPAxis *axis, QCPAxis::SelectablePart part)
{
  // Set an axis label by double clicking on it
  if (part == QCPAxis::spAxisLabel) // only react when the actual axis label is clicked, not tick label or axis backbone
  {
    bool ok;
    QString newLabel = QInputDialog::getText(this, "QCustomPlot example", "New axis label:", QLineEdit::Normal, axis->label(), &ok);
    if (ok)
    {
      axis->setLabel(newLabel);
      ui->customPlot->replot();
    }
  }
}
//change legeng name with double click
void MainWindow::legendDoubleClick(QCPLegend *legend, QCPAbstractLegendItem *item)
{
  // Rename a graph by double clicking on its legend item
  Q_UNUSED(legend)
  if (item) // only react if item was clicked (user could have clicked on border padding of legend where there is no item, then item is 0)
  {
    QCPPlottableLegendItem *plItem = qobject_cast<QCPPlottableLegendItem*>(item);
    bool ok;
    QString newName = QInputDialog::getText(this, "QCustomPlot example", "Graph name:", QLineEdit::Normal, plItem->plottable()->name(), &ok);
    if (ok)
    {
      plItem->plottable()->setName(newName);
      ui->customPlot->replot();
    }
  }
}

//seleccionar un grafico
void MainWindow::selectionChanged()
{
  if (ui->customPlot->xAxis->selectedParts().testFlag(QCPAxis::spAxis) || ui->customPlot->xAxis->selectedParts().testFlag(QCPAxis::spTickLabels) ||
      ui->customPlot->xAxis2->selectedParts().testFlag(QCPAxis::spAxis) || ui->customPlot->xAxis2->selectedParts().testFlag(QCPAxis::spTickLabels))
  {
    ui->customPlot->xAxis2->setSelectedParts(QCPAxis::spAxis|QCPAxis::spTickLabels);
    ui->customPlot->xAxis->setSelectedParts(QCPAxis::spAxis|QCPAxis::spTickLabels);
  }
  if (ui->customPlot->yAxis->selectedParts().testFlag(QCPAxis::spAxis) || ui->customPlot->yAxis->selectedParts().testFlag(QCPAxis::spTickLabels) ||
      ui->customPlot->yAxis2->selectedParts().testFlag(QCPAxis::spAxis) || ui->customPlot->yAxis2->selectedParts().testFlag(QCPAxis::spTickLabels))
  {
    ui->customPlot->yAxis2->setSelectedParts(QCPAxis::spAxis|QCPAxis::spTickLabels);
    ui->customPlot->yAxis->setSelectedParts(QCPAxis::spAxis|QCPAxis::spTickLabels);
  }

  for (int i=0; i<ui->customPlot->graphCount(); ++i)
  {
    QCPGraph *graph = ui->customPlot->graph(i);
    QCPPlottableLegendItem *item = ui->customPlot->legend->itemWithPlottable(graph);
    if (item->selected() || graph->selected())
    {
      item->setSelected(true);
      graph->setSelection(QCPDataSelection(graph->data()->dataRange()));
    }
  }
}
//seleccionar  un  determinado eje
void MainWindow::mousePress()
{


  if (ui->customPlot->xAxis->selectedParts().testFlag(QCPAxis::spAxis))
    ui->customPlot->axisRect()->setRangeDrag(ui->customPlot->xAxis->orientation());
  else if (ui->customPlot->yAxis->selectedParts().testFlag(QCPAxis::spAxis))
    ui->customPlot->axisRect()->setRangeDrag(ui->customPlot->yAxis->orientation());
  else
    ui->customPlot->axisRect()->setRangeDrag(Qt::Horizontal|Qt::Vertical);
}
//acercar un eje seleccionado con el mouse
void MainWindow::mouseWheel()
{


  if (ui->customPlot->xAxis->selectedParts().testFlag(QCPAxis::spAxis))
    ui->customPlot->axisRect()->setRangeZoom(ui->customPlot->xAxis->orientation());
  else if (ui->customPlot->yAxis->selectedParts().testFlag(QCPAxis::spAxis))
    ui->customPlot->axisRect()->setRangeZoom(ui->customPlot->yAxis->orientation());
  else
    ui->customPlot->axisRect()->setRangeZoom(Qt::Horizontal|Qt::Vertical);
}


void MainWindow::addRandomGraph()
{
  int n = 50; // number of points in graph
  double xScale = (rand()/(double)RAND_MAX + 0.5)*2;
  double yScale = (rand()/(double)RAND_MAX + 0.5)*2;
  double xOffset = (rand()/(double)RAND_MAX - 0.5)*4;
  double yOffset = (rand()/(double)RAND_MAX - 0.5)*10;
  double r1 = (rand()/(double)RAND_MAX - 0.5)*2;
  double r2 = (rand()/(double)RAND_MAX - 0.5)*2;
  double r3 = (rand()/(double)RAND_MAX - 0.5)*2;
  double r4 = (rand()/(double)RAND_MAX - 0.5)*2;
  QVector<double> x(n), y(n);
  for (int i=0; i<n; i++)
  {
    x[i] = (i/(double)n-0.5)*10.0*xScale + xOffset;
    y[i] = (qSin(x[i]*r1*5)*qSin(qCos(x[i]*r2)*r4*3)+r3*qCos(qSin(x[i])*r4*2))*yScale + yOffset;
  }

  ui->customPlot->addGraph();
  ui->customPlot->graph()->setName(QString("Graph %1").arg(ui->customPlot->graphCount()-1));
  ui->customPlot->graph()->setData(x, y);
  ui->customPlot->graph()->setLineStyle((QCPGraph::LineStyle)(rand()%5+1));
  if (rand()%100 > 50)
    ui->customPlot->graph()->setScatterStyle(QCPScatterStyle((QCPScatterStyle::ScatterShape)(rand()%14+1)));
  QPen graphPen;
  graphPen.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
  graphPen.setWidthF(rand()/(double)RAND_MAX*2+1);
  ui->customPlot->graph()->setPen(graphPen);
  ui->customPlot->replot();
}
void MainWindow::contextMenuRequest(QPoint pos)
{
  QMenu *menu = new QMenu(this);
  menu->setAttribute(Qt::WA_DeleteOnClose);

  if (ui->customPlot->legend->selectTest(pos, false) >= 0) // context menu on legend requested
  {
    /*
    menu->addAction("Move to top left", this, SLOT(moveLegend()))->setData((int)(Qt::AlignTop|Qt::AlignLeft));
    menu->addAction("Move to top center", this, SLOT(moveLegend()))->setData((int)(Qt::AlignTop|Qt::AlignHCenter));
    menu->addAction("Move to top right", this, SLOT(moveLegend()))->setData((int)(Qt::AlignTop|Qt::AlignRight));
    menu->addAction("Move to bottom right", this, SLOT(moveLegend()))->setData((int)(Qt::AlignBottom|Qt::AlignRight));
    menu->addAction("Move to bottom left", this, SLOT(moveLegend()))->setData((int)(Qt::AlignBottom|Qt::AlignLeft));*/
  } else  // general context menu on graphs requested
  {
    //menu->addAction("Add random graph", this, SLOT(addRandomGraph()));
    menu->addAction("Add gamma function", this, SLOT(setupGammaFunction()));    
    menu->addAction("Add L function", this, SLOT(setupLFunction()));
    menu->addAction("Add Lambda function", this,SLOT(setupLambdaFunction()));
    menu->addAction("Add Pi function", this,SLOT(setupPIFunction()));
    if (ui->customPlot->selectedGraphs().size() > 0)
    {
         menu->addAction("Remove selected graph", this, SLOT(removeSelectedGraph()));
         menu->addAction("resize this graph",this,SLOT(resizeFunctions()));
    }
    if (ui->customPlot->graphCount() > 0)
    {
        menu->addAction("Remove all graphs", this, SLOT(removeAllGraphs()));

    }
  }

  menu->popup(ui->customPlot->mapToGlobal(pos));
}
void MainWindow::removeSelectedGraph()
{
  if (ui->customPlot->selectedGraphs().size() > 0)
  {
    ui->customPlot->removeGraph(ui->customPlot->selectedGraphs().first());
    ui->customPlot->replot();
  }
}

void MainWindow::removeAllGraphs()
{
  ui->customPlot->clearGraphs();
  ui->customPlot->replot();
}
//---------------------------------------------------------------------------------------------

void MainWindow::setupForUser(QCustomPlot *customPlot)
{
    customPlot->xAxis->setLabel("X");
    customPlot->yAxis->setLabel("Y");
    // set axes ranges, so we see all data:
    customPlot->xAxis->setRange(this->xP, this->xN);
    customPlot->yAxis->setRange(this->yP, this->yN);
    setWindowTitle("fuzzyLogic");
    statusBar()->clearMessage();
    ui->customPlot->replot();
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

void MainWindow::setupGammaFunction()
{
    // generate some data:
    QVector<double> x(3), y(3);// initialize with entries 0..100
    x[0]=1;
    y[0]=0;
    x[1]=2;
    y[1]=1;
    x[2]=3;
    y[2]=1;

    // create graph and assign data to it:
    /*ui->customPlot->addGraph();
    ui->customPlot->graph()->setName(QString("gamma function"));
    ui->customPlot->graph(0)->setData(x, y);
    ui->customPlot->replot();

    */
    //--------------------------------
    ui->customPlot->addGraph();
    ui->customPlot->graph()->setName(QString("Graph %1").arg(ui->customPlot->graphCount()-1));
    ui->customPlot->graph()->setData(x, y);

    QPen graphPen;
    graphPen.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot->graph()->setPen(graphPen);
    ui->customPlot->replot();

}

void MainWindow::setupLFunction()
{
    // generate some data:
    QVector<double> x(3), y(3);// initialize with entries 0..100
    x[0]=0;
    y[0]=1;
    x[1]=10;
    y[1]=1;
    x[2]=20;
    y[2]=0;
    ui->customPlot->addGraph();
    ui->customPlot->graph()->setName(QString("Graph %1").arg(ui->customPlot->graphCount()-1));
    ui->customPlot->graph()->setData(x, y);
    QPen graphPen;
    graphPen.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot->graph()->setPen(graphPen);
    ui->customPlot->replot();


    //______________________________________________

    QVector<double> x1(4), y1(4);// initialize with entries 0..100
    x1[0]=10;
    y1[0]=0;
    x1[1]=17.5;
    y1[1]=1;
    x1[2]=25;
    y1[2]=0;
    x1[3]=30;
    y1[3]=0;

    // create graph and assign data to it:
    ui->customPlot->addGraph();
    ui->customPlot->graph()->setName(QString("Graph %1").arg(ui->customPlot->graphCount()-1));
    ui->customPlot->graph()->setData(x1, y1);

    QPen graphPen1;
    graphPen1.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen1.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot->graph()->setPen(graphPen1);
    ui->customPlot->replot();

    //______________________________________________

    QVector<double> x2(4), y2(4);// initialize with entries 0..100
    x2[0]=20;
    y2[0]=0;
    x2[1]=25;
    y2[1]=1;
    x2[2]=30;
    y2[2]=0;
    x2[3]=40;
    y2[3]=0;

    // create graph and assign data to it:
    ui->customPlot->addGraph();
    ui->customPlot->graph()->setName(QString("Graph %1").arg(ui->customPlot->graphCount()-1));
    ui->customPlot->graph()->setData(x2, y2);

    QPen graphPen2;
    graphPen2.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen2.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot->graph()->setPen(graphPen2);
    ui->customPlot->replot();
    //______________________________________________

    QVector<double> x3(4), y3(4);// initialize with entries 0..100
    x3[0]=25;
    y3[0]=0;
    x3[1]=32.5;
    y3[1]=1;
    x3[2]=40;
    y3[2]=0;
    x3[3]=50;
    y3[3]=0;

    // create graph and assign data to it:
    ui->customPlot->addGraph();
    ui->customPlot->graph()->setName(QString("Graph %1").arg(ui->customPlot->graphCount()-1));
    ui->customPlot->graph()->setData(x3, y3);

    QPen graphPen3;
    graphPen3.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen3.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot->graph()->setPen(graphPen3);
    ui->customPlot->replot();


    /*////////////////////////////////777*/
    // generate some data:
    QVector<double> x4(3), y4(3);// initialize with entries 0..100
    x4[0]=30;
    y4[0]=0;
    x4[1]=40;
    y4[1]=1;
    x4[2]=50;
    y4[2]=1;


    //--------------------------------
    ui->customPlot->addGraph();
    ui->customPlot->graph()->setName(QString("Graph %1").arg(ui->customPlot->graphCount()-1));
    ui->customPlot->graph()->setData(x4, y4);

    QPen graphPen4;
    graphPen4.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen4.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot->graph()->setPen(graphPen4);
    ui->customPlot->replot();
    /*////////////////////////////////777*/
    // generate some data:
    QVector<double> x5(2), y5(2);// initialize with entries 0..100
    x5[0]=16;
    y5[0]=0;
    x5[1]=16;
    y5[1]=1;


    //--------------------------------
    ui->customPlot->addGraph();
    ui->customPlot->graph()->setName(QString("Graph %1").arg(ui->customPlot->graphCount()-1));
    ui->customPlot->graph()->setData(x5, y5);

    QPen graphPen5;
    graphPen5.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen5.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot->graph()->setPen(graphPen5);
    ui->customPlot->replot();
    /*////////////////////////////////777*/
    // generate some data:
    QVector<double> x6(2), y6(2);// initialize with entries 0..100
    x6[0]=0;
    y6[0]=0.4;
    x6[1]=50;
    y6[1]=0.4;


    //--------------------------------
    ui->customPlot->addGraph();
    ui->customPlot->graph()->setName(QString("Graph %1").arg(ui->customPlot->graphCount()-1));
    ui->customPlot->graph()->setData(x6, y6);

    QPen graphPen6;
    graphPen6.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen6.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot->graph()->setPen(graphPen6);
    ui->customPlot->replot();
    // generate some data:
    QVector<double> x7(2), y7(2);// initialize with entries 0..100
    x7[0]=0;
    y7[0]=0.8;
    x7[1]=50;
    y7[1]=0.8;


    //--------------------------------
    ui->customPlot->addGraph();
    ui->customPlot->graph()->setName(QString("Graph %1").arg(ui->customPlot->graphCount()-1));
    ui->customPlot->graph()->setData(x7, y7);

    QPen graphPen7;
    graphPen7.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen7.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot->graph()->setPen(graphPen7);
    ui->customPlot->replot();


}

void MainWindow::setupLambdaFunction()
{

    // generate some data:
    QVector<double> x(3), y(3);// initialize with entries 0..100
    x[0]=0;
    y[0]=1;
    x[1]=160;
    y[1]=0;
    x[2]=180;
    y[2]=0;
    ui->customPlot_3->addGraph();
    ui->customPlot_3->graph()->setName(QString("Graph %1").arg(ui->customPlot_3->graphCount()-1));
    ui->customPlot_3->graph()->setData(x, y);
    QPen graphPen;
    graphPen.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot_3->graph()->setPen(graphPen);
    ui->customPlot_3->replot();
    ///////////////////////////////////////////////////////////

    QVector<double> x3(4), y3(4);// initialize with entries 0..100
    x3[0]=160;
    y3[0]=0;
    x3[1]=240;
    y3[1]=1;
    x3[2]=320;
    y3[2]=0;
    x3[3]=321;
    y3[3]=0;

    // create graph and assign data to it:
    ui->customPlot_3->addGraph();
    ui->customPlot_3->graph()->setName(QString("Graph %1").arg(ui->customPlot_3->graphCount()-1));
    ui->customPlot_3->graph()->setData(x3, y3);

    QPen graphPen3;
    graphPen3.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen3.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot_3->graph()->setPen(graphPen3);
    ui->customPlot_3->replot();

    ///////////////////////////////////////////////////////////

    QVector<double> x4(4), y4(4);// initialize with entries 0..100
    x4[0]=240;
    y4[0]=0;
    x4[1]=320;
    y4[1]=1;
    x4[2]=400;
    y4[2]=0;
    x4[3]=400;
    y4[3]=0;

    // create graph and assign data to it:
    ui->customPlot_3->addGraph();
    ui->customPlot_3->graph()->setName(QString("Graph %1").arg(ui->customPlot_3->graphCount()-1));
    ui->customPlot_3->graph()->setData(x4, y4);

    QPen graphPen4;
    graphPen4.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen4.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot_3->graph()->setPen(graphPen4);
    ui->customPlot_3->replot();

    ///////////////////////////////////////////////////////////

    QVector<double> x5(2), y5(2);// initialize with entries 0..100
    x5[0]=320;
    y5[0]=0;
    x5[1]=400;
    y5[1]=1;

    // create graph and assign data to it:
    ui->customPlot_3->addGraph();
    ui->customPlot_3->graph()->setName(QString("Graph %1").arg(ui->customPlot_3->graphCount()-1));
    ui->customPlot_3->graph()->setData(x5, y5);

    QPen graphPen5;
    graphPen5.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen5.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot_3->graph()->setPen(graphPen5);
    ui->customPlot_3->replot();


    /*////////////////////////////////777*/
    // generate some data:
    QVector<double> x6(2), y6(2);// initialize with entries 0..100
    x6[0]=0;
    y6[0]=0.4;
    x6[1]=400;
    y6[1]=0.4;


    //--------------------------------
    ui->customPlot_3->addGraph();
    ui->customPlot_3->graph()->setName(QString("Graph %1").arg(ui->customPlot_3->graphCount()-1));
    ui->customPlot_3->graph()->setData(x6, y6);

    QPen graphPen6;
    graphPen6.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen6.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot_3->graph()->setPen(graphPen6);
    ui->customPlot_3->replot();
    // generate some data:
    QVector<double> x7(2), y7(2);// initialize with entries 0..100
    x7[0]=0;
    y7[0]=0.8;
    x7[1]=400;
    y7[1]=0.8;


    //--------------------------------
    ui->customPlot_3->addGraph();
    ui->customPlot_3->graph()->setName(QString("Graph %1").arg(ui->customPlot_3->graphCount()-1));
    ui->customPlot_3->graph()->setData(x7, y7);

    QPen graphPen7;
    graphPen7.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen7.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot_3->graph()->setPen(graphPen7);
    ui->customPlot_3->replot();


}

void MainWindow::setupPIFunction()
{
    // generate some data:
    QVector<double> x(3), y(3);// initialize with entries 0..100
    x[0]=0;
    y[0]=1;
    x[1]=160;
    y[1]=0;
    x[2]=180;
    y[2]=0;
    ui->customPlot_2->addGraph();
    ui->customPlot_2->graph()->setName(QString("Graph %1").arg(ui->customPlot_2->graphCount()-1));
    ui->customPlot_2->graph()->setData(x, y);
    QPen graphPen;
    graphPen.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot_2->graph()->setPen(graphPen);
    ui->customPlot_2->replot();
    ///////////////////////////////////////////////////////////

    QVector<double> x3(4), y3(4);// initialize with entries 0..100
    x3[0]=160;
    y3[0]=0;
    x3[1]=240;
    y3[1]=1;
    x3[2]=320;
    y3[2]=0;
    x3[3]=321;
    y3[3]=0;

    // create graph and assign data to it:
    ui->customPlot_2->addGraph();
    ui->customPlot_2->graph()->setName(QString("Graph %1").arg(ui->customPlot_2->graphCount()-1));
    ui->customPlot_2->graph()->setData(x3, y3);

    QPen graphPen3;
    graphPen3.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen3.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot_2->graph()->setPen(graphPen3);
    ui->customPlot_2->replot();

    ///////////////////////////////////////////////////////////

    QVector<double> x4(4), y4(4);// initialize with entries 0..100
    x4[0]=240;
    y4[0]=0;
    x4[1]=320;
    y4[1]=1;
    x4[2]=400;
    y4[2]=0;
    x4[3]=400;
    y4[3]=0;

    // create graph and assign data to it:
    ui->customPlot_2->addGraph();
    ui->customPlot_2->graph()->setName(QString("Graph %1").arg(ui->customPlot_2->graphCount()-1));
    ui->customPlot_2->graph()->setData(x4, y4);

    QPen graphPen4;
    graphPen4.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen4.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot_2->graph()->setPen(graphPen4);
    ui->customPlot_2->replot();

    ///////////////////////////////////////////////////////////

    QVector<double> x5(2), y5(2);// initialize with entries 0..100
    x5[0]=320;
    y5[0]=0;
    x5[1]=400;
    y5[1]=1;

    // create graph and assign data to it:
    ui->customPlot_2->addGraph();
    ui->customPlot_2->graph()->setName(QString("Graph %1").arg(ui->customPlot_2->graphCount()-1));
    ui->customPlot_2->graph()->setData(x5, y5);

    QPen graphPen5;
    graphPen5.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen5.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot_2->graph()->setPen(graphPen5);
    ui->customPlot_2->replot();


    /*////////////////////////////////777*/
    // generate some data:
    QVector<double> x6(2), y6(2);// initialize with entries 0..100
    x6[0]=0;
    y6[0]=0.4;
    x6[1]=400;
    y6[1]=0.4;


    //--------------------------------
    ui->customPlot_2->addGraph();
    ui->customPlot_2->graph()->setName(QString("Graph %1").arg(ui->customPlot_2->graphCount()-1));
    ui->customPlot_2->graph()->setData(x6, y6);

    QPen graphPen6;
    graphPen6.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen6.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot_2->graph()->setPen(graphPen6);
    ui->customPlot_2->replot();
    // generate some data:
    QVector<double> x7(2), y7(2);// initialize with entries 0..100
    x7[0]=0;
    y7[0]=0.8;
    x7[1]=400;
    y7[1]=0.8;


    //--------------------------------
    ui->customPlot_2->addGraph();
    ui->customPlot_2->graph()->setName(QString("Graph %1").arg(ui->customPlot_2->graphCount()-1));
    ui->customPlot_2->graph()->setData(x7, y7);

    QPen graphPen7;
    graphPen7.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen7.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot_2->graph()->setPen(graphPen7);
    ui->customPlot_2->replot();
    // generate some data:
    QVector<double> x8(24), y8(24);// initialize with entries 0..100


    x8[0]=250;
    y8[0]=0;
    x8[1]=250;
    y8[1]=0.1;
    x8[2]=250;
    y8[2]=0;
    x8[3]=270;
    y8[3]=0;
    x8[4]=270;
    y8[4]=0.4;
    x8[5]=270;
    y8[5]=0;
    x8[6]=290;
    y8[6]=0;
    x8[7]=290;
    y8[7]=0.6;
    x8[8]=290;
    y8[8]=0;

    x8[9]=310;
    y8[9]=0;
    x8[10]=310;
    y8[10]=0.8;
    x8[11]=310;
    y8[11]=0;

    x8[12]=330;
    y8[12]=0;
    x8[13]=330;
    y8[13]=0.8;
    x8[14]=330;
    y8[14]=0;

    x8[15]=350;
    y8[15]=0;
    x8[16]=350;
    y8[16]=0.6;
    x8[17]=350;
    y8[17]=0;

    x8[18]=370;
    y8[18]=0;
    x8[19]=370;
    y8[19]=0.4;
    x8[20]=370;
    y8[20]=0;

    x8[21]=390;
    y8[21]=0;
    x8[22]=390;
    y8[22]=0.4;
    x8[23]=390;
    y8[23]=0;


    //--------------------------------
    ui->customPlot_2->addGraph();
    ui->customPlot_2->graph()->setName(QString("Graph %1").arg(ui->customPlot_2->graphCount()-1));
    ui->customPlot_2->graph()->setData(x8, y8);

    QPen graphPen8;
    graphPen8.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen8.setWidthF(rand()/(double)RAND_MAX*2+1);
    ui->customPlot_2->graph()->setPen(graphPen8);
    ui->customPlot_2->replot();


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
    setupGammaFunction();
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
//horizontal slider value changed
void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    QString s=QString::number(value);
    ui->aProgressBar->setText(s);
    ui->aProgressBar->setEnabled(false);
    if (ui->customPlot->selectedGraphs().size() > 0)
    {
        //ui->customPlot->removeGraph(ui->customPlot->selectedGraphs().first());
        //ui->customPlot->replot();
        QVector<double> x(4), y(4);// initialize with entries 0..100
        x[0]=value;
        y[0]=0;
        x[1]=value+0.5;
        y[1]=1;
        x[2]=value+1.5;
        y[2]=1;
        x[3]=value+2;
        y[3]=0;
        // create graph and assign data to it:
        ui->customPlot->selectedGraphs().first()->setData(x,y);
        //ui->customPlot->selectedGraphs().first()
        //ui->customPlot->graph()->setName(QString("pi function"));
        //ui->customPlot->graph(0)->setData(x, y);
        ui->customPlot->replot();
    }

}

void MainWindow::on_horizontalSlider_3_valueChanged(int value)
{

    QString s=QString::number(value);
    ui->bProgreesBar->setText(s);
    ui->bProgreesBar->setEnabled(false);
}

void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{

    QString s=QString::number(value);
    ui->cProgressBar->setText(s);
}

void MainWindow::on_horizontalSlider_5_valueChanged(int value)
{

    QString s=QString::number(value);
    ui->dProgressBar->setText(s);
}
