#include <iostream>
#include <windows.h>
#include "Interfaces/Estructura.h"
#include "Menu/Menu.h"

// arreglos
#include "Pila/PilaArreglo.h"
#include "Cola/ColaArreglo.h"
#include "Lista/ListaArreglo.h"

// punteros
#include "Pila/PilaPuntero.h"
#include "Cola/ColaPuntero.h"
#include "Lista/ListaPuntero.h"

// lista - STL
#include "Pila/PilaLib.h"
#include "Cola/ColaLib.h"
#include "Lista/ListaLib.h"

using namespace std;

// ------------------------------
// g++ main.cpp Base/*.cpp Pila/*.cpp Cola/*.cpp Lista/*.cpp Menu/*.cpp -o main

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int tipo, opcion;

    do {
        cout << "\n*** tipo d implementacion ***\n";
        cout << "1. Arreglo\n";
        cout << "2. Puntero\n";
        cout << "3. Libreria - STL\n";
        cout << "0. Salir\n";
        cout << "Opcion: ";
        cin >> tipo;

        if (tipo == 0) break;

        cout << "\n*** estructura ***\n";
        cout << "1. Pila\n";
        cout << "2. Cola\n";
        cout << "3. Lista\n";
        cout << "Opcion: ";
        cin >> opcion;

        Estructura* e = nullptr;

        // ----------- arreglo -----------
        if (tipo == 1) {
            switch(opcion) {
                case 1: e = new PilaArreglo(50); break;
                case 2: e = new ColaArreglo(50); break;
                case 3: e = new ListaArreglo(50); break;
            }
        }

        // ----------- puntero -----------
        else if (tipo == 2) {
            switch(opcion) {
                case 1: e = new PilaPuntero(); break;
                case 2: e = new ColaPuntero(); break;
                case 3: e = new ListaPuntero(); break;
            }
        }

        // ----------- libreria -----------
        else if (tipo == 3) {
            switch(opcion) {
                case 1: e = new PilaLib(); break;
                case 2: e = new ColaLib(); break;
                case 3: e = new ListaLib(); break;
            }
        }

        // ----------- ejecucion xd -----------
        if (e != nullptr) {
            menuEstructura(e);
            delete e;
        }

    } while(true);

    return 0;
}