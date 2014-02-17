#include "ListaBarajas.h"
#include <iostream>
using namespace std;
#include "Carta.h"
ListaBarajas::ListaBarajas()
{
     this->cont=0;
     inicio=NULL;
}

bool ListaBarajas::insertar(int pos, NodoBaraja*nodo)
{
    if(pos<0  || pos>cont )
            return false;

        if(pos==0)
        {
           NodoBaraja*tem=inicio;
           nodo->siguiente=tem;
           inicio=nodo;
        }
        else
        {
           int i=0;
            NodoBaraja*tem=inicio;
            while(i!=pos-1){
                tem=tem->siguiente;
                i++;
            }
            nodo->siguiente=tem->siguiente;
            tem->siguiente=nodo;
        }
        cont++;
        return true;
}
NodoBaraja *ListaBarajas::fin()
{
    return recuperar(cont-1);
}
NodoBaraja *ListaBarajas::siguiente(int pos)
{
    if(pos>=cont-1 || pos<0)
         return NULL;

    return recuperar(pos)->siguiente;
}
NodoBaraja *ListaBarajas::recuperar(int pos)
{
    if(pos>=cont || pos<0)
           return NULL;
       int i=0;

          NodoBaraja *tem=inicio;
           while(i!=pos){
               tem=tem->siguiente;
               i++;
           }
           return tem;
}
bool ListaBarajas::eliminar(int pos)
{
    if(pos<0 || pos>=cont)
            return false;
        if(pos==0)
        {
            NodoBaraja *temp=inicio;
            inicio=temp->siguiente;
        }
        else
        {
            NodoBaraja *temp=recuperar(pos);
            if(temp!=NULL)
            {
               NodoBaraja *temp2=recuperar(pos-1);
               temp2->siguiente=temp->siguiente;
            }
        }
        cont--;
        return true;
}
bool ListaBarajas::mover(int to, int from)
{
    NodoBaraja *temp=recuperar(from);

       if(temp!=NULL)
       {
           if(eliminar(from))
             if(insertar(to,temp))
                return true;
       }

       return false;
}
void ListaBarajas::imprimir()
{
    cout<<"Lista"<<cont<<endl;
      NodoBaraja*tem=inicio;
      for(int i=0;i<cont;i++){
        cout<<tem->carta->ObtenerColor()<<tem->carta->ObtenerTipo()<<tem->carta->Obtenernumero()<<endl  ;
        tem=tem->siguiente;
      }
}
void ListaBarajas::generarCartas()
{
    Lista[0]= "D2.png";
    Lista[1]= "D2.png";
    Lista[2]= "D3.png";
    Lista[3]= "D4.png";
    Lista[4]= "D5.png";
    Lista[5]= "D6.png";
    Lista[6]= "D7.png";
    Lista[7]= "D8.png";
    Lista[8]= "D9.png";
    Lista[9]= "D10.png";
    Lista[10]= "D11.png";
    Lista[11]= "D12.png";
    Lista[12]= "D13.png";
    Lista[13]= "T1.png";
    Lista[14]= "T2.png";
    Lista[15]= "T3.png";
    Lista[16]= "T4.png";
    Lista[17]= "T5.png";
    Lista[18]= "T6.png";
    Lista[19]= "T7.png";
    Lista[20]= "T8.png";
    Lista[21]= "T9.png";
    Lista[22]= "T10.png";
    Lista[23]= "T11.png";
    Lista[24]= "T12.png";
    Lista[25]= "T13.png";
    Lista[26]= "E1.png";
    Lista[27]= "E2.png";
    Lista[28]= "E3.png";
    Lista[29]= "E4.png";
    Lista[30]= "E5.png";
    Lista[31]= "E6.png";
    Lista[32]= "E7.png";
    Lista[33]= "E8.png";
    Lista[34]= "E9.png";
    Lista[35]= "E10.png";
    Lista[36]= "E11.png";
    Lista[37]= "E12.png";
    Lista[38]= "E13.png";
    Lista[39]= "C1.png";
    Lista[40]= "C2.png";
    Lista[41]= "C3.png";
    Lista[42]= "C4.png";
    Lista[43]= "C5.png";
    Lista[44]= "C6.png";
    Lista[45]= "C7.png";
    Lista[46]= "C8.png";
    Lista[47]= "C9.png";
    Lista[48]= "C10.png";
    Lista[49]= "C11.png";
    Lista[50]= "C12.png";
    Lista[51]= "C13.png";

    for(int i=0;i<13;i++)
    {
        NodoBaraja *d=new NodoBaraja(i,0,1,Lista[i]);// los numeros son el numero de cartas van ordenas desde la A = 1 hasta la K = 13 y al igual los colores 0 Rojo 1 Negro
        insertar(i,d);
    }
    for(int i=0;i<13;i++)
    {
        NodoBaraja *t=new NodoBaraja(i,1,2,Lista[i]);//el tipo es 1 = diamante 2 trebol 3 espada 4 corazones
        insertar(i+13,t);
    }
    for(int i=0;i<13;i++)
    {
        NodoBaraja *e = new NodoBaraja(i,1,3,Lista[i]);
        insertar(i+26,e);
    }
    for(int i=0;i<13;i++)
    {
        NodoBaraja *c = new NodoBaraja(i,0,4,Lista[0]);
        insertar(i+39,c);
    }
}
ListaBarajas::~ListaBarajas()
{
    //dtor
}
