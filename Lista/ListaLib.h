#ifndef LISTA_LIB_H
#define LISTA_LIB_H

#include <list>
#include "../Interfaces/Estructura.h"

class ListaLib : public Estructura {
private:
    std::list<int> lista;

public:
    void insertar(int x);
    void eliminar();
    void mostrar() override;

    void insertarEn(int pos, int x);
    void eliminarEn(int pos);
};

#endif