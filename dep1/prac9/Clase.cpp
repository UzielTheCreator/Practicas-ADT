#include "Clase.h"
#include <iostream>

using namespace std;

void Clase::leer(){

    cout << "Ingresa 5 numeros\n";

    for(int i=0;i<5;i++){
        cout << "Numero " << i+1 << ": ";
        cin >> numeros[i];
    }
}

float Clase::suma(){

    float s = 0;

    for(int i=0;i<5;i++){
        s += numeros[i];
    }

    return s;
}

float Clase::promedio(){
    return suma() / 5;
}

float Clase::mediana(){

    float temp[5];

    for(int i=0;i<5;i++)
        temp[i] = numeros[i];

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(temp[i] > temp[j]){
                float aux = temp[i];
                temp[i] = temp[j];
                temp[j] = aux;
            }
        }
    }

    return temp[2];
}

float Clase::maximo(){

    float mayor = numeros[0];

    for(int i=1;i<5;i++){
        if(numeros[i] > mayor)
            mayor = numeros[i];
    }

    return mayor;
}

float Clase::minimo(){

    float menor = numeros[0];

    for(int i=1;i<5;i++){
        if(numeros[i] < menor)
            menor = numeros[i];
    }

    return menor;
}

void Clase::mostrar(){

    cout << "\nresultados\n";

    cout << "Suma: " << suma() << endl;
    cout << "Promedio: " << promedio() << endl;
    cout << "Mediana: " << mediana() << endl;
    cout << "Maximo: " << maximo() << endl;
    cout << "Minimo: " << minimo() << endl;
}

Clase::Clase(){

}

Clase::~Clase(){
    
}