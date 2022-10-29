#include "Personajes.h"

Personajes::Personajes()
{
    inicializarpunteros();
}

void Personajes::inicializarpunteros()
{


    for (int i=0; i<6; i++)
    {
        _figuritas[i]=nullptr;
    }
    for (int i=0; i<3; i++)
    {
        _objetos[i]=nullptr;
        _repetidas[i]=nullptr;
    }
}

void Personajes::update()
{

}


void Personajes::draw(sf::RenderTarget& target, sf::RenderStates states) const
{

}

void Personajes::addobjeto(Objeto *Vector, int codigo)
{
   _objetos[codigo]=Vector;
}

    Objeto *Personajes::getpunteroobjetos(int codigodeobjeto){

    return _objetos[codigodeobjeto];

    }

    Figurita *Personajes::getpunterofiguritas(int codigofiguritas){

    return _figuritas[codigofiguritas];
    }
    Repetida *Personajes::getpunterorepetidas(int codigorepetidas){

    return _repetidas[codigorepetidas];
    }


void Personajes::darobjeto(Personajes *personaje, int codigoobjeto)
{
    if (_objetos[codigoobjeto]==nullptr){std::cout << "El personaje no tiene el objeto" << std::endl;}
    Objeto *punteroauxiliar=_objetos[codigoobjeto];
    personaje->addobjeto(punteroauxiliar,codigoobjeto);
   _objetos[codigoobjeto]=nullptr;
}


void Personajes::addFigurita(Figurita *figurita,int jugador){

_figuritas[jugador]=figurita;

}


void Personajes::darfigurita(int codigodejugador, Personajes Vectorpersonajes[], int codigodepersonaje){

if(_figuritas[codigodejugador]==nullptr){std::cout << "El personaje no tiene esa figurita" << std::endl;}
else{
Figurita *punteroauxiliar=_figuritas[codigodejugador];
Vectorpersonajes[codigodepersonaje].addFigurita(punteroauxiliar,codigodejugador);
_figuritas[codigodejugador]=nullptr;
}
}

void Personajes::darfigurita(int codigodejugador, Personajes *pipo){

if(_figuritas[codigodejugador]==nullptr){std::cout << "El personaje no tiene esa figurita" << std::endl;}
else{

Figurita *punteroauxiliar=_figuritas[codigodejugador];
pipo->addFigurita(punteroauxiliar,codigodejugador);

_figuritas[codigodejugador]=nullptr;
}

}


void Personajes::solucionarobjeto(int codigo)
{
    if(_objetos[codigo]==nullptr){ std::cout << "Este personaje no tiene la pelota" << std::endl;}
    else
    {
        _objetos[codigo]->solucionar();
    }
}


    int getpelota(){  return 0; }
    int getcamiseta(){return 1;   }
    int getautografo(){  return 2; }
Personajes::~Personajes()
{
    //dtor
}

