#include "BasePuntero.h"
#include <iostream>
using namespace std;

BasePuntero::BasePuntero() {
    inicio = nullptr;
}

BasePuntero::~BasePuntero() {
    Nodo* temp;
    while (inicio != nullptr) {
        temp = inicio;
        inicio = inicio->sig;
        delete temp;
    }
}

bool BasePuntero::estaVacia() {
    return inicio == nullptr;
}

void BasePuntero::mostrar() {
    if (estaVacia()) {
        cout << "vacio\n";
        return;
    }

    Nodo* aux = inicio;
    while (aux != nullptr) {
        cout << "[" << aux->dato << "] -> ";
        aux = aux->sig;
    }

    cout << "null\n";
}