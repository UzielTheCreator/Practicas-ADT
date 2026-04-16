#ifndef CLASE_H
#define CLASE_H

class Clase {
private:
    int valor;
    int peso;

    int* direcE[20];
    char* direcC[20];
    Clase* direcO[20];

public:
    Clase();
    Clase(int v, int p);

    void mostrar();

    void inicializarEnteros(int arr[], int n);
    void inicializarCaracteres(char arr[], int n);
    void inicializarObjetos(Clase arr[], int n);

    void mergeEnteros(int arr[], int ini, int mid, int fin);
    void mergeSortEnteros(int arr[], int ini, int fin);

    void mergeCaracteres(char arr[], int ini, int mid, int fin);
    void mergeSortCaracteres(char arr[], int ini, int fin);

    void mergeObjetos(Clase arr[], int ini, int mid, int fin);
    void mergeSortObjetos(Clase arr[], int ini, int fin);

    void mostrarEnteros(int arr[], int n, bool indirecto);
    void mostrarCaracteres(char arr[], int n, bool indirecto);
    void mostrarObjetos(Clase arr[], int n, bool indirecto);
};

#endif