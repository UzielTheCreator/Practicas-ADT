#include "Auto.h"

Auto::Auto(){}

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