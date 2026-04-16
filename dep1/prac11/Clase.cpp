#include "Clase.h"

Clase::Clase(){}
Clase::~Clase(){}

void Clase::leerA(){

    cout << "Matriz A\n";

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
}

void Clase::leerB(){

    cout << "\nMatriz B\n";

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }
}

void Clase::multConstante(int k){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            C[i][j] = A[i][j] * k;
        }
    }
}

void Clase::multMatrices(){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

            C[i][j] = 0;

            for(int k=0;k<3;k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void Clase::mostrarA(){

    cout << "\nMatriz A\n";

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

void Clase::mostrarB(){

    cout << "\nMatriz B\n";

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
}

void Clase::mostrarC(){

    cout << "\nResultado\n";

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}