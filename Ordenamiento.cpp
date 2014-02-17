#include "Ordenamiento.h"

Ordenamiento::Ordenamiento()
{


}


Ordenamiento::~Ordenamiento()
{
    //dtor
}
void Ordenamiento::Ordenar()
{
    srand (time(NULL));
    this->mazo.generarCartas();
    int random;



//Random
   for(int i=0;i<1;i++)
   {
    random = rand() % (mazo.cont);
    NodoBaraja *sel=mazo.recuperar(random);
    mazo.eliminar(random);
    primera.insertar(i,sel);
   }

   for(int i=0;i<2;i++)
   {
    random = rand() % (mazo.cont);
    NodoBaraja *sel=mazo.recuperar(random);
    mazo.eliminar(random);

    segunda.insertar(i,sel);
   }

   for(int i=0;i<3;i++)
   {
    random = rand() % (mazo.cont);
    NodoBaraja *sel=mazo.recuperar(random);
    mazo.eliminar(random);


    tercera.insertar(i,sel);
   }

   for(int i=0;i<4;i++)
   {
    random = rand() % (mazo.cont);
    NodoBaraja *sel=mazo.recuperar(random);
    mazo.eliminar(random);

    cuarto.insertar(i,sel);
   }

   for(int i=0;i<5;i++)
   {
    random = rand() % (mazo.cont);
    NodoBaraja *sel=mazo.recuperar(random);
    mazo.eliminar(random);
    quinta.insertar(i,sel);
   }

   for(int i=0;i<6;i++)
   {
    random = rand() % (mazo.cont);
    NodoBaraja*sel=mazo.recuperar(random);
    mazo.eliminar(random);

    sexta.insertar(i,sel);
   }

   for(int i=0;i<7;i++)
   {
    random = rand() % (mazo.cont);
    NodoBaraja *sel=mazo.recuperar(random);
    mazo.eliminar(random);

    septima.insertar(i,sel);
   }

   cout<<mazo.cont<<endl;

}
