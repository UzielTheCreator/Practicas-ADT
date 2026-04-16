#ifndef COLA_PUNTERO_H
#define COLA_PUNTERO_H

#include "../Base/BasePuntero.h"

class ColaPuntero : public BasePuntero {
private:
    Nodo* fin;

public:
    ColaPuntero();

    void insertar(int x);
    void eliminar();

    void enqueue(int x);
    void dequeue();
    int front();

    void mostrar() override;
};

#endif