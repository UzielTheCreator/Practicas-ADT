#ifndef PILA_ARREGLO_H
#define PILA_ARREGLO_H

#include "../Base/BaseArreglo.h"

class PilaArreglo : public BaseArreglo {
public:
    PilaArreglo(int cap);

    void insertar(int x);
    void eliminar();

    void push(int x);
    void pop();
    int top();

    void mostrar() override;
};

#endif