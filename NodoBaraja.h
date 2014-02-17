#ifndef NODOBARAJA_H
#define NODOBARAJA_H
#include "Carta.h"
#include <iostream>
#include <string>
using namespace std;
class NodoBaraja
{
public:
    NodoBaraja(int numero,int color, int tipo,string path);
    NodoBaraja*siguiente;
    Carta*carta;
    virtual ~NodoBaraja();
protected:
private:
};

#endif // NODOBARAJA_H
