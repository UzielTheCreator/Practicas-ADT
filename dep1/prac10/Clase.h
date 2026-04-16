#ifndef CLASE_H
#define CLASE_H

class Clase{

private:
    int numeros[5];

public:
    Clase();
    void ingresar();
    void ordenar();
    int suma();
    float promedio();
    int mediana();
    int maximo();
    int minimo();
    void mostrar();

};

#endif