// practica 12: partiendo del ejercicio 7, para generar lista de personas y coches

#include <iostream>
#include "Auto.h"
#include "Persona.h"

using namespace std;

int main(){

    Auto autos[3];
    Persona personas[3];

    cout << "LISTA DE AUTOS\n";

    for(int i=0;i<3;i++){
        cout << "\nAuto " << i+1 << endl;
        autos[i].leer();
    }


    cout << "\nLISTA DE PERSONAS\n";

    for(int i=0;i<3;i++){
        cout << "\nPersona " << i+1 << endl;
        personas[i].leer();
    }


    cout << "\nAUTOS REGISTRADOS\n";

    for(int i=0;i<3;i++){
        autos[i].mostrar();
    }


    cout << "\nPERSONAS REGISTRADAS\n";

    for(int i=0;i<3;i++){
        personas[i].mostrar();
    }

    return 0;
}