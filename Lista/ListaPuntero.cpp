#include "ListaPuntero.h"
#include <iostream>
using namespace std;

void ListaPuntero::insertar(int x) {
    Nodo* nuevo = new Nodo(x);

    if (estaVacia()) {
        inicio = nuevo;
    } else {
        Nodo* aux = inicio;
        while (aux->sig != nullptr) {
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void ListaPuntero::eliminar() {
    if (estaVacia()) {
        cout << "Lista vacia\n";
        return;
    }

    Nodo* temp = inicio;
    inicio = inicio->sig;
    delete temp;
}

void ListaPuntero::insertarEn(int pos, int x) {
    if (pos < 0) {
        cout << "Posicion invalida\n";
        return;
    }

    Nodo* nuevo = new Nodo(x);

    if (pos == 0) {
        nuevo->sig = inicio;
        inicio = nuevo;
        return;
    }

    Nodo* aux = inicio;
    int i = 0;

    while (aux != nullptr && i < pos - 1) {
        aux = aux->sig;
        i++;
    }

    if (aux == nullptr) {
        cout << "Posicion invalida\n";
        delete nuevo;
        return;
    }

    nuevo->sig = aux->sig;
    aux->sig = nuevo;
}

void ListaPuntero::eliminarEn(int pos) {
    if (estaVacia()) {
        cout << "Lista vacia\n";
        return;
    }

    if (pos < 0) {
        cout << "Posicion invalida\n";
        return;
    }

    if (pos == 0) {
        Nodo* temp = inicio;
        inicio = inicio->sig;
        delete temp;
        return;
    }

    Nodo* aux = inicio;
    int i = 0;

    while (aux != nullptr && i < pos - 1) {
        aux = aux->sig;
        i++;
    }

    if (aux == nullptr || aux->sig == nullptr) {
        cout << "Posicion invalida\n";
        return;
    }

    Nodo* temp = aux->sig;
    aux->sig = temp->sig;
    delete temp;
}