#include "Cientifica.h"
#include <cmath>

float Cientifica::Multiplicar(int a, int b){

    if(b == 0)
        return 0;

    if(b < 0)
        return -Multiplicar(a, -b);

    return a + Multiplicar(a, b-1);
}

float Cientifica::Potencia(int a, int b){

    if(b == 0)
        return 1;

    if(b < 0)
        return 1.0 / Potencia(a, -b);

    return a * Potencia(a, b-1);
}

float Cientifica::Dividir(int a, int b){

    if(b == 0)
        return 0;

    bool negativo = false;

    if((a < 0 && b > 0) || (a > 0 && b < 0))
        negativo = true;

    if(a < 0) a = -a;
    if(b < 0) b = -b;

    if(a < b){
        if (negativo)
            return -0;
        else return 0;
        
    }


    float resultado = 1 + Dividir(a-b, b);

    if (negativo)
            return -resultado;
        else return resultado;
}

float Cientifica::Raiz(int a){
    return sqrt(a);
}

int Cientifica::fibonacci(int n){

    if(n <= 1)
        return n;

    return fibonacci(n-1) + fibonacci(n-2);
}

int Cientifica::factorial(int n){

    if(n <= 1)
        return 1;

    return n * factorial(n-1);
}

Cientifica::Cientifica(){}
Cientifica::~Cientifica(){}