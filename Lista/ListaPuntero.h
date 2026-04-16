#ifndef LISTA_PUNTERO_H
#define LISTA_PUNTERO_H

#include "../Base/BasePuntero.h"

class ListaPuntero : public BasePuntero {
public:
    void insertar(int x);
    void eliminar();

    void insertarEn(int pos, int x);
    void eliminarEn(int pos);
};

#endif