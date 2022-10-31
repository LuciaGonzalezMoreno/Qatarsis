#include "Personajes.h"

Personajes::Personajes()   { inicializarpunteros();}

///	Funciones

void Personajes::inicializarpunteros(){}

void Personajes::update(){}

/// Acciones

// ADDS

<<<<<<< Updated upstream
void Personajes::inicializarpunteros()
{

=======
void Personajes::addFigurita(Figurita *figuritajugador){

    _figuritas[figuritajugador->getcodigodefigurita()]=true;
>>>>>>> Stashed changes

    }
<<<<<<< Updated upstream
    for (int i=0; i<3; i++)
    {
        _objetos[i]=nullptr;
        _repetidas[i]=nullptr;
=======

void Personajes::addRepetida(Repetida *figuritarepetida){

    _figuritas[figuritarepetida->getcodigodefigurita()]=true;
>>>>>>> Stashed changes
    }

void Personajes::addobjeto(Objeto *objeto){

    _objetos[objeto->getcodigoobjeto()]=true;
}

<<<<<<< Updated upstream

void Personajes::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
=======
// Dar
>>>>>>> Stashed changes

void Personajes::darfiguritaapipo(Figurita *figurita, Personajes *personaje){

<<<<<<< Updated upstream
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
=======
personaje->addFigurita(figurita);
figurita->Pegar();
}

void Personajes::darfigurita(Figurita *figurita, Personajes *personaje){

 personaje->addFigurita(figurita);
_figuritas[figurita->getcodigodefigurita()]=true;

}

void Personajes::darobjeto(Objeto *objeto, Personajes *personaje){

personaje->addobjeto(objeto);
_objetos[objeto->getcodigoobjeto()]=false;

}

// Solucionar

void Personajes::solucionarobjeto(Objeto *objeto){

objeto->solucionado();
}


///	Sprites y draw

void Personajes::setsprite(std::string nombredearchivo){
    _texturapersonajes.loadFromFile(nombredearchivo);
    _spritepersonajes.setTexture(_texturapersonajes);
>>>>>>> Stashed changes
}

void Personajes::draw(sf::RenderTarget& target, sf::RenderStates states) const{}

Personajes::~Personajes(){}


