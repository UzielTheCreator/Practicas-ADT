#include "Clase.h"

int main(){

    Clase C;
    int n;

    cout << "Nivel de recursividad: ";
    cin >> n;

    cout << "\nTriangulo de Sierpinski\n";
    C.sierpinski(n);

    cout << "\nPolvo de Cantor\n";
    C.cantor(n, 81);

    return 0;
}