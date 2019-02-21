/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_7;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout_13;
    QLabel *label_19;
    QLineEdit *lineEdit_4;
    QLabel *label_20;
    QLineEdit *lineEdit_5;
    QGridLayout *gridLayout_14;
    QLabel *label_21;
    QLineEdit *lineEdit_6;
    QLabel *label_22;
    QLineEdit *lineEdit_7;
    QGridLayout *gridLayout_12;
    QLabel *label_17;
    QLineEdit *lineEdit_2;
    QLabel *label_18;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_16;
    QLabel *label_16;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_8;
    QCustomPlot *customPlot_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_6;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_14;
    QLabel *label_15;
    QWidget *tab_7;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *inputXN;
    QLineEdit *inputYN;
    QLineEdit *inputX;
    QLineEdit *inputY;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_10;
    QCustomPlot *customPlot;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_6;
    QLabel *label_8;
    QSlider *horizontalSlider;
    QLabel *label_9;
    QSlider *horizontalSlider_3;
    QLabel *label_10;
    QSlider *horizontalSlider_2;
    QLabel *label_12;
    QSlider *horizontalSlider_5;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_4;
    QLineEdit *aProgressBar;
    QLineEdit *bProgreesBar;
    QLineEdit *cProgressBar;
    QLineEdit *dProgressBar;
    QWidget *tab_2;
    QWidget *tab_3;
    QLabel *label_6;
    QWidget *tab_11;
    QCustomPlot *customPlot_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1354, 772);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1060, 410, 49, 14));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(960, 440, 270, 82));
        gridLayout_15 = new QGridLayout(layoutWidget);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_13->addWidget(label_19, 0, 0, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout_13->addWidget(lineEdit_4, 0, 1, 1, 1);

        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_13->addWidget(label_20, 0, 2, 1, 1);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout_13->addWidget(lineEdit_5, 0, 3, 1, 1);


        gridLayout_15->addLayout(gridLayout_13, 1, 0, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_14->addWidget(label_21, 0, 0, 1, 1);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        gridLayout_14->addWidget(lineEdit_6, 0, 1, 1, 1);

        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_14->addWidget(label_22, 0, 2, 1, 1);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        gridLayout_14->addWidget(lineEdit_7, 0, 3, 1, 1);


        gridLayout_15->addLayout(gridLayout_14, 2, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_12->addWidget(label_17, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_12->addWidget(lineEdit_2, 0, 1, 1, 1);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_12->addWidget(label_18, 0, 2, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_12->addWidget(lineEdit_3, 0, 3, 1, 1);


        gridLayout_15->addLayout(gridLayout_12, 0, 0, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(960, 530, 271, 24));
        gridLayout_16 = new QGridLayout(layoutWidget1);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget1);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_16->addWidget(label_16, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_16->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_8 = new QLineEdit(layoutWidget1);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        gridLayout_16->addWidget(lineEdit_8, 0, 2, 1, 1);

        customPlot_2 = new QCustomPlot(centralWidget);
        customPlot_2->setObjectName(QStringLiteral("customPlot_2"));
        customPlot_2->setGeometry(QRect(40, 410, 811, 221));
        tabWidget_2 = new QTabWidget(centralWidget);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(920, 10, 391, 371));
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        layoutWidget2 = new QWidget(tab_6);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 331, 306));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget2);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_3->addWidget(label_23, 0, 0, 1, 1);

        label_24 = new QLabel(layoutWidget2);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_3->addWidget(label_24, 0, 1, 1, 1);

        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/images/functionGamma.png")));

        gridLayout_3->addWidget(label_11, 1, 0, 1, 1);

        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/images/functionL.png")));

        gridLayout_3->addWidget(label_13, 1, 1, 1, 1);

        label_25 = new QLabel(layoutWidget2);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_3->addWidget(label_25, 2, 0, 1, 1);

        label_26 = new QLabel(layoutWidget2);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_3->addWidget(label_26, 2, 1, 1, 1);

        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/images/functionTriangular.png")));

        gridLayout_3->addWidget(label_14, 3, 0, 1, 1);

        label_15 = new QLabel(layoutWidget2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/images/functionTrapesoidal.png")));

        gridLayout_3->addWidget(label_15, 3, 1, 1, 1);

        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        widget = new QWidget(tab_7);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 30, 361, 131));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_2->addWidget(comboBox, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 5, 1, 1);

        inputXN = new QLineEdit(widget);
        inputXN->setObjectName(QStringLiteral("inputXN"));

        gridLayout->addWidget(inputXN, 1, 0, 1, 1);

        inputYN = new QLineEdit(widget);
        inputYN->setObjectName(QStringLiteral("inputYN"));

        gridLayout->addWidget(inputYN, 1, 1, 1, 2);

        inputX = new QLineEdit(widget);
        inputX->setObjectName(QStringLiteral("inputX"));

        gridLayout->addWidget(inputX, 1, 3, 1, 2);

        inputY = new QLineEdit(widget);
        inputY->setObjectName(QStringLiteral("inputY"));

        gridLayout->addWidget(inputY, 1, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 2, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 4, 1, 2);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 2);

        tabWidget_2->addTab(tab_7, QString());
        tabWidget_3 = new QTabWidget(centralWidget);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(40, 10, 811, 401));
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        customPlot = new QCustomPlot(tab_10);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(0, 0, 801, 231));
        tabWidget = new QTabWidget(tab_10);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 230, 811, 151));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        layoutWidget3 = new QWidget(tab);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 10, 751, 91));
        gridLayout_6 = new QGridLayout(layoutWidget3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_6->addWidget(label_8, 0, 0, 2, 2);

        horizontalSlider = new QSlider(layoutWidget3);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(horizontalSlider, 1, 1, 1, 1);

        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_6->addWidget(label_9, 2, 0, 2, 2);

        horizontalSlider_3 = new QSlider(layoutWidget3);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(horizontalSlider_3, 3, 1, 1, 1);

        label_10 = new QLabel(layoutWidget3);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_6->addWidget(label_10, 4, 0, 1, 1);

        horizontalSlider_2 = new QSlider(layoutWidget3);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(horizontalSlider_2, 4, 1, 1, 1);

        label_12 = new QLabel(layoutWidget3);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_6->addWidget(label_12, 5, 0, 2, 2);

        horizontalSlider_5 = new QSlider(layoutWidget3);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(horizontalSlider_5, 6, 1, 1, 1);

        layoutWidget4 = new QWidget(tab);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(751, 11, 43, 102));
        gridLayout_4 = new QGridLayout(layoutWidget4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        aProgressBar = new QLineEdit(layoutWidget4);
        aProgressBar->setObjectName(QStringLiteral("aProgressBar"));

        gridLayout_4->addWidget(aProgressBar, 0, 0, 1, 1);

        bProgreesBar = new QLineEdit(layoutWidget4);
        bProgreesBar->setObjectName(QStringLiteral("bProgreesBar"));

        gridLayout_4->addWidget(bProgreesBar, 1, 0, 1, 1);

        cProgressBar = new QLineEdit(layoutWidget4);
        cProgressBar->setObjectName(QStringLiteral("cProgressBar"));

        gridLayout_4->addWidget(cProgressBar, 2, 0, 1, 1);

        dProgressBar = new QLineEdit(layoutWidget4);
        dProgressBar->setObjectName(QStringLiteral("dProgressBar"));

        gridLayout_4->addWidget(dProgressBar, 3, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 20, 131, 16));
        tabWidget->addTab(tab_3, QString());
        tabWidget_3->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        customPlot_3 = new QCustomPlot(tab_11);
        customPlot_3->setObjectName(QStringLiteral("customPlot_3"));
        customPlot_3->setGeometry(QRect(0, 0, 801, 211));
        tabWidget_3->addTab(tab_11, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1354, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(0);
        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Reglas", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "IF", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "THEN", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "IF", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "THEN", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "IF", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "THEN", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Datos de Entrada", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "Gamma Function", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "L Function", nullptr));
        label_11->setText(QString());
        label_13->setText(QString());
        label_25->setText(QApplication::translate("MainWindow", "Lambda Function", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "PI Function", nullptr));
        label_14->setText(QString());
        label_15->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "Funciones De Logica Difusa", nullptr));
        label->setText(QApplication::translate("MainWindow", "Establecer las configuraciones de  VarLinguistica:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "-X", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "-Y", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "X", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Y", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "OK", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "Configuraciones de la ventana de graficos", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "a", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "b", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "c", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "d", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Graph1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Graph2", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Edit Parameters", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Graph3", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_10), QApplication::translate("MainWindow", "VarLinguistica1", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_11), QApplication::translate("MainWindow", "VarLinguistica2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
