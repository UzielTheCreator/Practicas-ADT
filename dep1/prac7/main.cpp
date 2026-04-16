// Practica 7: crear un nuevo tipo de dato en pe y poo (auto) (precio y anio)
//             crear una persona que contenga la siguiente información (nombre, ap, am, genero, edad) en PE y POO
// Practica 7 bits

#include <iostream>
#include "Auto.h"
#include "Persona.h"

using namespace std;

// NUEVOS TIPOS DE DATO (PE)
struct AutoPE{
    float precio;
    int anio;
};

struct PersonaPE{
    char nombre[30];
    char ap[30];
    char am[30];
    char genero;
    int edad;
};


int main(){

    // PROGRAMACION ESTRUCTURADA
    AutoPE a1;
    PersonaPE p1;

    cout << "PE: DATOS DEL AUTO\n";
    cout << "Precio: ";
    cin >> a1.precio;

    cout << "Anio: ";
    cin >> a1.anio;


    cout << "\nPE: DATOS DE LA PERSONA\n";

    cout << "Nombre: ";
    cin >> p1.nombre;

    cout << "Apellido paterno: ";
    cin >> p1.ap;

    cout << "Apellido materno: ";
    cin >> p1.am;

    cout << "Genero: ";
    cin >> p1.genero;

    cout << "Edad: ";
    cin >> p1.edad;


    cout << "\nRESULTADOS PE\n";

    cout << "Auto -> Precio: " << a1.precio
         << " Anio: " << a1.anio << endl;

    cout << "Persona -> "
         << p1.nombre << " "
         << p1.ap << " "
         << p1.am << " "
         << p1.genero << " "
         << p1.edad << endl;



    // PROGRAMACION ORIENTADA A OBJETOS
    Auto a2;
    Persona p2;

    cout << "\nPOO: DATOS DEL AUTO\n";
    a2.leer();

    cout << "\nPOO: DATOS DE LA PERSONA\n";
    p2.leer();

    cout << "\nRESULTADOS POO\n";

    a2.mostrar();
    p2.mostrar();


    cout << "\nTAMANOS DE DATOS\n";
    cout << "\nTipos basicos\n";
    cout << "bool: " << sizeof(bool) << " bytes" << endl;
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "short: " << sizeof(short) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;

    cout << "\nTipos creados en PE\n";
    cout << "AutoPE: " << sizeof(AutoPE) << " bytes" << endl;
    cout << "PersonaPE: " << sizeof(PersonaPE) << " bytes" << endl;

    cout << "\nTipos creados en POO\n";
    cout << "Auto: " << sizeof(Auto) << " bytes" << endl;
    cout << "Persona: " << sizeof(Persona) << " bytes" << endl;

    return 0;
}