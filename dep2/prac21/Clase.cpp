#include "Clase.h"
#include <iostream>
using namespace std;

Clase::Clase() {
    valor = 0;
    peso = 0;
}

Clase::Clase(int v, int p) {
    valor = v;
    peso = p;
}

Clase::~Clase() {
}

void Clase::mostrar() {
    cout << "[" << valor << "," << peso << "]";
}

void Clase::inicializarEnteros(int arr[], int n) {
    for (int i = 0; i < n; i++)
        direcE[i] = &arr[i];
}

void Clase::inicializarCaracteres(char arr[], int n) {
    for (int i = 0; i < n; i++)
        direcC[i] = &arr[i];
}

void Clase::inicializarObjetos(Clase arr[], int n) {
    for (int i = 0; i < n; i++)
        direcO[i] = &arr[i];
}

void Clase::QuickSortEnteros(int arr[], int ini, int fin) {
    int izq = ini, der = fin;
    int* pivote = direcE[(ini + fin) / 2];
    int* aux;

    do {
        while (*direcE[izq] < *pivote && izq < fin)
            izq++;

        while (*direcE[der] > *pivote && der > ini)
            der--;

        if (izq <= der) {
            aux = direcE[izq];
            direcE[izq] = direcE[der];
            direcE[der] = aux;
            izq++;
            der--;
        }
    } while (izq <= der);

    if (ini < der)
        QuickSortEnteros(arr, ini, der);
    if (izq < fin)
        QuickSortEnteros(arr, izq, fin);
}

void Clase::QuickSortCaracteres(char arr[], int ini, int fin) {
    int izq = ini, der = fin;
    char* pivote = direcC[(ini + fin) / 2];
    char* aux;

    do {
        while (*direcC[izq] < *pivote && izq < fin)
            izq++;

        while (*direcC[der] > *pivote && der > ini)
            der--;

        if (izq <= der) {
            aux = direcC[izq];
            direcC[izq] = direcC[der];
            direcC[der] = aux;
            izq++;
            der--;
        }
    } while (izq <= der);

    if (ini < der)
        QuickSortCaracteres(arr, ini, der);
    if (izq < fin)
        QuickSortCaracteres(arr, izq, fin);
}

void Clase::QuickSortObjetos(Clase arr[], int ini, int fin) {
    int izq = ini, der = fin;
    Clase* pivote = direcO[(ini + fin) / 2];
    Clase* aux;

    do {
        while (direcO[izq]->valor < pivote->valor && izq < fin)
            izq++;

        while (direcO[der]->valor > pivote->valor && der > ini)
            der--;

        if (izq <= der) {
            aux = direcO[izq];
            direcO[izq] = direcO[der];
            direcO[der] = aux;
            izq++;
            der--;
        }
    } while (izq <= der);

    if (ini < der)
        QuickSortObjetos(arr, ini, der);
    if (izq < fin)
        QuickSortObjetos(arr, izq, fin);
}

void Clase::mostrarEnteros(int arr[], int n, bool indirecto) {
    for (int i = 0; i < n; i++) {
        if (indirecto)
            cout << *direcE[i] << " ";
        else
            cout << arr[i] << " ";
    }
    cout << endl;
}

void Clase::mostrarCaracteres(char arr[], int n, bool indirecto) {
   for (int i = 0; i < n; i++) {
        if (indirecto)
            cout << *direcC[i] << " ";
        else
            cout << arr[i] << " ";
    }
    cout << endl;
}

void Clase::mostrarObjetos(Clase arr[], int n, bool indirecto) {
    for (int i = 0; i < n; i++) {
        if (indirecto)
           direcO[i]->mostrar();
        else
            arr[i].mostrar();
        cout << " ";
    }
    cout << endl;
}