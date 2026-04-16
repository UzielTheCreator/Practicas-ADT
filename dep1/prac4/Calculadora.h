#ifndef CALCULADORA_H
#define CALCULADORA_H

class Calculadora{

public:

    Calculadora();
    ~Calculadora();

    float Sumar(float a, float b);
    float Sumar();
    float Sumar(float a, float b, float c);

    float Restar(float a, float b);
    float Restar();
    float Restar(float a, float b, float c);

    float Multiplicar(float a, float b);
    float Multiplicar();
    float Multiplicar(float a, float b, float c);

    float Dividir(float a, float b);
    float Dividir();
    float Dividir(float a, float b, float c);
};

#endif