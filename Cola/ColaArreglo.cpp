#include "ColaArreglo.h"
#include <iostream>
using namespace std;

ColaArreglo::ColaArreglo(int cap) : BaseArreglo(cap) {}

// ----------- interfaz -----------

void ColaArreglo::insertar(int x) {
    enqueue(x);
}

void ColaArreglo::eliminar() {
    dequeue();
}

// ----------- logica d cola -----------

void ColaArreglo::enqueue(int x) {
    if (!estaLlena()) {
        datos[tamano++] = x;
    } else {
        cout << "Cola llena\n";
    }
}

void ColaArreglo::dequeue() {
    if (!estaVacia()) {
        for (int i = 0; i < tamano - 1; i++) {
            datos[i] = datos[i + 1];
        }
        tamano--;
    } else {
        cout << "Cola vacia\n";
    }
}

int ColaArreglo::front() {
    if (!estaVacia()) {
        return datos[0];
    }
    return -1;
}

void ColaArreglo::mostrar() {
    if (estaVacia()) {
        cout << "Cola vacia\n";
        return;
    }

    for (int i = 0; i < tamano; i++) {
        cout << " [" << datos[i] << "]\n";

        if (i != tamano - 1) {
            cout << "  \u2193\n";  // ↓
        }
    }

    cout << "  \u2193\n";
    cout << "null\n";
}