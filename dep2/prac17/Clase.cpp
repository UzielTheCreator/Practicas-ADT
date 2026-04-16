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

void Clase::setDatos(int v, int p) {
    valor = v;
    peso = p;
}

void Clase::mostrar() {
    cout << "[" << valor << "," << peso << "]";
}

void Clase::mergeEnteros(int arr[], int ini, int mid, int fin) {
    int tam1 = mid - ini + 1;
    int tam2 = fin - mid;

    int* L = new int[tam1];
    int* R = new int[tam2];

    for (int i = 0; i < tam1; i++)
        L[i] = arr[ini + i];

    for (int j = 0; j < tam2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = ini;

    while (i < tam1 && j < tam2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < tam1)
        arr[k++] = L[i++];

    while (j < tam2)
        arr[k++] = R[j++];

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

void Clase::mergeCaracteres(char arr[], int ini, int mid, int fin) {
    int tam1 = mid - ini + 1;
    int tam2 = fin - mid;

    char* L = new char[tam1];
    char* R = new char[tam2];

    for (int i = 0; i < tam1; i++)
        L[i] = arr[ini + i];

    for (int j = 0; j < tam2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = ini;

    while (i < tam1 && j < tam2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < tam1)
        arr[k++] = L[i++];

    while (j < tam2)
        arr[k++] = R[j++];

    delete[] L;
    delete[] R;
}

void Clase::mergeSortCaracteres(char arr[], int ini, int fin) {
    if (ini < fin) {
        int mid = (ini + fin) / 2;
        mergeSortCaracteres(arr, ini, mid);
        mergeSortCaracteres(arr, mid + 1, fin);
        mergeCaracteres(arr, ini, mid, fin);
    }
}

void Clase::mergeObjetos(Clase arr[], int ini, int mid, int fin) {
     int tam1 = mid - ini + 1;
    int tam2 = fin - mid;

    Clase* L = new Clase[tam1];
    Clase* R = new Clase[tam2];

    for (int i = 0; i < tam1; i++)
        L[i] = arr[ini + i];

    for (int j = 0; j < tam2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = ini;

    while (i < tam1 && j < tam2) {
        if (L[i].valor <= R[j].valor)
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < tam1)
        arr[k++] = L[i++];

    while (j < tam2)
        arr[k++] = R[j++];

    delete[] L;
    delete[] R;

}

void Clase::mergeSortObjetos(Clase arr[], int ini, int fin) {
    if (ini < fin) {
        int mid = (ini + fin) / 2;
        mergeSortObjetos(arr, ini, mid);
        mergeSortObjetos(arr, mid + 1, fin);
        mergeObjetos(arr, ini, mid, fin);
    }
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