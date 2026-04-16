#include <iostream>
#include "Datos.h"

using namespace std;

struct DatosE{
    int a[4];
    char c[30];
};

int main(int argc, char const *argv[]){

    Datos d = Datos();
    DatosE eles[5];
    Datos eD[5];

    d.Saludo();

    int *p;
    int cs[4];
    int v = 0;

    cin >> v;

    for (int i = 0; i < 4; i++){
        cin >> cs[i];
        cout << "valor: " << cs[i] << " direccion: " << &cs[i] << endl;
    }

    p = &v;
    cout << "valor: " << p << " direccion: " << &p << " contendido hacia donde apunta " << *p << endl;

    p = cs;
    
    cout << "valor: " << p << " direccion: " << &p << " contendido hacia donde apunta " << *p << endl;
     
    return 0;
}
