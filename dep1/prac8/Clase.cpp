#include "Clase.h"
#include <iostream>

using namespace std;

void Clase::leer(){

    cout << "Ingresa 5 numeros\n";

    cout << "Numero 1: ";
    cin >> n1;

    cout << "Numero 2: ";
    cin >> n2;

    cout << "Numero 3: ";
    cin >> n3;

    cout << "Numero 4: ";
    cin >> n4;

    cout << "Numero 5: ";
    cin >> n5;
}

float Clase::suma(){
    return n1 + n2 + n3 + n4 + n5;
}

float Clase::promedio(){
    return suma() / 5;
}

float Clase::mediana(){

    float v[5] = {n1, n2, n3, n4, n5};
    float aux;

    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 5; j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    return v[2];
}

float Clase::maximo(){

    float mayor = n1;

    if(n2 > mayor) mayor = n2;
    if(n3 > mayor) mayor = n3;
    if(n4 > mayor) mayor = n4;
    if(n5 > mayor) mayor = n5;

    return mayor;
}

float Clase::minimo(){

    float menor = n1;

    if(n2 < menor) menor = n2;
    if(n3 < menor) menor = n3;
    if(n4 < menor) menor = n4;
    if(n5 < menor) menor = n5;

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