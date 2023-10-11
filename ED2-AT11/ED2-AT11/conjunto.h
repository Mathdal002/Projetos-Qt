#ifndef CONJUNTO_H
#define CONJUNTO_H
#include "QString"

class Conjunto
{
private:
    int Qelemento;
    int *conjunto;
    int *conjuntoSS;
    int *conjuntoMS;
    int execucao;
    int execucao2;
    int execucao3;
    int *conjuntoIS;
    int *conjuntoBS;
    int *conjuntoHS;
    int *conjuntoQS;
public:
    Conjunto();
    int* Conjuntox(int Qelemento);
    QString formatar(int* Qconjunto);
    void selectionSort();
    void insertSort();
    void bubbleSort();
    int getExecucao() const;
    int *getConjuntoSS() const;
    void setConjuntoSS(int *newConjuntoSS);
    int *getConjuntoIS() const;
    void setConjuntoIS(int *newConjuntoIS);
    int getExecucao2() const;
    int *getConjuntoBS() const;
    void setConjuntoBS(int *newConjuntoBS);
    int getExecucao3() const;
    void mergeSort();
    void merge(int arr[], int l, int m, int r);
    void mergeSortHelp();
    int *getConjuntoMS() const;
    void setConjuntoMS(int *newConjuntoMS);
    void heapSort();
    void heapify(int arr[], int n, int i);
    void swap(int &a, int &b);
    int *getConjuntoHS() const;
    void setConjuntoHS(int *newConjuntoHS);
    void mergeSort(int arr[], int l, int r);
    void quickSort(int arr[], int low, int high);
    int partition(int arr[], int low, int high);
    int *getConjuntoQS() const;
    void setConjuntoQS(int *newConjuntoQS);
    void quickSortHelp();
};

#endif // CONJUNTO_H

