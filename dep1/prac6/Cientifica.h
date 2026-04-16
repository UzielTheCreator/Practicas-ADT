#ifndef CIENTIFICA_H
#define CIENTIFICA_H

#include "Calculadora.h"

class Cientifica : public Calculadora{

public:

    Cientifica();
    ~Cientifica();

    float Potencia(float a, float b);
    float Raiz(float a);

    float Multiplicar(float a, float b);
    float Dividir(float a, float b);
};

#endif