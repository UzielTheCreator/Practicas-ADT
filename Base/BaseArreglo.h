#ifndef BASE_ARREGLO_H
#define BASE_ARREGLO_H

#include "../Interfaces/Estructura.h"

class BaseArreglo : public Estructura {
protected:
    int* datos;
    int tamano;
    int capacidad;

public:
    BaseArreglo(int cap);
    ~BaseArreglo();

    bool estaVacia();
    bool estaLlena();
    int getTamano();

    void mostrar();
};

#endif