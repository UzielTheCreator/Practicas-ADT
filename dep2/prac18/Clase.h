#ifndef CLASE_H
#define CLASE_H

class Clase {
private:
    int valor;
    int peso;

public:
    Clase();
    Clase(int v, int p);
    ~Clase();
    
    void mostrar();

    void QuickSortEnteros(int arr[], int ini, int fin);
    void QuickSortCaracteres(char arr[], int ini, int fin);
    void QuickSortObjetos(Clase arr[], int ini, int fin);

    void mostrarEnteros(int arr[], int n);
    void mostrarCaracteres(char arr[], int n);
    void mostrarObjetos(Clase arr[], int n);
};

#endif