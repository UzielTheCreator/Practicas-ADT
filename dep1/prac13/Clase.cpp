#include <iostream>
#include "Clase.h"

using namespace std;

Clase::Clase(){

    cout << "\npersonas\n";

    Persona *p = personas;

    for(int i=0;i<3;i++){
        cout << "\nPersona " << i+1 << endl;
        p->leer();
        p++;
    }

    cout << "\npersonas registradas\n";

    p = personas;

    for(int i=0;i<3;i++){
        p->mostrar();
        p++;
    }
}