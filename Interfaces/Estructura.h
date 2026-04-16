#ifndef ESTRUCTURA_H
#define ESTRUCTURA_H

class Estructura {
public:
    virtual void insertar(int x) = 0;
    virtual void eliminar() = 0;
    virtual void mostrar() = 0;

    virtual ~Estructura() {}
};


#endif