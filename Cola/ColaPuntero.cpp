#include "ColaPuntero.h"
#include <iostream>
using namespace std;

ColaPuntero::ColaPuntero() {
    inicio = nullptr;
    fin = nullptr;
}

void ColaPuntero::insertar(int x) {
    enqueue(x);
}

void ColaPuntero::eliminar() {
    dequeue();
}

void ColaPuntero::enqueue(int x) {
    Nodo* nuevo = new Nodo(x);

    if (estaVacia()) {
        inicio = fin = nuevo;
    } else {
        fin->sig = nuevo;
        fin = nuevo;
    }
}

void ColaPuntero::dequeue() {
    if (!estaVacia()) {
        Nodo* temp = inicio;
        inicio = inicio->sig;

        if (inicio == nullptr) {
            fin = nullptr;
        }

        delete temp;
    } else {
        cout << "Cola vacia\n";
    }
}

int ColaPuntero::front() {
    if (!estaVacia()) {
        return inicio->dato;
    }
    return -1;
}

void ColaPuntero::mostrar() {
    if (estaVacia()) {
        cout << "Cola vacia\n";
        return;
    }

    Nodo* aux = inicio;

    while (aux != nullptr) {
        cout << " [" << aux->dato << "]\n";

        if (aux->sig != nullptr) {
            cout << "  \u2193\n";  // ↓
        }

        aux = aux->sig;
    }
    cout << "  \u2193\n";
    cout << "null\n";
}