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

void Clase::QuickSortEnteros(int arr[], int ini, int fin) {
    int izq, der, pivote, aux;
    izq = ini;
    der = fin;
    pivote = arr[(izq + der) / 2];

    do{
        while (arr[izq] < pivote && izq < fin)
            izq++;
        
        while (arr[der] > pivote && der > ini)
            der--;
        
        if (izq <= der){
            aux = arr[izq];
            arr[izq] = arr[der];
            arr[der] = aux;
            izq++;
            der--;
        }
    } while (izq <= der);

    if (ini <= der)
        QuickSortEnteros(arr, ini, der);
    if (fin > izq)
        QuickSortEnteros(arr, izq, fin);

}

void Clase::QuickSortCaracteres(char arr[], int ini, int fin) {
    int izq, der;
    char pivote, aux;
    izq = ini;
    der = fin;
    pivote = arr[(izq + der) / 2];

    do{
        while (arr[izq] < pivote && izq < fin)
            izq++;
        
        while (arr[der] > pivote && der > ini)
            der--;
        
        if (izq <= der){
            aux = arr[izq];
            arr[izq] = arr[der];
            arr[der] = aux;
            izq++;
            der--;
        }
    } while (izq <= der);

    if (ini <= der)
        QuickSortCaracteres(arr, ini, der);
    if (fin > izq)
        QuickSortCaracteres(arr, izq, fin);

}
void Clase::QuickSortObjetos(Clase arr[], int ini, int fin) {
    int izq = ini, der = fin;
    Clase pivote = arr[(ini + fin) / 2];
    Clase aux;

    do {
        while (arr[izq].valor < pivote.valor && izq < fin)
            izq++;

        while (arr[der].valor > pivote.valor && der > ini)
            der--;

        if (izq <= der) {
            aux = arr[izq];
            arr[izq] = arr[der];
            arr[der] = aux;
            izq++;
            der--;
        }
    } while (izq <= der);

    if (ini < der)
        QuickSortObjetos(arr, ini, der);
    if (izq < fin)
        QuickSortObjetos(arr, izq, fin);
}

void Clase::mostrarEnteros(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

void Clase::mostrarCaracteres(char arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

void Clase::mostrarObjetos(Clase arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i].mostrar();
        cout << " ";
    }
    cout << endl;
}