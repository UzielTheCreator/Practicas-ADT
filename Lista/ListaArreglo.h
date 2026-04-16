#ifndef LISTA_ARREGLO_H
#define LISTA_ARREGLO_H

#include "../Base/BaseArreglo.h"

class ListaArreglo : public BaseArreglo {
public:
    ListaArreglo(int cap);

    // interfaz
    void insertar(int x);
    void eliminar();

    void insertarEn(int pos, int x);
    void eliminarEn(int pos);
};

#endif