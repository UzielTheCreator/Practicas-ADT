#include "ListaArreglo.h"
#include <iostream>
using namespace std;

ListaArreglo::ListaArreglo(int cap) : BaseArreglo(cap) {}

void ListaArreglo::insertar(int x) {
    if (!estaLlena()) {
        datos[tamano++] = x;
    } else {
        cout << "Lista llena\n";
    }
}

void ListaArreglo::eliminar() {
    if (!estaVacia()) {
        tamano--;
    } else {
        cout << "Lista vacia\n";
    }
}

void ListaArreglo::insertarEn(int pos, int x) {
    if (pos >= 0 && pos <= tamano && !estaLlena()) {
        for (int i = tamano; i > pos; i--) {
            datos[i] = datos[i - 1];
        }
        datos[pos] = x;
        tamano++;
    } else {
        cout << "Posicion invalida\n";
    }
}

void ListaArreglo::eliminarEn(int pos) {
    if (pos >= 0 && pos < tamano) {
        for (int i = pos; i < tamano - 1; i++) {
            datos[i] = datos[i + 1];
        }
        tamano--;
    } else {
        cout << "Posicion invalida\n";
    }
}