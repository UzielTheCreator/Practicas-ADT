#include "Calculadora.h"
#include <iostream>

using namespace std;

float Calculadora::Sumar(float a, float b){
    return a + b;
}

float Calculadora::Sumar(){
    float a, b;
    cout << "Ingresa dos numeros: ";
    cin >> a >> b;
    return a + b;
}

float Calculadora::Sumar(float a, float b, float c){
    return a + b + c;
}

float Calculadora::Restar(float a, float b){
    return a - b;
}

float Calculadora::Restar(){
    float a, b;
    cout << "Ingresa dos numeros: ";
    cin >> a >> b;
    return a - b;
}

float Calculadora::Restar(float a, float b, float c){
    return a - b - c;
}

float Calculadora::Multiplicar(float a, float b){
    return a * b;
}

float Calculadora::Multiplicar(){
    float a, b;
    cout << "Ingresa dos numeros: ";
    cin >> a >> b;
    return a * b;
}

float Calculadora::Multiplicar(float a, float b, float c){
    return a * b * c;
}

float Calculadora::Dividir(float a, float b){
    return a / b;
}

float Calculadora::Dividir(){
    float a, b;
    cout << "Ingresa dos numeros: ";
    cin >> a >> b;

    while(b == 0){
        cout << "no puede dividirse entre 0" << endl;
        cout << "ingresa otro numero para b: ";
        cin >> b;
        }

    return a / b;
}

float Calculadora::Dividir(float a, float b, float c){
    return a / b / c;
}

Calculadora::Calculadora(){}

Calculadora::~Calculadora(){}