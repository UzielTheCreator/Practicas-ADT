// Practica 18: Ordenamiento indirecto
// quick sort ordenar conjunto de caracteres, enteros y nuevo tipo de dato (PE y POO)

#include <iostream>
#include "Clase.h"
using namespace std;

// PE (struct)
struct Dato {
    int valor;
    int peso;
};

void QuickSortDatos(Dato* arr[], int ini, int fin) {
    int izq = ini, der = fin;
    Dato* pivote = arr[(ini + fin) / 2];
    Dato* aux;

    do {
        while (arr[izq]->valor < pivote->valor && izq < fin)
            izq++;

        while (arr[der]->valor > pivote->valor && der > ini)
            der--;

        if (izq <= der) {
            aux = arr[izq];
            arr[izq] = arr[der];
            arr[der] = aux;
            izq++;
            der--;
        }
    } while (izq <= der);

    if (ini < der)
        QuickSortDatos(arr, ini, der);
    if (izq < fin)
        QuickSortDatos(arr, izq, fin);
}

void inicializarDatos(Dato arr[], Dato* direcD[], int n) {
    for (int i = 0; i < n; i++)
        direcD[i] = &arr[i];
}

void mostrarDatos(Dato* arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i]->valor << "," << arr[i]->peso << "] ";
    cout << endl;
}

int main() {

    Clase obj;

    int enteros[] = {7, 2, 1, 6, 4, 5, 3, 8};
    int tamE = sizeof(enteros) / sizeof(enteros[0]);

    cout << "Enteros:\n";
    obj.inicializarEnteros(enteros, tamE);
    obj.mostrarEnteros(enteros, tamE, false);
    obj.QuickSortEnteros(enteros, 0, tamE - 1);
    obj.mostrarEnteros(enteros, tamE, true);

    char caracteres[] = {'z','a','m','b','k'};
    int tamC = sizeof(caracteres) / sizeof(caracteres[0]);

    cout << "\nCaracteres:\n";
    obj.inicializarCaracteres(caracteres, tamC);
    obj.mostrarCaracteres(caracteres, tamC, false);
    obj.QuickSortCaracteres(caracteres, 0, tamC - 1);
    obj.mostrarCaracteres(caracteres, tamC, true);

    Clase objetos[] = {
        Clase(10,2),
        Clase(3,8),
        Clase(7,1),
        Clase(1,5),
        Clase(6,4)
    };

    int tamO = sizeof(objetos) / sizeof(objetos[0]);

    cout << "\nObjetos:\n";
    obj.inicializarObjetos(objetos, tamO);
    obj.mostrarObjetos(objetos, tamO, false);
    obj.QuickSortObjetos(objetos, 0, tamO - 1);
    obj.mostrarObjetos(objetos, tamO, true);

    Dato datos[] = {
        {10,2},
        {3,8},
        {7,1},
        {1,5},
        {6,4}
    };

    int tamD = sizeof(datos) / sizeof(datos[0]);

    Dato* direcD[10];

    inicializarDatos(datos, direcD, tamD);

    cout << "\nStruct (PE):\n";
    mostrarDatos(direcD, tamD);
    QuickSortDatos(direcD, 0, tamD - 1);
    mostrarDatos(direcD, tamD);

    return 0;
}