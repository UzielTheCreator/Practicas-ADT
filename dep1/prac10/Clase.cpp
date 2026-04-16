#include <iostream>
#include "Clase.h"

using namespace std;

Clase::Clase(){
    ingresar();
    ordenar();
    mostrar();
}

void Clase::ingresar(){
    cout << "Ingresa 5 numeros:" << endl;

    for(int *p = numeros; p < numeros + 5; p++){
        cin >> *p;
    }
}

void Clase::ordenar(){
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 5; j++){
            if(numeros[i] > numeros[j]){
                int temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }
}

int Clase::suma(){
    int s = 0;

    for(int *p = numeros; p < numeros + 5; p++){
        s += *p;
    }

    return s;
}

float Clase::promedio(){
    return (float)suma() / 5;
}

int Clase::mediana(){
    return numeros[2];
}

int Clase::maximo(){
    return numeros[4];
}

int Clase::minimo(){
    return numeros[0];
}

void Clase::mostrar(){
    cout << "Suma: " << suma() << endl;
    cout << "Promedio: " << promedio() << endl;
    cout << "Mediana: " << mediana() << endl;
    cout << "Maximo: " << maximo() << endl;
    cout << "Minimo: " << minimo() << endl;
}