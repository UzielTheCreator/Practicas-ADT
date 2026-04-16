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

    void setDatos(int v, int p);
    void mostrar();

    // Ordenamiento indirecto
    void ordenarEnteros(int arr[], int n);
    void ordenarCaracteres(char arr[], int n);
    void ordenarObjetos(Clase arr[], int n);

    // Mostrar
    void mostrarEnteros(int arr[], int n, bool indirecto);
    void mostrarCaracteres(char arr[], int n, bool indirecto);
    void mostrarObjetos(Clase arr[], int n, bool indirecto);
};

#endif