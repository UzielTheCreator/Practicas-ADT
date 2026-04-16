#include "Persona.h"

Persona::Persona(){}

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