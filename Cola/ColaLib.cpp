#include "ColaLib.h"
#include <iostream>
using namespace std;

void ColaLib::insertar(int x) {
    cola.push(x);
}

void ColaLib::eliminar() {
    if (!cola.empty()) cola.pop();
    else cout << "Cola vacia\n";
}

void ColaLib::mostrar() {
    if (cola.empty()) {
        cout << "Cola vacia\n";
        return;
    }

    queue<int> temp = cola;

    while (!temp.empty()) {
        cout << " [" << temp.front() << "]\n";
        temp.pop();

        if (!temp.empty()) {
            cout << "  \u2193\n";  // ↓
        }
    }

    cout << "  \u2193\n";  // ↓
    cout << "null\n";
}

int ColaLib::front() {
    if (!cola.empty()) return cola.front();
    return -1;
}

