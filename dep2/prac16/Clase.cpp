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
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int aux= arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
}

void Clase::ordenarCaracteres(char arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                char aux= arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
}

void Clase::ordenarObjetos(Clase arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j].valor > arr[j + 1].valor) {
                Clase aux= arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
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