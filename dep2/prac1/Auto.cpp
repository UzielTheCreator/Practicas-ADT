#include "Auto.h"

Auto::Auto() {
    precio = 0;
    anio = 0;
    sig = NULL;
}

void Auto::setSig(Auto* s) {
    sig = s;
}

Auto* Auto::getSig() {
    return sig;
}

Auto::~Auto(){}

void Auto::leer(){

    cout << "Precio del auto: ";
    cin >> precio;

    cout << "Anio del auto: ";
    cin >> anio;
}

void Auto::mostrar(){

    cout << "Auto -> Precio: " << precio
         << " Anio: " << anio << endl;
}