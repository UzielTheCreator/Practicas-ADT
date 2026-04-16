#include "Clase.h"

Clase::Clase(){}
Clase::~Clase(){}


void Clase::sierpinski(int n){

    int filas = 1 << n; // 2^n

    for(int i = 0; i < filas; i++){

        for(int j = 0; j < filas*2; j++){

            if((i & j) == 0)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}

void Clase::cantor(int n, int espacio){

    if(n == 0)
        return;

    for(int i=0;i<espacio;i++)
        cout << "-";

    cout << endl;

    cantor(n-1, espacio/3);

    for(int i=0;i<espacio/3;i++)
        cout << " ";

    cantor(n-1, espacio/3);
}