#include "NodoBaraja.h"

NodoBaraja::NodoBaraja(int numero, int color,int tipo,string path)

{
    this->carta = new Carta(numero,color,tipo,path);
    this->siguiente = NULL;
}

NodoBaraja::~NodoBaraja()
{
    //dtor
}
