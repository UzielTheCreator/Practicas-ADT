// Practica 17: Ordenamiento
// merge sort ordenar conjunto de caracteres, enteros y nuevo tipo de dato (PE y POO)

#include <iostream>
#include "Clase.h"
using namespace std;

// PE
struct Dato {
    int valor;
    int peso;
};

// merge PE
void mergeDatos(Dato arr[], int ini, int mid, int fin) {
    int tam1 = mid - ini + 1;
    int tam2 = fin - mid;

    Dato* L = new Dato[tam1];
    Dato* R = new Dato[tam2];

    for (int i = 0; i < tam1; i++)
        L[i] = arr[ini + i];

    for (int j = 0; j < tam2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = ini;

    while (i < tam1 && j < tam2) {
        if (L[i].valor <= R[j].valor)
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < tam1)
        arr[k++] = L[i++];

    while (j < tam2)
        arr[k++] = R[j++];

    delete[] L;
    delete[] R;
    
}

void mergeSortDatos(Dato arr[], int ini, int fin) {
    if (ini < fin) {
        int mid = (ini + fin) / 2;
        mergeSortDatos(arr, ini, mid);
        mergeSortDatos(arr, mid + 1, fin);
        mergeDatos(arr, ini, mid, fin);
    }
}

void mostrarDatos(Dato arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i].valor << "," << arr[i].peso << "] ";
    cout << endl;
}

int main() {

    Clase obj;

    int enteros[6] = {10, 9, 14, 3, 5, 8};
    char caracteres[5] = {'z','a','m','b','k'};

    Clase datosObj[5] = {
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
    obj.mostrarEnteros(enteros,6);
    obj.mergeSortEnteros(enteros,0,5);
    obj.mostrarEnteros(enteros,6);

    cout << "\nCaracteres:\n";
    obj.mostrarCaracteres(caracteres,5);
    obj.mergeSortCaracteres(caracteres,0,4);
    obj.mostrarCaracteres(caracteres,5);

    cout << "\nObjetos (POO):\n";
    obj.mostrarObjetos(datosObj,5);
    obj.mergeSortObjetos(datosObj,0,4);
    obj.mostrarObjetos(datosObj,5);

    cout << "\nStruct (PE):\n";
    mostrarDatos(datos,5);
    mergeSortDatos(datos,0,4);
    mostrarDatos(datos,5);

    return 0;
}