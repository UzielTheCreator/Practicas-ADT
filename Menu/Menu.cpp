#include <iostream>
#include "Menu.h"

// arreglos
#include "../Pila/PilaArreglo.h"
#include "../Cola/ColaArreglo.h"
#include "../Lista/ListaArreglo.h"

// punteros
#include "../Pila/PilaPuntero.h"
#include "../Cola/ColaPuntero.h"
#include "../Lista/ListaPuntero.h"

// STL
#include "../Pila/PilaLib.h"
#include "../Cola/ColaLib.h"
#include "../Lista/ListaLib.h"

using namespace std;

// ------------------------------

void mostrarMenu(Estructura* e) {
    cout << "\n*** operaciones ***\n";
    cout << "1. Insertar\n";
    cout << "2. Eliminar\n";
    cout << "3. Mostrar\n";

    // pila extra
    if (dynamic_cast<PilaArreglo*>(e) || dynamic_cast<PilaPuntero*>(e) || dynamic_cast<PilaLib*>(e)) {
        cout << "4. Top\n";
    }
    // cola extra
    else if (dynamic_cast<ColaArreglo*>(e) || dynamic_cast<ColaPuntero*>(e) || dynamic_cast<ColaLib*>(e)) {
        cout << "4. Front\n";
    }
    // lista extra
    else if (dynamic_cast<ListaArreglo*>(e) || dynamic_cast<ListaPuntero*>(e) || dynamic_cast<ListaLib*>(e)) {
        cout << "4. Insertar en posicion\n";
        cout << "5. Eliminar en posicion\n";
    }

    cout << "0. Regresar\n";
}

// ------------------------------

void ejecutarOperacion(Estructura* e, int op) {
    int num, pos;

    // pila extra
    PilaArreglo* pa = dynamic_cast<PilaArreglo*>(e);
    PilaPuntero* pp = dynamic_cast<PilaPuntero*>(e);
    PilaLib* pl = dynamic_cast<PilaLib*>(e);

    // cola extra
    ColaArreglo* ca = dynamic_cast<ColaArreglo*>(e);
    ColaPuntero* cp = dynamic_cast<ColaPuntero*>(e);
    ColaLib* cl = dynamic_cast<ColaLib*>(e);

    // lista extra
    ListaArreglo* la = dynamic_cast<ListaArreglo*>(e);
    ListaPuntero* lp = dynamic_cast<ListaPuntero*>(e);
    ListaLib* ll = dynamic_cast<ListaLib*>(e);

    switch(op) {
        case 1:
            cout << "Numero: ";
            cin >> num;
            e->insertar(num);
            break;

        case 2:
            e->eliminar();
            break;

        case 3:
            e->mostrar();
            break;

        case 4:
            // pila extra
            if (pa || pp || pl) {
                if (pa) cout << "top: " << pa->top() << endl;
                else if (pp) cout << "top: " << pp->top() << endl;
                else if (pl) cout << "top: " << pl->top() << endl;
            }
            // cola extra
            else if (ca || cp || cl) {
                if (ca) cout << "front: " << ca->front() << endl;
                else if (cp) cout << "front: " << cp->front() << endl;
                else if (cl) cout << "front: " << cl->front() << endl;
            } 
            // lista extra
            else if (la || lp || ll) {
                cout << "Posicion: ";
                cin >> pos;
                cout << "Numero: ";
                cin >> num;

                if (la) la->insertarEn(pos, num);
                else if (lp) lp->insertarEn(pos, num);
                else if (ll) ll->insertarEn(pos, num);
            }
            break;

        case 5:
            if (la || lp || ll) {
                cout << "Posicion: ";
                cin >> pos;

                if (la) la->eliminarEn(pos);
                else if (lp) lp->eliminarEn(pos);
                else if (ll) ll->eliminarEn(pos);
            }
            break;
    }
}

// ------------------------------

void menuEstructura(Estructura* e) {
    int op;

    do {
        mostrarMenu(e);

        cout << "Opcion: ";
        cin >> op;

        ejecutarOperacion(e, op);

    } while(op != 0);
}