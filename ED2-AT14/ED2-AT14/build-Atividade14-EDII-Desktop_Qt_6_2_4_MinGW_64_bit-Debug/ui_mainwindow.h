/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_vertices;
    QPushButton *pushButton_criar;
    QLabel *label_3;
    QLineEdit *lineEdit_peso;
    QLineEdit *lineEdit_vertice1;
    QLabel *label_4;
    QLineEdit *lineEdit_vertice2;
    QLabel *label_5;
    QPushButton *pushButton_incluir;
    QPushButton *pushButton_alterar;
    QPushButton *pushButton_excluir;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 0, 61, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 211, 21));
        lineEdit_vertices = new QLineEdit(centralwidget);
        lineEdit_vertices->setObjectName(QString::fromUtf8("lineEdit_vertices"));
        lineEdit_vertices->setGeometry(QRect(220, 30, 81, 22));
        pushButton_criar = new QPushButton(centralwidget);
        pushButton_criar->setObjectName(QString::fromUtf8("pushButton_criar"));
        pushButton_criar->setGeometry(QRect(310, 30, 71, 23));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 130, 61, 21));
        lineEdit_peso = new QLineEdit(centralwidget);
        lineEdit_peso->setObjectName(QString::fromUtf8("lineEdit_peso"));
        lineEdit_peso->setGeometry(QRect(70, 130, 81, 22));
        lineEdit_vertice1 = new QLineEdit(centralwidget);
        lineEdit_vertice1->setObjectName(QString::fromUtf8("lineEdit_vertice1"));
        lineEdit_vertice1->setGeometry(QRect(110, 70, 81, 22));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 70, 101, 21));
        lineEdit_vertice2 = new QLineEdit(centralwidget);
        lineEdit_vertice2->setObjectName(QString::fromUtf8("lineEdit_vertice2"));
        lineEdit_vertice2->setGeometry(QRect(300, 70, 81, 22));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(200, 70, 101, 21));
        pushButton_incluir = new QPushButton(centralwidget);
        pushButton_incluir->setObjectName(QString::fromUtf8("pushButton_incluir"));
        pushButton_incluir->setGeometry(QRect(180, 130, 71, 23));
        pushButton_alterar = new QPushButton(centralwidget);
        pushButton_alterar->setObjectName(QString::fromUtf8("pushButton_alterar"));
        pushButton_alterar->setGeometry(QRect(260, 130, 71, 23));
        pushButton_excluir = new QPushButton(centralwidget);
        pushButton_excluir->setObjectName(QString::fromUtf8("pushButton_excluir"));
        pushButton_excluir->setGeometry(QRect(340, 130, 71, 23));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 170, 781, 381));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Atividade 14", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Grafos</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">N\303\272mero de vertices:</span></p></body></html>", nullptr));
        pushButton_criar->setText(QCoreApplication::translate("MainWindow", "Criar", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">Peso:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:704;\">vertice 1:</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:704;\">vertice 2:</span></p></body></html>", nullptr));
        pushButton_incluir->setText(QCoreApplication::translate("MainWindow", "Incluir", nullptr));
        pushButton_alterar->setText(QCoreApplication::translate("MainWindow", "Alterar", nullptr));
        pushButton_excluir->setText(QCoreApplication::translate("MainWindow", "Excluir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
