#include "PilaLib.h"
#include <iostream>
using namespace std;

void PilaLib::insertar(int x) {
    pila.push(x);
}

void PilaLib::eliminar() {
    if (!pila.empty()) pila.pop();
    else cout << "Pila vacia\n";
}

void PilaLib::mostrar() {
    if (pila.empty()) {
        cout << "vacio\n";
        return;
    }

    stack<int> temp = pila;

    while (!temp.empty()) {
        cout << " [" << temp.top() << "]\n";
        temp.pop();

        if (!temp.empty()) {
            cout << "  \u2191\n";  // ↑
        }
    }
    
    cout << "  \u2191\n";
    cout << "null\n";
}

int PilaLib::top() {
    if (!pila.empty()) return pila.top();
    return -1;
}