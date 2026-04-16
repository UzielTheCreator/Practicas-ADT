#include "BaseArreglo.h"
#include <iostream>
using namespace std;

BaseArreglo::BaseArreglo(int cap) {
    capacidad = cap;
    tamano = 0;
    datos = new int[cap];
}

BaseArreglo::~BaseArreglo() {
    delete[] datos;
}

bool BaseArreglo::estaVacia() {
    return tamano == 0;
}

bool BaseArreglo::estaLlena() {
    return tamano == capacidad;
}

int BaseArreglo::getTamano() {
    return tamano;
}

void BaseArreglo::mostrar() {
    if (estaVacia()) {
        cout << "vacio\n";
        return;
    }

    for (int i = 0; i < tamano; i++) {
        cout << "[" << datos[i] << "] -> ";
    }

    cout << "null\n";
}