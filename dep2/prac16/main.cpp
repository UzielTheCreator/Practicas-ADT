// Practica 16: Ordenamiento
// burbuja ordenar conjunto de caracteres, enteros y nuevo tipo de dato (PE y POO)

#include <iostream>
#include "Clase.h"
using namespace std;

// PE (nuevo tipo)
struct Dato {
    int valor;
    int peso;
};

void ordenarDatos(Dato arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j].valor > arr[j + 1].valor) {
                Dato t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
}

void mostrarDatos(Dato arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i].valor << "," << arr[i].peso << "] ";
    cout << endl;
}

int main() {

    Clase obj;

    int enteros[5] = {5, 2, 9, 1, 3};
    char caracteres[5] = {'z','a','m','b','k'};

    // POO
    Clase datosObj[5] = {
        Clase(10,2),
        Clase(3,8),
        Clase(7,1),
        Clase(1,5),
        Clase(6,4)
    };

    // PE
    Dato datos[5] = {
        {10,2},
        {3,8},
        {7,1},
        {1,5},
        {6,4}
    };

    cout << "Enteros:\n";
    obj.mostrarEnteros(enteros,5);
    obj.ordenarEnteros(enteros,5);
    obj.mostrarEnteros(enteros,5);

    cout << "\nCaracteres:\n";
    obj.mostrarCaracteres(caracteres,5);
    obj.ordenarCaracteres(caracteres,5);
    obj.mostrarCaracteres(caracteres,5);

    // objetos (POO)
    cout << "\nObjetos (POO):\n";
    obj.mostrarObjetos(datosObj,5);
    obj.ordenarObjetos(datosObj,5);
    obj.mostrarObjetos(datosObj,5);

    // struct (PE)
    cout << "\nStruct (PE):\n";
    mostrarDatos(datos,5);
    ordenarDatos(datos,5);
    mostrarDatos(datos,5);

    return 0;
}