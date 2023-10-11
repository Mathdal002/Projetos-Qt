/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QPushButton *pushButtonGerar2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEditElemento2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLineEdit *lineEditFinal2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QLineEdit *lineEditOrdenada;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_11;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_9;
    QLineEdit *lineEditOrdenada_2;
    QVBoxLayout *verticalLayout_8;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLineEdit *lineEditTempoExecucao1;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_3;
    QLabel *label_12;
    QLineEdit *lineEditExecucao2;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_4;
    QLabel *label_13;
    QLineEdit *lineEditTempoExecucao2;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLineEdit *lineEditExecucao1;
    QWidget *layoutWidget_6;
    QGridLayout *gridLayout_5;
    QLabel *label_14;
    QLineEdit *lineEditTempoExecucao3;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_15;
    QLineEdit *lineEditOrdenada_3;
    QVBoxLayout *verticalLayout_10;
    QWidget *layoutWidget_8;
    QGridLayout *gridLayout_6;
    QLabel *label_16;
    QLineEdit *lineEditExecucao3;
    QWidget *layoutWidget_9;
    QGridLayout *gridLayout_7;
    QLabel *label_17;
    QLineEdit *lineEditTempoExecucao4;
    QWidget *layoutWidget_11;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_19;
    QLineEdit *lineEditOrdenada_4;
    QVBoxLayout *verticalLayout_12;
    QWidget *layoutWidget_12;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_20;
    QLineEdit *lineEditOrdenada_5;
    QVBoxLayout *verticalLayout_14;
    QWidget *layoutWidget_10;
    QGridLayout *gridLayout_8;
    QLabel *label_18;
    QLineEdit *lineEditTempoExecucao5;
    QWidget *layoutWidget_13;
    QGridLayout *gridLayout_10;
    QLabel *label_23;
    QLineEdit *lineEditTempoExecucao6;
    QWidget *layoutWidget_14;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_24;
    QLineEdit *lineEditOrdenada_7;
    QVBoxLayout *verticalLayout_18;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(964, 733);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 30, 381, 61));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        label_3->setFont(font);
        pushButtonGerar2 = new QPushButton(centralwidget);
        pushButtonGerar2->setObjectName("pushButtonGerar2");
        pushButtonGerar2->setGeometry(QRect(450, 90, 131, 24));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 90, 391, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        lineEditElemento2 = new QLineEdit(layoutWidget);
        lineEditElemento2->setObjectName("lineEditElemento2");

        horizontalLayout->addWidget(lineEditElemento2);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(50, 130, 531, 61));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        lineEditFinal2 = new QLineEdit(layoutWidget1);
        lineEditFinal2->setObjectName("lineEditFinal2");

        verticalLayout->addWidget(lineEditFinal2);


        verticalLayout_4->addLayout(verticalLayout);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(50, 200, 531, 66));
        verticalLayout_6 = new QVBoxLayout(layoutWidget2);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName("label_7");

        verticalLayout_6->addWidget(label_7);

        lineEditOrdenada = new QLineEdit(layoutWidget2);
        lineEditOrdenada->setObjectName("lineEditOrdenada");

        verticalLayout_6->addWidget(lineEditOrdenada);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");

        verticalLayout_6->addLayout(verticalLayout_5);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(610, 20, 311, 31));
        label_11->setIndent(-1);
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(50, 280, 531, 66));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName("label_9");

        verticalLayout_7->addWidget(label_9);

        lineEditOrdenada_2 = new QLineEdit(layoutWidget_2);
        lineEditOrdenada_2->setObjectName("lineEditOrdenada_2");

        verticalLayout_7->addWidget(lineEditOrdenada_2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");

        verticalLayout_7->addLayout(verticalLayout_8);

        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(760, 200, 135, 57));
        gridLayout_2 = new QGridLayout(layoutWidget_3);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_3);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        lineEditTempoExecucao1 = new QLineEdit(layoutWidget_3);
        lineEditTempoExecucao1->setObjectName("lineEditTempoExecucao1");

        gridLayout_2->addWidget(lineEditTempoExecucao1, 1, 0, 1, 1);

        layoutWidget_4 = new QWidget(centralwidget);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(600, 280, 149, 57));
        gridLayout_3 = new QGridLayout(layoutWidget_4);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_4);
        label_12->setObjectName("label_12");

        gridLayout_3->addWidget(label_12, 0, 0, 1, 1);

        lineEditExecucao2 = new QLineEdit(layoutWidget_4);
        lineEditExecucao2->setObjectName("lineEditExecucao2");

        gridLayout_3->addWidget(lineEditExecucao2, 1, 0, 1, 1);

        layoutWidget_5 = new QWidget(centralwidget);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(760, 280, 135, 57));
        gridLayout_4 = new QGridLayout(layoutWidget_5);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_5);
        label_13->setObjectName("label_13");

        gridLayout_4->addWidget(label_13, 0, 0, 1, 1);

        lineEditTempoExecucao2 = new QLineEdit(layoutWidget_5);
        lineEditTempoExecucao2->setObjectName("lineEditTempoExecucao2");

        gridLayout_4->addWidget(lineEditTempoExecucao2, 1, 0, 1, 1);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(600, 200, 149, 57));
        gridLayout = new QGridLayout(layoutWidget3);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        lineEditExecucao1 = new QLineEdit(layoutWidget3);
        lineEditExecucao1->setObjectName("lineEditExecucao1");

        gridLayout->addWidget(lineEditExecucao1, 1, 0, 1, 1);

        layoutWidget_6 = new QWidget(centralwidget);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(760, 370, 135, 57));
        gridLayout_5 = new QGridLayout(layoutWidget_6);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_6);
        label_14->setObjectName("label_14");

        gridLayout_5->addWidget(label_14, 0, 0, 1, 1);

        lineEditTempoExecucao3 = new QLineEdit(layoutWidget_6);
        lineEditTempoExecucao3->setObjectName("lineEditTempoExecucao3");

        gridLayout_5->addWidget(lineEditTempoExecucao3, 1, 0, 1, 1);

        layoutWidget_7 = new QWidget(centralwidget);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(50, 360, 531, 66));
        verticalLayout_9 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget_7);
        label_15->setObjectName("label_15");

        verticalLayout_9->addWidget(label_15);

        lineEditOrdenada_3 = new QLineEdit(layoutWidget_7);
        lineEditOrdenada_3->setObjectName("lineEditOrdenada_3");

        verticalLayout_9->addWidget(lineEditOrdenada_3);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");

        verticalLayout_9->addLayout(verticalLayout_10);

        layoutWidget_8 = new QWidget(centralwidget);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(600, 370, 149, 57));
        gridLayout_6 = new QGridLayout(layoutWidget_8);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_8);
        label_16->setObjectName("label_16");

        gridLayout_6->addWidget(label_16, 0, 0, 1, 1);

        lineEditExecucao3 = new QLineEdit(layoutWidget_8);
        lineEditExecucao3->setObjectName("lineEditExecucao3");

        gridLayout_6->addWidget(lineEditExecucao3, 1, 0, 1, 1);

        layoutWidget_9 = new QWidget(centralwidget);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(610, 450, 271, 57));
        gridLayout_7 = new QGridLayout(layoutWidget_9);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget_9);
        label_17->setObjectName("label_17");

        gridLayout_7->addWidget(label_17, 0, 0, 1, 1);

        lineEditTempoExecucao4 = new QLineEdit(layoutWidget_9);
        lineEditTempoExecucao4->setObjectName("lineEditTempoExecucao4");

        gridLayout_7->addWidget(lineEditTempoExecucao4, 1, 0, 1, 1);

        layoutWidget_11 = new QWidget(centralwidget);
        layoutWidget_11->setObjectName("layoutWidget_11");
        layoutWidget_11->setGeometry(QRect(50, 440, 531, 66));
        verticalLayout_11 = new QVBoxLayout(layoutWidget_11);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget_11);
        label_19->setObjectName("label_19");

        verticalLayout_11->addWidget(label_19);

        lineEditOrdenada_4 = new QLineEdit(layoutWidget_11);
        lineEditOrdenada_4->setObjectName("lineEditOrdenada_4");

        verticalLayout_11->addWidget(lineEditOrdenada_4);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");

        verticalLayout_11->addLayout(verticalLayout_12);

        layoutWidget_12 = new QWidget(centralwidget);
        layoutWidget_12->setObjectName("layoutWidget_12");
        layoutWidget_12->setGeometry(QRect(50, 520, 531, 66));
        verticalLayout_13 = new QVBoxLayout(layoutWidget_12);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget_12);
        label_20->setObjectName("label_20");

        verticalLayout_13->addWidget(label_20);

        lineEditOrdenada_5 = new QLineEdit(layoutWidget_12);
        lineEditOrdenada_5->setObjectName("lineEditOrdenada_5");

        verticalLayout_13->addWidget(lineEditOrdenada_5);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");

        verticalLayout_13->addLayout(verticalLayout_14);

        layoutWidget_10 = new QWidget(centralwidget);
        layoutWidget_10->setObjectName("layoutWidget_10");
        layoutWidget_10->setGeometry(QRect(610, 520, 271, 57));
        gridLayout_8 = new QGridLayout(layoutWidget_10);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget_10);
        label_18->setObjectName("label_18");

        gridLayout_8->addWidget(label_18, 0, 0, 1, 1);

        lineEditTempoExecucao5 = new QLineEdit(layoutWidget_10);
        lineEditTempoExecucao5->setObjectName("lineEditTempoExecucao5");

        gridLayout_8->addWidget(lineEditTempoExecucao5, 1, 0, 1, 1);

        layoutWidget_13 = new QWidget(centralwidget);
        layoutWidget_13->setObjectName("layoutWidget_13");
        layoutWidget_13->setGeometry(QRect(610, 610, 271, 57));
        gridLayout_10 = new QGridLayout(layoutWidget_13);
        gridLayout_10->setObjectName("gridLayout_10");
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget_13);
        label_23->setObjectName("label_23");

        gridLayout_10->addWidget(label_23, 0, 0, 1, 1);

        lineEditTempoExecucao6 = new QLineEdit(layoutWidget_13);
        lineEditTempoExecucao6->setObjectName("lineEditTempoExecucao6");

        gridLayout_10->addWidget(lineEditTempoExecucao6, 1, 0, 1, 1);

        layoutWidget_14 = new QWidget(centralwidget);
        layoutWidget_14->setObjectName("layoutWidget_14");
        layoutWidget_14->setGeometry(QRect(50, 600, 531, 66));
        verticalLayout_17 = new QVBoxLayout(layoutWidget_14);
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(layoutWidget_14);
        label_24->setObjectName("label_24");

        verticalLayout_17->addWidget(label_24);

        lineEditOrdenada_7 = new QLineEdit(layoutWidget_14);
        lineEditOrdenada_7->setObjectName("lineEditOrdenada_7");

        verticalLayout_17->addWidget(lineEditOrdenada_7);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName("verticalLayout_18");

        verticalLayout_17->addLayout(verticalLayout_18);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 964, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Estrutura de Dados II - Atividade 9,10 e 11</span></p></body></html>", nullptr));
        pushButtonGerar2->setText(QCoreApplication::translate("MainWindow", "GERAR", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">Quantidade de Elementos</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">Dados gerados aleatoriamente incluidos no vetor</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Dados do vetor ordenado selectionSort</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; font-style:italic;\">Matheus Duarte Albuquerque</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Dados do vetor ordenado insertSort</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Tempo de Execu\303\247\303\243o", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "N\303\272mero de execu\303\247\303\265es", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Tempo de Execu\303\247\303\243o", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "N\303\272mero de execu\303\247\303\265es", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Tempo de Execu\303\247\303\243o", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Dados do vetor ordenado MergeSort</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "N\303\272mero de execu\303\247\303\265es", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Tempo de Execu\303\247\303\243o", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Dados do vetor ordenado bubbleSort</span></p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Dados do vetor ordenado HeapSort</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Tempo de Execu\303\247\303\243o", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Tempo de Execu\303\247\303\243o", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Dados do vetor ordenado QuickSort</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
