#include "ListaLib.h"
#include <iostream>
using namespace std;

void ListaLib::insertar(int x) {
    lista.push_back(x);
}

void ListaLib::eliminar() {
    if (!lista.empty()) lista.pop_front();
    else cout << "Lista vacia\n";
}

void ListaLib::mostrar() {
    for (int x : lista) {
        cout << x << " ";
    }
    cout << endl;
}

void ListaLib::insertarEn(int pos, int x) {
    if (pos >= 0 && pos <= lista.size()) {
    auto it = lista.begin();
    // std::list<int>::iterator it = lista.begin();
    advance(it, pos);
    lista.insert(it, x);
    }
}

void ListaLib::eliminarEn(int pos) {
    if (pos >= 0 && pos <= lista.size()) {
    auto it = lista.begin();
    // std::list<int>::iterator it = lista.begin();
    advance(it, pos);
    lista.erase(it);
    }
}