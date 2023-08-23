#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "conjunto.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonGerar2_clicked();

    void on_pushButtonBuscar_clicked();

private:
    Ui::MainWindow *ui;
    Conjunto listar;
};
#endif // MAINWINDOW_H
