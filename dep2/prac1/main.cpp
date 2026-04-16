// practica 12: partiendo del ejercicio 7, para generar lista de personas y coches
// practica 12: lista indirecta con punteros al mismo tipo

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

    for(int i=0;i<2;i++){
        autos[i].setSig(&autos[i+1]);
        personas[i].setSig(&personas[i+1]);
    }

    autos[2].setSig(NULL);
    personas[2].setSig(NULL);
    cout << "\nAUTOS REGISTRADOS (INDIRECTO)\n";

    Auto* auxA = &autos[0];

    while(auxA != NULL){
        auxA->mostrar();
        auxA = auxA->getSig();
    }

    cout << "\nPERSONAS REGISTRADAS (INDIRECTO)\n";

    Persona* auxP = &personas[0];

    while(auxP != NULL){
        auxP->mostrar();
        auxP = auxP->getSig();
    }

    return 0;
}