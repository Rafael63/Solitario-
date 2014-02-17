#include "Carta.h"
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
Carta::Carta(int numero, int color, int tipo,string path)
{
   this->numero = numero;
   this->color = color;
   this->tipo = tipo;
   this->Estado = false;
   this->image = IMG_Load("foo.png");
   this->Volteada= path;// esta variable sera para saber como esta la carta al estar true ya que esta en un ciclo validara y mandara el path a una funcion
}
//

int Carta:: Obtenernumero(){
  return this->numero;
}
int Carta :: ObtenerColor(){
  return this->color;
}
int Carta :: ObtenerTipo(){
  return this->tipo;
}
void Carta:: SetImageCarta(string path){
   this->image = IMG_Load(path.c_str());
}

void Carta:: setEstado(bool estado){
 this->Estado = true;

}
void Carta :: ValidacionDelado(){

if(Estado = true){
this->SetImageCarta(Volteada);
}


}
Carta::~Carta()
{
    //dtor
}
