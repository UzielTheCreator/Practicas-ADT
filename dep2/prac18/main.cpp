// Practica 18: Ordenamiento
// quick sort ordenar conjunto de caracteres, enteros y nuevo tipo de dato (PE y POO)

#include <iostream>
#include "Clase.h"
using namespace std;

// PE (struct)
struct Dato {
    int valor;
    int peso;
};

void QuickSortDatos(Dato arr[], int ini, int fin) {
    int izq = ini, der = fin;
    Dato pivote = arr[(ini + fin) / 2];
    Dato aux;

    do {
        while (arr[izq].valor < pivote.valor && izq < fin)
            izq++;

        while (arr[der].valor > pivote.valor && der > ini)
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

void mostrarDatos(Dato arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i].valor << "," << arr[i].peso << "] ";
    cout << endl;
}

int main() {

    Clase obj;

    int enteros[] = {7, 2, 1, 6, 4, 5, 3, 8};
    int tamE = sizeof(enteros) / sizeof(enteros[0]);

    cout << "Enteros:\n";
    obj.mostrarEnteros(enteros, tamE);
    obj.QuickSortEnteros(enteros, 0, tamE - 1);
    obj.mostrarEnteros(enteros, tamE);

    char caracteres[] = {'z','a','m','b','k'};
    int tamC = sizeof(caracteres) / sizeof(caracteres[0]);

    cout << "\nCaracteres:\n";
    obj.mostrarCaracteres(caracteres, tamC);
    obj.QuickSortCaracteres(caracteres, 0, tamC - 1);
    obj.mostrarCaracteres(caracteres, tamC);

    // POO
    Clase objetos[] = {
        Clase(10,2),
        Clase(3,8),
        Clase(7,1),
        Clase(1,5),
        Clase(6,4)
    };

    int tamO = sizeof(objetos) / sizeof(objetos[0]);

    cout << "\nObjetos:\n";
    obj.mostrarObjetos(objetos, tamO);
    obj.QuickSortObjetos(objetos, 0, tamO - 1);
    obj.mostrarObjetos(objetos, tamO);

    // Struct (PE)
    Dato datos[] = {
        {10,2},
        {3,8},
        {7,1},
        {1,5},
        {6,4}
    };

    int tamD = sizeof(datos) / sizeof(datos[0]);

    cout << "\nStruct (PE):\n";
    mostrarDatos(datos, tamD);
    QuickSortDatos(datos, 0, tamD - 1);
    mostrarDatos(datos, tamD);

    return 0;
}