#ifndef BASE_PUNTERO_H
#define BASE_PUNTERO_H

#include "../Interfaces/Estructura.h"

class Nodo {
public:
    int dato;
    Nodo* sig;

    Nodo(int d) {
        dato = d;
        sig = nullptr;
    }
};

class BasePuntero : public Estructura {
protected:
    Nodo* inicio;

public:
    BasePuntero();
    ~BasePuntero();

    bool estaVacia();
    void mostrar();
};

#endif