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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCustomPlot *customPlot;
    QLabel *label_7;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_7;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_11;
    QPushButton *pushButton_5;
    QGridLayout *gridLayout_9;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_12;
    QLabel *label_13;
    QPushButton *pushButton_7;
    QGridLayout *gridLayout_10;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *verticalSpacer_14;
    QLabel *label_14;
    QPushButton *pushButton_8;
    QGridLayout *gridLayout_11;
    QSpacerItem *verticalSpacer_15;
    QSpacerItem *verticalSpacer_16;
    QLabel *label_15;
    QPushButton *pushButton_9;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
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
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QWidget *widget1;
    QGridLayout *gridLayout_6;
    QLabel *label_8;
    QSlider *horizontalSlider;
    QLabel *label_9;
    QSlider *horizontalSlider_3;
    QLabel *label_10;
    QSlider *horizontalSlider_2;
    QLabel *label_12;
    QSlider *horizontalSlider_5;
    QWidget *widget2;
    QGridLayout *gridLayout_8;
    QLineEdit *aProgressBar;
    QLineEdit *bProgreesBar;
    QLineEdit *cProgressBar;
    QLineEdit *dProgressBar;
    QWidget *widget3;
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout_12;
    QLabel *label_17;
    QLineEdit *lineEdit_2;
    QLabel *label_18;
    QLineEdit *lineEdit_3;
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
    QWidget *widget4;
    QGridLayout *gridLayout_16;
    QLabel *label_16;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_8;
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
        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(40, 140, 811, 411));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1110, 450, 49, 14));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(922, 140, 503, 274));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        verticalSpacer_7 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_7, 0, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_8, 2, 2, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/images/functionGamma.png")));

        gridLayout_7->addWidget(label_11, 0, 0, 3, 2);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_7->addWidget(pushButton_5, 1, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_7, 0, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        verticalSpacer_11 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_11, 0, 2, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_12, 2, 2, 1, 1);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/images/functionL.png")));

        gridLayout_9->addWidget(label_13, 0, 0, 3, 2);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout_9->addWidget(pushButton_7, 1, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_9, 0, 1, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        verticalSpacer_13 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_13, 0, 2, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_14, 2, 2, 1, 1);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/images/functionTriangular.png")));

        gridLayout_10->addWidget(label_14, 0, 0, 3, 2);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout_10->addWidget(pushButton_8, 1, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_10, 1, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        verticalSpacer_15 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_15, 0, 2, 1, 1);

        verticalSpacer_16 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_16, 2, 2, 1, 1);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/images/functionTrapesoidal.png")));

        gridLayout_11->addWidget(label_15, 0, 0, 3, 2);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        gridLayout_11->addWidget(pushButton_9, 1, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_11, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 0, 1311, 112));
        gridLayout_5 = new QGridLayout(layoutWidget1);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 3, 1, 1);

        inputXN = new QLineEdit(layoutWidget1);
        inputXN->setObjectName(QStringLiteral("inputXN"));

        gridLayout->addWidget(inputXN, 2, 0, 1, 1);

        inputYN = new QLineEdit(layoutWidget1);
        inputYN->setObjectName(QStringLiteral("inputYN"));

        gridLayout->addWidget(inputYN, 2, 1, 1, 1);

        inputX = new QLineEdit(layoutWidget1);
        inputX->setObjectName(QStringLiteral("inputX"));

        gridLayout->addWidget(inputX, 2, 2, 1, 1);

        inputY = new QLineEdit(layoutWidget1);
        inputY->setObjectName(QStringLiteral("inputY"));

        gridLayout->addWidget(inputY, 2, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 0, 0, 3, 1);

        horizontalSpacer_5 = new QSpacerItem(398, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 1, 2, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 0, 2, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 2, 2, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 589, 791, 121));
        widget1 = new QWidget(widget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 13, 671, 91));
        gridLayout_6 = new QGridLayout(widget1);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_6->addWidget(label_8, 0, 0, 2, 2);

        horizontalSlider = new QSlider(widget1);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(horizontalSlider, 1, 1, 1, 1);

        label_9 = new QLabel(widget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_6->addWidget(label_9, 2, 0, 2, 2);

        horizontalSlider_3 = new QSlider(widget1);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(horizontalSlider_3, 3, 1, 1, 1);

        label_10 = new QLabel(widget1);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_6->addWidget(label_10, 4, 0, 1, 1);

        horizontalSlider_2 = new QSlider(widget1);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(horizontalSlider_2, 4, 1, 1, 1);

        label_12 = new QLabel(widget1);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_6->addWidget(label_12, 5, 0, 2, 2);

        horizontalSlider_5 = new QSlider(widget1);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(horizontalSlider_5, 6, 1, 1, 1);

        widget2 = new QWidget(widget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(680, 10, 41, 91));
        gridLayout_8 = new QGridLayout(widget2);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        aProgressBar = new QLineEdit(widget2);
        aProgressBar->setObjectName(QStringLiteral("aProgressBar"));

        gridLayout_8->addWidget(aProgressBar, 0, 0, 1, 1);

        bProgreesBar = new QLineEdit(widget2);
        bProgreesBar->setObjectName(QStringLiteral("bProgreesBar"));

        gridLayout_8->addWidget(bProgreesBar, 1, 0, 1, 1);

        cProgressBar = new QLineEdit(widget2);
        cProgressBar->setObjectName(QStringLiteral("cProgressBar"));

        gridLayout_8->addWidget(cProgressBar, 2, 0, 1, 1);

        dProgressBar = new QLineEdit(widget2);
        dProgressBar->setObjectName(QStringLiteral("dProgressBar"));

        gridLayout_8->addWidget(dProgressBar, 3, 0, 1, 1);

        widget3 = new QWidget(centralWidget);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(970, 500, 270, 82));
        gridLayout_15 = new QGridLayout(widget3);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        label_17 = new QLabel(widget3);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_12->addWidget(label_17, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(widget3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_12->addWidget(lineEdit_2, 0, 1, 1, 1);

        label_18 = new QLabel(widget3);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_12->addWidget(label_18, 0, 2, 1, 1);

        lineEdit_3 = new QLineEdit(widget3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_12->addWidget(lineEdit_3, 0, 3, 1, 1);


        gridLayout_15->addLayout(gridLayout_12, 0, 0, 1, 1);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        label_19 = new QLabel(widget3);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_13->addWidget(label_19, 0, 0, 1, 1);

        lineEdit_4 = new QLineEdit(widget3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout_13->addWidget(lineEdit_4, 0, 1, 1, 1);

        label_20 = new QLabel(widget3);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_13->addWidget(label_20, 0, 2, 1, 1);

        lineEdit_5 = new QLineEdit(widget3);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout_13->addWidget(lineEdit_5, 0, 3, 1, 1);


        gridLayout_15->addLayout(gridLayout_13, 1, 0, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        label_21 = new QLabel(widget3);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_14->addWidget(label_21, 0, 0, 1, 1);

        lineEdit_6 = new QLineEdit(widget3);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        gridLayout_14->addWidget(lineEdit_6, 0, 1, 1, 1);

        label_22 = new QLabel(widget3);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_14->addWidget(label_22, 0, 2, 1, 1);

        lineEdit_7 = new QLineEdit(widget3);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        gridLayout_14->addWidget(lineEdit_7, 0, 3, 1, 1);


        gridLayout_15->addLayout(gridLayout_14, 2, 0, 1, 1);

        widget4 = new QWidget(centralWidget);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(971, 580, 271, 24));
        gridLayout_16 = new QGridLayout(widget4);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(widget4);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_16->addWidget(label_16, 0, 0, 1, 1);

        lineEdit = new QLineEdit(widget4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_16->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_8 = new QLineEdit(widget4);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        gridLayout_16->addWidget(lineEdit_8, 0, 2, 1, 1);

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

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Reglas", nullptr));
        label_11->setText(QString());
        pushButton_5->setText(QApplication::translate("MainWindow", "Add", nullptr));
        label_13->setText(QString());
        pushButton_7->setText(QApplication::translate("MainWindow", "Add", nullptr));
        label_14->setText(QString());
        pushButton_8->setText(QApplication::translate("MainWindow", "Add", nullptr));
        label_15->setText(QString());
        pushButton_9->setText(QApplication::translate("MainWindow", "Add", nullptr));
        label->setText(QApplication::translate("MainWindow", "Establecer configuraciones", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "-X", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "-Y", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "X", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Y", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "OK", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Fuzzy Functions", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "a", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "b", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "c", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "d", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "IF", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "THEN", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "IF", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "THEN", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "IF", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "THEN", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Datos de Entrada", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
