// Practica 5: crear calculadoranueva partiendo de la anterior
// herencia

#include <iostream>
using namespace std;
#include "Cientifica.h"

int main(int argc, char const *argv[]) {

    Cientifica C1;

    float a, b, resultado;
    int op;

    do {
        cout << "Calculadora" << endl;
        cout << "1.- Sumar" << endl;
        cout << "2.- Restar" << endl;
        cout << "3.- Multiplicar" << endl;
        cout << "4.- Dividir" << endl;
        cout << "5.- Potencia" << endl;
        cout << "6.- Raiz cuadrada" << endl;
        cout << "Selecciona una opcion: ";
        cin >> op;

    } while (op < 1 || op > 6);

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
    }

    cout << "\nresultado: " << resultado << endl;

    return 0;
}