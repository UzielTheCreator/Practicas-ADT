#ifndef CLASE_H
#define CLASE_H

#include <iostream>
using namespace std;

class Clase{

private:
    int A[3][3];
    int B[3][3];
    int C[3][3];

public:
    Clase();
    ~Clase();

    void leerA();
    void leerB();

    void multConstante(int k);
    void multMatrices();

    void mostrarA();
    void mostrarB();
    void mostrarC();
};

#endif