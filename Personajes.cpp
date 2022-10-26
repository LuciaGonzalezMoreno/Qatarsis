#include "Personajes.h"

Personajes::Personajes()
{
    inicializarpunteros();
}

void Personajes::inicializarpunteros()
{
    _pelota=nullptr;
    _camiseta=nullptr;
    _autografo=nullptr;

    for (int i=0; i<6; i++)
    {
        _figuritas[i]=nullptr;
    }
    for (int i=0; i<3; i++)
    {
        _repetidas[i]=nullptr;
    }
}

void Personajes::update()
{

}

sf::FloatRect Personajes::getBound() const {}
void Personajes::draw(sf::RenderTarget& target, sf::RenderStates states) const
{

}

void Personajes::addpelota(Objeto *pelota)
{
    _pelota=pelota;
}

void Personajes::addcamiseta(Objeto *camiseta)
{
    _camiseta=camiseta;
}

void Personajes::addautografo(Objeto *autografo)
{
    _autografo=autografo;
}

void Personajes::darpelota(Objeto *pelota, Personajes *personaje)
{
    _pelota=nullptr;
    personaje->addpelota(pelota);
}

void Personajes::darcamiseta(Objeto *camiseta, Personajes *personaje)
{
    _camiseta=nullptr;

    personaje->addcamiseta(camiseta);
}
void Personajes::darautografo(Objeto *autografo, Personajes *personaje)
{
    _autografo=nullptr;

    personaje->addautografo(autografo);
}

void Personajes::addFigurita(Figurita *figurita,int codigo)
{
    *_figuritas[codigo]=figurita[codigo];
}

void Personajes::addRepetida(Repetida *repetida,int codigo)
{
    * _repetidas[codigo]=repetida[codigo];
}

void Personajes::solucionarpelota()
{
    if(_pelota==nullptr)
    {
        std::cout << "Este personaje no tiene la pelota" << std::endl;
    }
    else
    {
        _pelota->solucionado();
    }
}

Personajes::~Personajes()
{
    //dtor
}

