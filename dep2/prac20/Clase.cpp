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

void Clase::mergeEnteros(int arr[], int ini, int mid, int fin) {

    int tam1 = mid - ini + 1;
    int tam2 = fin - mid;

    int** L = new int*[tam1];
    int** R = new int*[tam2];

    for (int i = 0; i < tam1; i++)
        L[i] = direcE[ini + i];

    for (int j = 0; j < tam2; j++)
        R[j] = direcE[mid + 1 + j];

    int i = 0, j = 0, k = ini;

    while (i < tam1 && j < tam2) {
        if (*L[i] <= *R[j])
            direcE[k++] = L[i++];
        else
            direcE[k++] = R[j++];
    }

    while (i < tam1)
        direcE[k++] = L[i++];

    while (j < tam2)
        direcE[k++] = R[j++];

    delete[] L;
    delete[] R;
}

void Clase::mergeCaracteres(char arr[], int ini, int mid, int fin) {
    int tam1 = mid - ini + 1;
    int tam2 = fin - mid;

    char** L = new char*[tam1];
    char** R = new char*[tam2];

    for (int i = 0; i < tam1; i++)
        L[i] = direcC[ini + i];

    for (int j = 0; j < tam2; j++)
        R[j] = direcC[mid + 1 + j];

    int i = 0, j = 0, k = ini;

    while (i < tam1 && j < tam2) {
        if (*L[i] <= *R[j])
            direcC[k++] = L[i++];
        else
            direcC[k++] = R[j++];
    }

    while (i < tam1)
        direcC[k++] = L[i++];

    while (j < tam2)
        direcC[k++] = R[j++];

    delete[] L;
    delete[] R;
}

void Clase::mergeObjetos(Clase arr[], int ini, int mid, int fin) {
     int tam1 = mid - ini + 1;
    int tam2 = fin - mid;

    Clase** L = new Clase*[tam1];
    Clase** R = new Clase*[tam2];

    for (int i = 0; i < tam1; i++)
        L[i] = direcO[ini + i];

    for (int j = 0; j < tam2; j++)
        R[j] = direcO[mid + 1 + j];

    int i = 0, j = 0, k = ini;

    while (i < tam1 && j < tam2) {
        if (L[i]->valor <= R[j]->valor)
            direcO[k++] = L[i++];
        else
            direcO[k++] = R[j++];
    }

    while (i < tam1)
        direcO[k++] = L[i++];

    while (j < tam2)
        direcO[k++] = R[j++];

    delete[] L;
    delete[] R;

}

void Clase::mergeSortEnteros(int arr[], int ini, int fin) {
    if (ini < fin) {
        int mid = ini + (fin - ini) / 2;
        mergeSortEnteros(arr, ini, mid);
        mergeSortEnteros(arr, mid + 1, fin);
        mergeEnteros(arr, ini, mid, fin);
    }
}

void Clase::mergeSortCaracteres(char arr[], int ini, int fin) {
    if (ini < fin) {
        int mid = (ini + fin) / 2;
        mergeSortCaracteres(arr, ini, mid);
        mergeSortCaracteres(arr, mid + 1, fin);
        mergeCaracteres(arr, ini, mid, fin);
    }
}

void Clase::mergeSortObjetos(Clase arr[], int ini, int fin) {
    if (ini < fin) {
        int mid = (ini + fin) / 2;
        mergeSortObjetos(arr, ini, mid);
        mergeSortObjetos(arr, mid + 1, fin);
        mergeObjetos(arr, ini, mid, fin);
    }
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