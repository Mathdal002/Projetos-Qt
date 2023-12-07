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
#include <QtWidgets/QHBoxLayout>
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
    QTableWidget *tableWidget;
    QPushButton *pushButton_criar;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_incluir;
    QPushButton *pushButton_alterar;
    QPushButton *pushButton_excluir;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_peso;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_vertice1;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_vertice2;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *lineEdit_vertices;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 291, 41));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 240, 781, 311));
        pushButton_criar = new QPushButton(centralwidget);
        pushButton_criar->setObjectName("pushButton_criar");
        pushButton_criar->setGeometry(QRect(440, 80, 80, 41));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(270, 180, 256, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_incluir = new QPushButton(widget);
        pushButton_incluir->setObjectName("pushButton_incluir");

        horizontalLayout->addWidget(pushButton_incluir);

        pushButton_alterar = new QPushButton(widget);
        pushButton_alterar->setObjectName("pushButton_alterar");

        horizontalLayout->addWidget(pushButton_alterar);

        pushButton_excluir = new QPushButton(widget);
        pushButton_excluir->setObjectName("pushButton_excluir");

        horizontalLayout->addWidget(pushButton_excluir);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 180, 201, 38));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lineEdit_peso = new QLineEdit(widget1);
        lineEdit_peso->setObjectName("lineEdit_peso");

        horizontalLayout_2->addWidget(lineEdit_peso);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(10, 130, 253, 38));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget2);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        lineEdit_vertice1 = new QLineEdit(widget2);
        lineEdit_vertice1->setObjectName("lineEdit_vertice1");

        horizontalLayout_3->addWidget(lineEdit_vertice1);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(280, 130, 253, 38));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget3);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        lineEdit_vertice2 = new QLineEdit(widget3);
        lineEdit_vertice2->setObjectName("lineEdit_vertice2");

        horizontalLayout_4->addWidget(lineEdit_vertice2);

        widget4 = new QWidget(centralwidget);
        widget4->setObjectName("widget4");
        widget4->setGeometry(QRect(10, 80, 400, 38));
        horizontalLayout_5 = new QHBoxLayout(widget4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget4);
        label_2->setObjectName("label_2");

        horizontalLayout_5->addWidget(label_2);

        lineEdit_vertices = new QLineEdit(widget4);
        lineEdit_vertices->setObjectName("lineEdit_vertices");

        horizontalLayout_5->addWidget(lineEdit_vertices);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Atividade 14", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">ATiVIDADE GRAFO 14</span></p></body></html>", nullptr));
        pushButton_criar->setText(QCoreApplication::translate("MainWindow", "Criar", nullptr));
        pushButton_incluir->setText(QCoreApplication::translate("MainWindow", "Incluir", nullptr));
        pushButton_alterar->setText(QCoreApplication::translate("MainWindow", "Alterar", nullptr));
        pushButton_excluir->setText(QCoreApplication::translate("MainWindow", "Excluir", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">Peso:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:704;\">vertice 1:</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:704;\">vertice 2:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">N\302\272 de vertices:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
