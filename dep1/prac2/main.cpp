// Practica 2: suma de 2 numeros como parametros

#include <iostream>
using namespace std;
#include "Clase.h"

int main(int argc, char const *argv[]){
    
    Clase S1 = Clase();
    int a, b, suma = 0;

    cout << "ingresa dos numeros" << endl;
    cout << "a: ";  cin >> a;
    cout << "b: ";  cin >> b;
    
    suma = S1.Sumar(a,b);

    cout << "el valor de la suma es: " << suma << endl;
    

    return 0;
}
