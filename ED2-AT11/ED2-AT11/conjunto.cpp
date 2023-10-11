#include "conjunto.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

int Conjunto::getExecucao() const
{
    return execucao;
}

int *Conjunto::getConjuntoSS() const
{
    return conjuntoSS;
}

void Conjunto::setConjuntoSS(int *newConjuntoSS)
{
    conjuntoSS = newConjuntoSS;
}

int *Conjunto::getConjuntoIS() const
{
    return conjuntoIS;
}

void Conjunto::setConjuntoIS(int *newConjuntoIS)
{
    conjuntoIS = newConjuntoIS;
}

int Conjunto::getExecucao2() const
{
    return execucao2;
}

int *Conjunto::getConjuntoBS() const
{
    return conjuntoBS;
}

void Conjunto::setConjuntoBS(int *newConjuntoBS)
{
    conjuntoBS = newConjuntoBS;
}

int Conjunto::getExecucao3() const
{
    return execucao3;
}

int *Conjunto::getConjuntoMS() const
{
    return conjuntoMS;
}

void Conjunto::setConjuntoMS(int *newConjuntoMS)
{
    conjuntoMS = newConjuntoMS;
}

int *Conjunto::getConjuntoHS() const
{
    return conjuntoHS;
}

void Conjunto::setConjuntoHS(int *newConjuntoHS)
{
    conjuntoHS = newConjuntoHS;
}

int *Conjunto::getConjuntoQS() const
{
    return conjuntoQS;
}

void Conjunto::setConjuntoQS(int *newConjuntoQS)
{
    conjuntoQS = newConjuntoQS;
}

Conjunto::Conjunto() :
Qelemento(0), conjunto(nullptr),conjuntoSS(nullptr)
{
}

int* Conjunto::Conjuntox(int tamanho) {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    conjunto = new int[tamanho]; // Store the array in the class member

    for (int i = 0; i < tamanho; ++i) {
        conjunto[i] = std::rand() % 1001;
    }

    Qelemento = tamanho;

    return conjunto;
}

QString Conjunto::formatar(int* conjunto) {
    QString resultado;

    for (int i = 0; i < Qelemento; ++i) {
        resultado += QString::number(conjunto[i]);
        if (i < Qelemento - 1) {
            resultado += " | ";
        }
    }

    return resultado;
}


void Conjunto::selectionSort(){
    execucao = 0;
    conjuntoSS = new int[Qelemento];
    for (int i = 0; i < Qelemento; i++) {
        conjuntoSS[i] = conjunto[i];

    }

    for (int i = 0; i < Qelemento - 1; i++) {
        int min_idx = i;
        for (int step = i + 1; step < Qelemento; step++) {
            execucao++;
            if (conjuntoSS[step] < conjuntoSS[min_idx]) {
                min_idx = step;
            }
        }
        int temp = conjuntoSS[i];
        conjuntoSS[i] = conjuntoSS[min_idx];
        conjuntoSS[min_idx] = temp;
    }
}

void Conjunto::insertSort(){
    execucao2 = 0;
    conjuntoIS = new int[Qelemento];
    for (int i = 0; i < Qelemento; i++) {
        conjuntoIS[i] = conjunto[i];

    }
    for (int step = 1; step < Qelemento;step++){
        //execucao2 ++;
        int key = conjuntoIS[step];
        int j = step - 1;
        while(key < conjuntoIS[j] && j >= 0){
            execucao2 ++;
            conjuntoIS[j+1] = conjuntoIS[j];
            --j;
        }
        conjuntoIS[j + 1] = key;
    }
}
void Conjunto::bubbleSort() {
    execucao3 = 0;
    conjuntoBS = new int[Qelemento];
    for (int i = 0; i < Qelemento; i++) {
        conjuntoBS[i] = conjunto[i];
    }

    for (int i = 0; i < Qelemento - 1; i++) {
        for (int j = 0; j < Qelemento - i - 1; j++) {
            execucao3++;
            if (conjuntoBS[j] > conjuntoBS[j + 1]) {
                //execucao3++;
                // Troca os elementos se estiverem fora de ordem
                int temp = conjuntoBS[j];
                conjuntoBS[j] = conjuntoBS[j + 1];
                conjuntoBS[j + 1] = temp;
            }
        }
    }
}

void Conjunto::merge(int arr[], int l, int m, int r) {


    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = conjuntoMS[l + i];
    }
    for (int j = 0; j < n2; j++) {
        M[j] = conjuntoMS[m + 1 + j];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            conjuntoMS[k] = L[i];
            i++;
        } else {
            conjuntoMS[k] = M[j];
            j++;
        }
        k++;
        // Contagem de operações de comparação ou troca, se necessário.
    }

    while (i < n1) {
        conjuntoMS[k] = L[i];
        i++;
        k++;
        // Contagem de operações de comparação ou troca, se necessário.
    }

    while (j < n2) {
        conjuntoMS[k] = M[j];
        j++;
        k++;
        // Contagem de operações de comparação ou troca, se necessário.
    }
}
void Conjunto::mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r); // Chama a função de mesclagem
    }
}

void Conjunto::mergeSortHelp(){
    conjuntoMS = new int[Qelemento];
    for (int i = 0; i < Qelemento; i++) {
        conjuntoMS[i] = conjunto[i];
    }
     mergeSort(conjuntoMS, 0, Qelemento - 1);
}

// Parte do HeapSort
void Conjunto::heapSort() {
    conjuntoHS = new int[Qelemento];
    for (int i = 0; i < Qelemento; i++) {
        conjuntoHS[i] = conjunto[i];
    }

    // Construir heap (reorganizar array)
    for (int i = Qelemento / 2 - 1; i >= 0; i--) {
        heapify(conjuntoHS, Qelemento, i);
    }

    // Extrai elementos um por um do heap
    for (int i = Qelemento - 1; i > 0; i--) {
        swap(conjuntoHS[0], conjuntoHS[i]);
        heapify(conjuntoHS, i, 0); // Chama heapify somente uma vez na subárvore restante
    }
}
void Conjunto::heapify(int arr[], int n, int i) {
    //execucao4 = 0;
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
       // execucao4++; // Contagem de operações de comparação ou troca, se necessário.
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest); // Chama recursivamente heapify na subárvore afetada
    }
}
void Conjunto::swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Parte do quickSort
void Conjunto::quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int Conjunto::partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return (i + 1);
}
void Conjunto::quickSortHelp() {
    conjuntoQS = new int[Qelemento];
    for (int i = 0; i < Qelemento; i++) {
        conjuntoQS[i] = conjunto[i];
    }
     quickSort(conjuntoQS, 0, Qelemento - 1);
        }


