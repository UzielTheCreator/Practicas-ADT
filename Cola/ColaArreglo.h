#ifndef COLA_ARREGLO_H
#define COLA_ARREGLO_H

#include "../Base/BaseArreglo.h"

class ColaArreglo : public BaseArreglo {
public:
    ColaArreglo(int cap);

    void insertar(int x);   // enqueue
    void eliminar();        // dequeue

    void enqueue(int x);
    void dequeue();
    int front();

    void mostrar() override;
};

#endif