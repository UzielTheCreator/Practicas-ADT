#ifndef PILA_PUNTERO_H
#define PILA_PUNTERO_H

#include "../Base/BasePuntero.h"

class PilaPuntero : public BasePuntero {
public:
    void insertar(int x);
    void eliminar();

    void push(int x);
    void pop();
    int top();

    void mostrar() override;
};

#endif