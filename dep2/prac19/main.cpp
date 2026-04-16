// Practica 19: ordenamiento indirecto
// burbuja ordenar conjunto de caracteres, enteros y nuevo tipo de dato (PE y POO)

#include <iostream>
#include "Clase.h"
using namespace std;

struct Dato {
    int valor;
    int peso;
};

void ordenarDatos(Dato arr[], Dato* direcD[], int n) {
    for (int i = 0; i < n; i++)
        direcD[i] = &arr[i];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (direcD[j]->valor > direcD[j + 1]->valor) {
                Dato* aux = direcD[j];
                direcD[j] = direcD[j + 1];
                direcD[j + 1] = aux;
            }
        }
    }
}

void mostrarDatos(Dato arr[], Dato* direcD[], int n, bool indirecto) {
    for (int i = 0; i < n; i++) {
        if (indirecto)
            cout << "[" << direcD[i]->valor << "," << direcD[i]->peso << "] ";
        else
            cout << "[" << arr[i].valor << "," << arr[i].peso << "] ";
    }
    cout << endl;
}

int main() {
    Clase obj;

    int enteros[5] = {5, 2, 9, 1, 3};
    char caracteres[5] = {'z','a','m','b','k'};
    Clase objetos[5] = {
        Clase(10,2),
        Clase(3,8),
        Clase(7,1),
        Clase(1,5),
        Clase(6,4)
    };

    Dato datos[5] = {
    {10,2},
    {3,8},
    {7,1},
    {1,5},
    {6,4}
    };

    cout << "Enteros:\n";
    obj.mostrarEnteros(enteros,5,false);
    obj.ordenarEnteros(enteros,5);
    obj.mostrarEnteros(enteros,5,true);

    cout << "\nCaracteres:\n";
    obj.mostrarCaracteres(caracteres,5,false);
    obj.ordenarCaracteres(caracteres,5);
    obj.mostrarCaracteres(caracteres,5,true);

    cout << "\nObjetos:\n";
    obj.mostrarObjetos(objetos,5,false);
    obj.ordenarObjetos(objetos,5);
    obj.mostrarObjetos(objetos,5,true);

    cout << "\nStruct (PE):\n";
    Dato* direcD[5];
    
    mostrarDatos(datos, direcD, 5, false);
    ordenarDatos(datos, direcD, 5);
    mostrarDatos(datos, direcD, 5, true);

    return 0;
}