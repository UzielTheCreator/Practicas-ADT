#ifndef COLA_LIB_H
#define COLA_LIB_H

#include <queue>
#include "../Interfaces/Estructura.h"

class ColaLib : public Estructura {
private:
    std::queue<int> cola;

public:
    void insertar(int x);
    void eliminar();
    void mostrar();
    int front();
};

#endif