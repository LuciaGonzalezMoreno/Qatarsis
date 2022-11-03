#ifndef GAMEPLAY_H
#define GAMEPLAY_H
#include "Paneldecontrol.h"
#include "Protagonista.h"
#include "Mapa.h"
#include "Personajes.h"
#include "Cuadras.h"
#include "Casas.h"
#include "Objeto.h"
#include "Figurita.h"
#include "Repetida.h"
#include <SFML/Graphics.hpp>
#include  <iostream>

using namespace std;

class Gameplay : public sf::Drawable
{
private:

    /// Sprites
    sf::Sprite _spritefondo;
    sf::Texture _texturafondo;
    sf::Sprite _spriteRio;
    sf::Texture _texturaRio;

    /// Propiedades

    Mapa _mapa;

    Paneldecontrol _paneldecontrol;
    Personajes _personajes[5];
    Figurita _figuritas[6];
    Repetida _repetidas[3];
    Protagonista _pipo;
    //Ranking

    /// Alias

    Protagonista *Pipo=&_pipo;
    Objeto _objetos[3];
    Objeto *Pelota=_objetos;
    Objeto *Camiseta=&_objetos[1];
    Personajes *Kioskera=&_personajes[3];
    Figurita *Figuritamessi=_figuritas;
    Figurita *Figuritaalvarez=&_figuritas[1];
    Figurita *Figuritadepaul=&_figuritas[2];
    Figurita *Figuritadimaria=&_figuritas[3];
    Figurita *Figuritadibu=&_figuritas[4];
    Figurita *Figuritalautaro=&_figuritas[5];



    sf::Clock _reloj1;
    sf::Time _tiempo1;

public:

    Gameplay();

    /// Funciones

    void inicializarobjetos();
    void repartirobjetos();
    void inicializarfiguritas();
    void inicializarpersonajes();
    ///void inicializarranking(ranking archivoranking);
    void update();

    /// Jugabilidad

    void Chequearimpresiones();
    void Objetivos();
    void intercambios();
    void checkearcolisiones();
    void limitesdelmapa();

    /// Sprites y Draw

    sf::FloatRect getBound() const;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    virtual ~Gameplay();
};
#endif // GAMEPLAY_H
