#include "PilaArreglo.h"
#include <iostream>
using namespace std;

PilaArreglo::PilaArreglo(int cap) : BaseArreglo(cap) {}

void PilaArreglo::insertar(int x) {
    push(x);
}

void PilaArreglo::eliminar() {
    pop();
}

void PilaArreglo::push(int x) {
    if (!estaLlena()) {
        datos[tamano++] = x;
    } else {
        cout << "Pila llena\n";
    }
}

void PilaArreglo::pop() {
    if (!estaVacia()) {
        tamano--;
    } else {
        cout << "Pila vacia\n";
    }
}

int PilaArreglo::top() {
    if (!estaVacia()) return datos[tamano - 1];
    return -1;
}

void PilaArreglo::mostrar() {
    if (estaVacia()) {
        cout << "vacio\n";
        return;
    }

    for (int i = tamano - 1; i >= 0; i--) {
        cout << " [" << datos[i] << "]\n";
        cout << "  \u2191\n";  // ↑
    }

    cout << "null\n";
}