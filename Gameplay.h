#ifndef GAMEPLAY_H
#define GAMEPLAY_H
#include "Panellateral.h"
#include "Protagonista.h"
#include "Mapa.h"
#include "Personajes.h"
#include "Cuadras.h"
#include "Casas.h"
#include "Objeto.h"
#include "Figurita.h"
#include "Repetida.h"
#include"Avatar.h"
#include <SFML/Graphics.hpp>
#include  <iostream>

using namespace std;

class Gameplay : public sf::Drawable
{
private:

    sf::Sprite _spritefondo;
    sf::Texture _texturafondo;
    sf::Sprite _spriteRio;
    sf::Texture _texturaRio;

    Mapa _mapa;
    Protagonista _pipo;
    Personajes _personajessecundarios[7];

    ///    Panedecontrol _paneldecontrol;
    Panellateral _panellateral; /// Panel lateral deberia estar en Ranking _rankingactual;

    Objeto _pelota;
    Objeto _camiseta;
    Objeto _autografo;
    Figurita _figuritas[6];
    Repetida _repetidas[3];

    Avatar _avatar;

    sf::Clock _reloj1;
    sf::Time _tiempo1;

    bool _estaActivo;
    bool _comienzaJuego;

public:

    ///CONSTRUCTOR-DESTRUCTOR
    Gameplay();
    virtual ~Gameplay();
    Protagonista *getpipo(); /// Devuelve direccion de memoria Protagonista
    Objeto *getpelota();/// Devuelve direccion de memoria Pelota
    int getcodigobicicletero();
    int getcodigokiosquera();
    int getcodigomessi();
    int getcodigopersonajepelota();
    void intercambios();
    void repartirobjetos();
    void inicializarfiguritas();
///void inicializarranking(ranking archivoranking);
    void update();
    sf::FloatRect getBound() const;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
<<<<<<< Updated upstream
    void checkearcolisiones();
    void limitesdelmapa();
=======

    void set_estaActivo(bool op){_estaActivo = op;}
    bool get_estaActivo(){return _estaActivo;}

    virtual ~Gameplay();
>>>>>>> Stashed changes
};
#endif // GAMEPLAY_H
