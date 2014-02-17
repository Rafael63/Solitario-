#ifndef LISTABARAJAS_H
#define LISTABARAJAS_H
#include "NodoBaraja.h"
#include <iostream>
#include "Carta.h"
using namespace std;
class ListaBarajas
{
public:
    ListaBarajas();
    string Lista[52];
    NodoBaraja*inicio;
    void addNodo(NodoBaraja*nodo);
    void generarBaraja();
    bool insertar(int pos,NodoBaraja*nodo);
    NodoBaraja*siguiente(int pos);
    NodoBaraja*recuperar(int pos);
    bool eliminar(int pos);
    bool mover(int hasta, int de);
    NodoBaraja*fin();
    void imprimir();
    void generarCartas();
    int cont;
    virtual ~ListaBarajas();
protected:
private:
};

#endif // LISTABARAJAS_H
