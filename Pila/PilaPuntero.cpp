#include "PilaPuntero.h"
#include <iostream>
using namespace std;

void PilaPuntero::insertar(int x) {
    push(x);
}

void PilaPuntero::eliminar() {
    pop();
}

void PilaPuntero::push(int x) {
    Nodo* nuevo = new Nodo(x);
    nuevo->sig = inicio;
    inicio = nuevo;
}

void PilaPuntero::pop() {
    if (!estaVacia()) {
        Nodo* temp = inicio;
        inicio = inicio->sig;
        delete temp;
    } else {
        cout << "Pila vacia\n";
    }
}

int PilaPuntero::top() {
    if (!estaVacia()) {
        return inicio->dato;
    }
    return -1;
}

void PilaPuntero::mostrar() {
    if (estaVacia()) {
        cout << "vacio\n";
        return;
    }

    Nodo* aux = inicio;
    while (aux != nullptr) {
        cout << " [" << aux->dato << "]\n";
        cout << "  \u2191\n";  // ↑
        aux = aux->sig;
    }

    cout << "null\n";
}