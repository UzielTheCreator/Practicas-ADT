// practica 11: realizar la solucion calculo de matrices A x B, con las operaciones
//              A * constante
//              A * B


#include <iostream>
using namespace std;
#include "Clase.h"

int main(){

    Clase M;
    int k;

    M.leerA();
    M.mostrarA();

    cout << "\nConstante: ";
    cin >> k;

    M.multConstante(k);

    cout << "\nA * constante\n";
    M.mostrarC();


    M.leerB();
    M.mostrarB();

    M.multMatrices();

    cout << "\nA * B\n";
    M.mostrarC();

    return 0;
}
