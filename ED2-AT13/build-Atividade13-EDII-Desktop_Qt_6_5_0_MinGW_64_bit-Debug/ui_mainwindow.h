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
    QTableWidget *tableWidget_saida_dados;
    QPushButton *pushButton_inserir;
    QPushButton *pushButton_consultar;
    QPushButton *pushButton_alterar;
    QPushButton *pushButton_remover;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_matricula;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_nomeCompleto;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tableWidget_saida_dados = new QTableWidget(centralwidget);
        if (tableWidget_saida_dados->columnCount() < 2)
            tableWidget_saida_dados->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_saida_dados->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_saida_dados->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_saida_dados->setObjectName("tableWidget_saida_dados");
        tableWidget_saida_dados->setGeometry(QRect(10, 211, 781, 341));
        pushButton_inserir = new QPushButton(centralwidget);
        pushButton_inserir->setObjectName("pushButton_inserir");
        pushButton_inserir->setGeometry(QRect(130, 123, 80, 51));
        pushButton_consultar = new QPushButton(centralwidget);
        pushButton_consultar->setObjectName("pushButton_consultar");
        pushButton_consultar->setGeometry(QRect(10, 123, 80, 51));
        pushButton_alterar = new QPushButton(centralwidget);
        pushButton_alterar->setObjectName("pushButton_alterar");
        pushButton_alterar->setGeometry(QRect(260, 123, 80, 51));
        pushButton_remover = new QPushButton(centralwidget);
        pushButton_remover->setObjectName("pushButton_remover");
        pushButton_remover->setGeometry(QRect(380, 123, 80, 51));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 20, 581, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_matricula = new QLineEdit(widget);
        lineEdit_matricula->setObjectName("lineEdit_matricula");

        horizontalLayout->addWidget(lineEdit_matricula);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(30, 70, 601, 32));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_nomeCompleto = new QLineEdit(widget1);
        lineEdit_nomeCompleto->setObjectName("lineEdit_nomeCompleto");

        horizontalLayout_2->addWidget(lineEdit_nomeCompleto);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 27));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(lineEdit_matricula, lineEdit_nomeCompleto);
        QWidget::setTabOrder(lineEdit_nomeCompleto, pushButton_consultar);
        QWidget::setTabOrder(pushButton_consultar, pushButton_inserir);
        QWidget::setTabOrder(pushButton_inserir, pushButton_alterar);
        QWidget::setTabOrder(pushButton_alterar, pushButton_remover);
        QWidget::setTabOrder(pushButton_remover, tableWidget_saida_dados);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Atividade 13", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_saida_dados->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Matricula", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_saida_dados->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        pushButton_inserir->setText(QCoreApplication::translate("MainWindow", "inserir", nullptr));
        pushButton_consultar->setText(QCoreApplication::translate("MainWindow", "consultar", nullptr));
        pushButton_alterar->setText(QCoreApplication::translate("MainWindow", "alterar", nullptr));
        pushButton_remover->setText(QCoreApplication::translate("MainWindow", "remover", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">n\302\260 matricula</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">nome completo</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
