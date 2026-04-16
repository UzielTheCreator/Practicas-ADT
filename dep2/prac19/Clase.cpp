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

void Clase::ordenarEnteros(int arr[], int n) {
    for (int i = 0; i < n; i++) direcE[i] = &arr[i];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (*direcE[j] > *direcE[j + 1]) {
                int* aux = direcE[j];
                direcE[j] = direcE[j + 1];
                direcE[j + 1] = aux;
            }
        }
    }
}

void Clase::ordenarCaracteres(char arr[], int n) {
    for (int i = 0; i < n; i++) direcC[i] = &arr[i];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (*direcC[j] > *direcC[j + 1]) {
                char* aux = direcC[j];
                direcC[j] = direcC[j + 1];
                direcC[j + 1] = aux;
            }
        }
    }
}

void Clase::ordenarObjetos(Clase arr[], int n) {
    for (int i = 0; i < n; i++) direcO[i] = &arr[i];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (direcO[j]->valor > direcO[j + 1]->valor) {
                Clase* aux = direcO[j];
                direcO[j] = direcO[j + 1];
                direcO[j + 1] = aux;
            }
        }
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