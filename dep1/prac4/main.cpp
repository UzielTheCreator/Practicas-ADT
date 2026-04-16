// Practica 4: calculadora con variantes en las funciones (reciben 2 parametros, 0 parametros o 3 parametros)
// sobrecarga

#include <iostream>
#include "Calculadora.h"

using namespace std;

int main(){

    Calculadora C1;

    int op, tipo;
    float a, b, c, resultado;

    do{
        cout << "Calculadora" << endl;
        cout << "1.- Sumar" << endl;
        cout << "2.- Restar" << endl;
        cout << "3.- Multiplicar" << endl;
        cout << "4.- Dividir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> op;
    } while(op < 1 || op > 4);
            do{
                cout << "\ntipo de funcion:\n";
                cout << "1.- 0 parametros\n";
                cout << "2.- 2 parametros\n";
                cout << "3.- 3 parametros\n";
                cout << "Selecciona: ";
                cin >> tipo;
            } while (tipo < 1 || tipo > 3);

            switch(op){

                case 1:

                    if(tipo == 1)
                        resultado = C1.Sumar();

                    else if(tipo == 2){
                        cout << "ingresa a y b: ";
                        cin >> a >> b;
                        resultado = C1.Sumar(a,b);
                    }

                    else if(tipo == 3){
                        cout << "ingresa a, b, c: ";
                        cin >> a >> b >> c;
                        resultado = C1.Sumar(a,b,c);
                    }

                break;

                case 2:

                    if(tipo == 1)
                        resultado = C1.Restar();

                    else if(tipo == 2){
                        cout << "ingresa a y b: ";
                        cin >> a >> b;
                        resultado = C1.Restar(a,b);
                    }

                    else if(tipo == 3){
                        cout << "ingresa a, b, c: ";
                        cin >> a >> b >> c;
                        resultado = C1.Restar(a,b,c);
                    }

                break;

                case 3:

                    if(tipo == 1)
                        resultado = C1.Multiplicar();

                    else if(tipo == 2){
                        cout << "ingresa a y b: ";
                        cin >> a >> b;
                        resultado = C1.Multiplicar(a,b);
                    }

                    else if(tipo == 3){
                        cout << "ingresa a, b, c: ";
                        cin >> a >> b >> c;
                        resultado = C1.Multiplicar(a,b,c);
                    }

                break;

                case 4:
                    if(tipo == 1)
                        resultado = C1.Dividir();

                    else if(tipo == 2){
                        cout << "ingresa a y b: ";
                        cin >> a >> b;

                        while(b == 0){
                            cout << "no puede dividirse entre 0" << endl;
                            cout << "ingresa otro numero para b: ";
                            cin >> b;
                        }

                        resultado = C1.Dividir(a,b);
                    }

                    else if(tipo == 3){
                        cout << "ingresa a, b, c: ";
                        cin >> a >> b >> c;

                        while(b == 0){
                            cout << "no puede dividirse entre 0" << endl;
                            cout << "ingresa otro numero para b: ";
                            cin >> b;
                        }

                        while(c == 0){
                            cout << "no puede dividirse entre 0" << endl;
                            cout << "ingresa otro numero para c: ";
                            cin >> c;
                        }

                        resultado = C1.Dividir(a,b,c);
                    }

                break;
            }

            cout << "\nresultado: " << resultado << endl;

    return 0;
}