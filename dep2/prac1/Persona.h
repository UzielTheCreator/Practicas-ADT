#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona {
private:
    char nombre[30];
    char ap[30];
    char am[30];
    char genero;
    int edad;

    Persona* sig;

public:
    Persona();
    ~Persona();

    void leer();
    void mostrar();

    void setSig(Persona* s);
    Persona* getSig();
};

#endif