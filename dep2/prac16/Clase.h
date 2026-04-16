#ifndef CLASE_H
#define CLASE_H

class Clase {
private:
    int valor;
    int peso;

public:
    Clase();
    Clase(int v, int p);

    void setDatos(int v, int p);
    void mostrar();

    void ordenarEnteros(int arr[], int n);
    void ordenarCaracteres(char arr[], int n);
    void ordenarObjetos(Clase arr[], int n);

    void mostrarEnteros(int arr[], int n);
    void mostrarCaracteres(char arr[], int n);
    void mostrarObjetos(Clase arr[], int n);
};

#endif