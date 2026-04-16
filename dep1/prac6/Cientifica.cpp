#include "Cientifica.h"
#include <cmath>

float Cientifica::Multiplicar(float a, float b){

    float resultado = 0;
    if (b < 0){
        for(int i=0;i<(int)b *(-1);i++)
        resultado += a;

        return resultado * (-1);
    }
    

    for(int i=0;i<(int)b;i++)
        resultado += a;
    

    return resultado;
}

float Cientifica::Potencia(float a, float b){

    float resultado = 1;

    for(int i=0;i<(int)b;i++){
        resultado *= a;
    }

    return resultado;
}

float Cientifica::Dividir(float a, float b){

    float contador = 0;

    bool negativo = false;
    if((a < 0 && b > 0) || (a > 0 && b < 0)){
        negativo = true;
    }

    if(a < 0) a = -a;
    if(b < 0) b = -b;

    while(a >= b){
        a -= b;
        contador++;
    }

    if(negativo){
        contador = -contador;
    }

    return contador;
}

float Cientifica::Raiz(float a){
    return sqrt(a);
}

Cientifica::Cientifica(){}
Cientifica::~Cientifica(){}