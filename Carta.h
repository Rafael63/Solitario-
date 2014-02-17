#ifndef CARTA_H
#define CARTA_H
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <iostream>
#include <string>
using namespace std;
class Carta
{
    public:
        Carta(int numero,int color,int tipo,string path);
         int numero;
         int color; //el color se determinara por numero 0 o 1 el color de la baraja 0 rojo 1 negro
         int tipo; //El tipo se determinara por numero 1 trebol 2 Diamante 3 Corazones 4 Espada
         bool Estado;// si la carta se esta ocundoce o no
         SDL_Surface*image;
         string Volteada; // En este string guardere cuando la carta ya este visible
         int Obtenernumero();
         int ObtenerColor();
         int ObtenerTipo();
         bool ocupandoce();
         void ValidacionDelado();
         void SetImageCarta(string path);
         void setEstado(bool estado);
         SDL_Surface *load_image( std::string filename );
        virtual ~Carta();
    protected:
    private:
};

#endif // CARTA_H
