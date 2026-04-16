#ifndef PILA_LIB_H
#define PILA_LIB_H

#include <stack>
#include "../Interfaces/Estructura.h"

class PilaLib : public Estructura {
private:
    std::stack<int> pila;

public:
    void insertar(int x);
    void eliminar();
    void mostrar() override;
    int top();
};

#endif