#ifndef CIENTIFICA_H
#define CIENTIFICA_H

#include "Calculadora.h"

class Cientifica : public Calculadora{

public:

    Cientifica();
    ~Cientifica();

    int factorial(int n);
    int fibonacci(int n);

    float Raiz(int a);
    float Multiplicar(int a, int b);
    float Dividir(int a, int b);
    float Potencia(int a, int b);
};

#endif