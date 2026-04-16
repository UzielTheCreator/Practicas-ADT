#ifndef CLASE_H
#define CLASE_H

class Clase{
private:
    float numeros[5];

public:
    Clase(/* args */);
    ~Clase();
    void leer();
    float suma();
    float promedio();
    float mediana();
    float maximo();
    float minimo();
    void mostrar();
};

#endif
