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

    void mergeEnteros(int arr[], int ini, int mid, int fin);
    void mergeSortEnteros(int arr[], int ini, int fin);

    void mergeCaracteres(char arr[], int ini, int mid, int fin);
    void mergeSortCaracteres(char arr[], int ini, int fin);

    void mergeObjetos(Clase arr[], int ini, int mid, int fin);
    void mergeSortObjetos(Clase arr[], int ini, int fin);

    void mostrarEnteros(int arr[], int n);
    void mostrarCaracteres(char arr[], int n);
    void mostrarObjetos(Clase arr[], int n);
};

#endif