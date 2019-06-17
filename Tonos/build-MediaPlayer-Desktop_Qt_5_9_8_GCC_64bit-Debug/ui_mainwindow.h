/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *B;
    QProgressBar *progressBar;
    QRadioButton *Colgar;
    QPushButton *num_4;
    QPushButton *num_8;
    QPushButton *num_2;
    QSlider *volumeSlider;
    QPushButton *num_0;
    QPushButton *A;
    QPushButton *D;
    QPushButton *num_7;
    QRadioButton *Descolgar;
    QPushButton *num_3;
    QPushButton *numeral;
    QPushButton *num_9;
    QPushButton *num_6;
    QPushButton *num_5;
    QPushButton *star;
    QPushButton *num_1;
    QPushButton *C;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(470, 293);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 55, 435, 181));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        B = new QPushButton(layoutWidget);
        B->setObjectName(QStringLiteral("B"));

        gridLayout->addWidget(B, 1, 4, 1, 1);

        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximum(50);
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 4, 2, 1, 2);

        Colgar = new QRadioButton(layoutWidget);
        Colgar->setObjectName(QStringLiteral("Colgar"));

        gridLayout->addWidget(Colgar, 4, 1, 1, 1);

        num_4 = new QPushButton(layoutWidget);
        num_4->setObjectName(QStringLiteral("num_4"));

        gridLayout->addWidget(num_4, 1, 1, 1, 1);

        num_8 = new QPushButton(layoutWidget);
        num_8->setObjectName(QStringLiteral("num_8"));

        gridLayout->addWidget(num_8, 2, 2, 1, 1);

        num_2 = new QPushButton(layoutWidget);
        num_2->setObjectName(QStringLiteral("num_2"));

        gridLayout->addWidget(num_2, 0, 2, 1, 1);

        volumeSlider = new QSlider(layoutWidget);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));
        volumeSlider->setMaximum(50);
        volumeSlider->setOrientation(Qt::Vertical);
        volumeSlider->setTickPosition(QSlider::TicksBothSides);

        gridLayout->addWidget(volumeSlider, 0, 0, 4, 1);

        num_0 = new QPushButton(layoutWidget);
        num_0->setObjectName(QStringLiteral("num_0"));

        gridLayout->addWidget(num_0, 3, 2, 1, 1);

        A = new QPushButton(layoutWidget);
        A->setObjectName(QStringLiteral("A"));

        gridLayout->addWidget(A, 0, 4, 1, 1);

        D = new QPushButton(layoutWidget);
        D->setObjectName(QStringLiteral("D"));

        gridLayout->addWidget(D, 3, 4, 1, 1);

        num_7 = new QPushButton(layoutWidget);
        num_7->setObjectName(QStringLiteral("num_7"));

        gridLayout->addWidget(num_7, 2, 1, 1, 1);

        Descolgar = new QRadioButton(layoutWidget);
        Descolgar->setObjectName(QStringLiteral("Descolgar"));

        gridLayout->addWidget(Descolgar, 4, 4, 1, 1);

        num_3 = new QPushButton(layoutWidget);
        num_3->setObjectName(QStringLiteral("num_3"));

        gridLayout->addWidget(num_3, 0, 3, 1, 1);

        numeral = new QPushButton(layoutWidget);
        numeral->setObjectName(QStringLiteral("numeral"));

        gridLayout->addWidget(numeral, 3, 3, 1, 1);

        num_9 = new QPushButton(layoutWidget);
        num_9->setObjectName(QStringLiteral("num_9"));

        gridLayout->addWidget(num_9, 2, 3, 1, 1);

        num_6 = new QPushButton(layoutWidget);
        num_6->setObjectName(QStringLiteral("num_6"));

        gridLayout->addWidget(num_6, 1, 3, 1, 1);

        num_5 = new QPushButton(layoutWidget);
        num_5->setObjectName(QStringLiteral("num_5"));

        gridLayout->addWidget(num_5, 1, 2, 1, 1);

        star = new QPushButton(layoutWidget);
        star->setObjectName(QStringLiteral("star"));

        gridLayout->addWidget(star, 3, 1, 1, 1);

        num_1 = new QPushButton(layoutWidget);
        num_1->setObjectName(QStringLiteral("num_1"));

        gridLayout->addWidget(num_1, 0, 1, 1, 1);

        C = new QPushButton(layoutWidget);
        C->setObjectName(QStringLiteral("C"));

        gridLayout->addWidget(C, 2, 4, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 30, 67, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 470, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(volumeSlider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        B->setText(QApplication::translate("MainWindow", "B", Q_NULLPTR));
        Colgar->setText(QApplication::translate("MainWindow", "Colgar", Q_NULLPTR));
        num_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        num_8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        num_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        num_0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        A->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        D->setText(QApplication::translate("MainWindow", "D", Q_NULLPTR));
        num_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        Descolgar->setText(QApplication::translate("MainWindow", "Descolgar", Q_NULLPTR));
        num_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        numeral->setText(QApplication::translate("MainWindow", "#", Q_NULLPTR));
        num_9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        num_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        num_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        star->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
        num_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        C->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
