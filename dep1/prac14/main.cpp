// Practica 14: factorial
//              fibonacci
//              partiendo del ejercicio 6 calculadora (de calculos susecivos es hacerlos recursivos)


#include <iostream>
using namespace std;
#include "Cientifica.h"

int main(int argc, char const *argv[]) {

    Cientifica C1;

    int a, b;
    float resultado;
    int op;
    int n;

    do {
        cout << "Calculadora" << endl;
        cout << "1.- Sumar" << endl;
        cout << "2.- Restar" << endl;
        cout << "3.- Multiplicar" << endl;
        cout << "4.- Dividir" << endl;
        cout << "5.- Potencia" << endl;
        cout << "6.- Raiz cuadrada" << endl;
        cout << "7.- Factorial" << endl;
        cout << "8.- Fibonacci" << endl;
        cout << "Selecciona una opcion: ";
        cin >> op;

    } while (op < 1 || op > 8);

    switch(op){

        case 1:
            cout << "\ningresa el primer numero: ";
            cin >> a;
            cout << "ingresa el segundo numero: ";
            cin >> b;
            resultado = C1.Sumar(a, b);
        break;

        case 2:
            cout << "\ningresa el primer numero: ";
            cin >> a;
            cout << "Ingresa el segundo numero: ";
            cin >> b;
            resultado = C1.Restar(a, b);
        break;

        case 3:
            cout << "\ningresa el primer numero: ";
            cin >> a;
            cout << "Ingresa el segundo numero: ";
            cin >> b;
            resultado = C1.Multiplicar(a, b);
        break;

        case 4:
            cout << "\ningresa el primer numero: ";
            cin >> a;
            cout << "Ingresa el segundo numero: ";
            cin >> b;

            while(b == 0){
                cout << "no puede dividirse entre 0" << endl;
                cout << "ingresa otro numero: ";
                cin >> b;
            }

            resultado = C1.Dividir(a, b);
        break;

        case 5:
            cout << "\nIngresa la base: ";
            cin >> a;
            cout << "Ingresa el exponente: ";
            cin >> b;

            resultado = C1.Potencia(a, b);
        break;

        case 6:
            cout << "\nIngresa el numero: ";
            cin >> a;

            resultado = C1.Raiz(a);
        break;

        case 7:
            cout << "\nIngresa el numero: ";
            cin >> n;

            resultado = C1.factorial(n);
        break;

        case 8:
            cout << "\nIngresa el numero: ";
            cin >> n;

            resultado = C1.fibonacci(n);
        break;
    }

    cout << "\nresultado: " << resultado << endl;

    return 0;
}