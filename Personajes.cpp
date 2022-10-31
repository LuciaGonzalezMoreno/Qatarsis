#include "Personajes.h"

Personajes::Personajes()   { inicializarpunteros();}

///	Funciones

void Personajes::inicializarpunteros(){}

void Personajes::update(){}

/// Acciones

// ADDS

void Personajes::addFigurita(Figurita *figuritajugador){

    _figuritas[figuritajugador->getcodigodefigurita()]=true;

    }

void Personajes::addRepetida(Repetida *figuritarepetida){

    _figuritas[figuritarepetida->getcodigodefigurita()]=true;

    }

void Personajes::addobjeto(Objeto *objeto){

    _objetos[objeto->getcodigoobjeto()]=true;
}


// Dar


void Personajes::darfiguritaapipo(Figurita *figurita, Personajes *personaje){

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

}

void Personajes::draw(sf::RenderTarget& target, sf::RenderStates states) const{}

Personajes::~Personajes(){}


