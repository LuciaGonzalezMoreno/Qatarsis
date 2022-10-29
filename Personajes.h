#ifndef PERSONAJES_H
#define PERSONAJES_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Figurita.h"
#include "Objeto.h"
#include "Repetida.h"


class Personajes : public Objeto, public sf::Drawable
{

/// Funciones que personaje principal no deberia heredar
///void setParlamentos ();
///void Hablar(int codigodeparlamento);

private:

    sf::Sprite _spritepersonajes;
    sf::Texture _texturapersonajes;
    Objeto *_objetos[3];
    Figurita *_figuritas[6];
    Repetida *_repetidas[3];

public:

    Objeto *getpunteroobjetos(int codigodeobjeto);
    Figurita *getpunterofiguritas(int codigofiguritas);
    Repetida *getpunterorepetidas(int codigorepetidas);

    void inicializarpunteros();

    Personajes();
    void update();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    virtual ~Personajes();

    void solucionarobjeto(int codigo);
    void addFigurita(Figurita *Vector,int codigojugador);
    void addRepetida(Repetida *Vector,int codigojugador);
    void addobjeto(Objeto *Vector, int codigoobjeto);
    void darobjeto(Personajes *personaje, int codigoobjeto);
    void darfigurita(int codigodejugador, Personajes *Vectorpersonajes, int codigodepersonaje);
    void darfigurita(int codigodejugador, Personajes *pipo);
    int getpelota();
    int getcamiseta();
    int getautografo();

};

#endif // PERSONAJES_H
