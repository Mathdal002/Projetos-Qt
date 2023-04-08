/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditNomeDoArquivo;
    QPushButton *pushButtonBuscar;
    QTableWidget *tableWidgetDados;
    QPushButton *pushButtonMostrarResultado;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(892, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 20, 521, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 70, 71, 16));
        lineEditNomeDoArquivo = new QLineEdit(centralwidget);
        lineEditNomeDoArquivo->setObjectName("lineEditNomeDoArquivo");
        lineEditNomeDoArquivo->setGeometry(QRect(130, 70, 591, 22));
        pushButtonBuscar = new QPushButton(centralwidget);
        pushButtonBuscar->setObjectName("pushButtonBuscar");
        pushButtonBuscar->setGeometry(QRect(730, 70, 80, 23));
        tableWidgetDados = new QTableWidget(centralwidget);
        if (tableWidgetDados->columnCount() < 4)
            tableWidgetDados->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetDados->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetDados->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidgetDados->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetDados->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidgetDados->rowCount() < 11)
            tableWidgetDados->setRowCount(11);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetDados->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetDados->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetDados->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetDados->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetDados->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetDados->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetDados->setVerticalHeaderItem(6, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetDados->setVerticalHeaderItem(7, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetDados->setVerticalHeaderItem(8, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetDados->setVerticalHeaderItem(9, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetDados->setVerticalHeaderItem(10, __qtablewidgetitem14);
        tableWidgetDados->setObjectName("tableWidgetDados");
        tableWidgetDados->setEnabled(true);
        tableWidgetDados->setGeometry(QRect(50, 170, 611, 371));
        tableWidgetDados->setMouseTracking(false);
        tableWidgetDados->setAutoFillBackground(false);
        tableWidgetDados->setShowGrid(false);
        tableWidgetDados->setWordWrap(true);
        tableWidgetDados->setCornerButtonEnabled(true);
        tableWidgetDados->setRowCount(11);
        tableWidgetDados->horizontalHeader()->setVisible(true);
        tableWidgetDados->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidgetDados->horizontalHeader()->setDefaultSectionSize(150);
        tableWidgetDados->horizontalHeader()->setHighlightSections(true);
        tableWidgetDados->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidgetDados->verticalHeader()->setVisible(false);
        pushButtonMostrarResultado = new QPushButton(centralwidget);
        pushButtonMostrarResultado->setObjectName("pushButtonMostrarResultado");
        pushButtonMostrarResultado->setGeometry(QRect(230, 110, 171, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 892, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; font-style:italic;\">SISTEMA DE CLASSIFICA\303\207\303\203O DA F\303\223RMULA 1</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>ARQUIVO</p></body></html>", nullptr));
        pushButtonBuscar->setText(QCoreApplication::translate("MainWindow", "BUSCAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetDados->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "CODIGO", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetDados->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "NOME", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetDados->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "PONTUA\303\207\303\203O FINAL", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetDados->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "COLOCA\303\207\303\203O", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetDados->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetDados->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetDados->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetDados->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetDados->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetDados->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetDados->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetDados->verticalHeaderItem(7);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetDados->verticalHeaderItem(8);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetDados->verticalHeaderItem(9);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetDados->verticalHeaderItem(10);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
#if QT_CONFIG(tooltip)
        tableWidgetDados->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tableWidgetDados->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(accessibility)
        tableWidgetDados->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        pushButtonMostrarResultado->setText(QCoreApplication::translate("MainWindow", "Resultado Final", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
