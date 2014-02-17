#ifndef ORDENAMIENTO_H
#define ORDENAMIENTO_H
#include "ListaBarajas.h"
#include "Mazos.h"
#include <stdlib.h>
#include <time.h>
class Ordenamiento
{
    public:
        Ordenamiento();
         ListaBarajas mazo;


        Mazos primera;
        Mazos segunda;
        Mazos tercera;
        Mazos cuarto;
        Mazos quinta;
        Mazos sexta;
        Mazos septima;
        void Ordenar();

        virtual ~Ordenamiento();
    protected:
    private:
};

#endif // ORDENAMIENTO_H
