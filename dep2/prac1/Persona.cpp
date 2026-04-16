#include "Persona.h"

Persona::Persona() {
    sig = NULL;
}

void Persona::setSig(Persona* s) {
    sig = s;
}

Persona* Persona::getSig() {
    return sig;
}

Persona::~Persona(){}

void Persona::leer(){

    cout << "Nombre: ";
    cin >> nombre;

    cout << "Apellido paterno: ";
    cin >> ap;

    cout << "Apellido materno: ";
    cin >> am;

    cout << "Genero: ";
    cin >> genero;

    cout << "Edad: ";
    cin >> edad;
}

void Persona::mostrar(){

    cout << "Persona -> "
         << nombre << " "
         << ap << " "
         << am << " "
         << genero << " "
         << edad << endl;
}