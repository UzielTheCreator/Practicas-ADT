#ifndef CLASE_H
#define CLASE_H

class Clase {
private:
    int valor;
    int peso;

    int* direcE[100];
    char* direcC[100];
    Clase* direcO[100];

public:
    Clase();
    Clase(int v, int p);
    ~Clase();
    
    void mostrar();

    void QuickSortEnteros(int arr[], int ini, int fin);
    void QuickSortCaracteres(char arr[], int ini, int fin);
    void QuickSortObjetos(Clase arr[], int ini, int fin);

    void mostrarEnteros(int arr[], int n, bool indirecto);
    void mostrarCaracteres(char arr[], int n, bool indirecto);
    void mostrarObjetos(Clase arr[], int n, bool indirecto);

    void inicializarEnteros(int arr[], int n);
    void inicializarCaracteres(char arr[], int n);
    void inicializarObjetos(Clase arr[], int n);
};

#endif