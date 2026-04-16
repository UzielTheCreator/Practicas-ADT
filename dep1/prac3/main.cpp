// Practica 3: calculadora basica suma, resta mult, div

#include <iostream>
using namespace std;
#include "Calculadora.h"

int main(int argc, char const *argv[]) {

    Calculadora C1;

    float a, b, resultado;
    int op;

    do {
        cout << "Calculadora" << endl;
        cout << "1.- Sumar" << endl;
        cout << "2.- Restar" << endl;
        cout << "3.- Multiplicar" << endl;
        cout << "4.- Dividir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> op;

    } while (op < 1 || op > 4);

    cout << "\nIngresa el primer numero: ";
    cin >> a;

    cout << "Ingresa el segundo numero: ";
    cin >> b;

    switch(op){
        case 1: resultado = C1.Sumar(a, b);         break;
        case 2: resultado = C1.Restar(a, b);        break;
        case 3: resultado = C1.Multiplicar(a, b);   break;
        case 4: 
            while(b == 0){
                cout << "no puede dividirse entre 0" << endl;
                cout << "ingresa otro numero: ";    cin >> b;
                }
            resultado = C1.Dividir(a, b);       
            break;
    }

    cout << "\nresultado: " << resultado << endl;

    return 0;
}
