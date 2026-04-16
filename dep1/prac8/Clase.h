#ifndef CLASE_H
#define CLASE_H

class Clase{
private:
    float n1, n2, n3, n4, n5;

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
