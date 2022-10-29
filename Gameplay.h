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
#include "Avatar.h"
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
    Paneldecontrol _paneldecontrol;
    Mapa _mapa;
    Protagonista _pipo;
    Personajes _personajessecundarios[7];
    ///Panedecontrol _paneldecontrol;
    ///Panellateral deberia estar en Ranking _rankingactual;
    Objeto _objetos[3];
    Figurita _figuritas[6];
    Repetida _repetidas[3];
    Avatar _avatar;
    sf::Clock _reloj1;
    sf::Time _tiempo1;

public:

    ///CONSTRUCTOR-DESTRUCTOR
    Gameplay();
    virtual ~Gameplay();
    Protagonista *getpipo(); /// Devuelve direccion de memoria Protagonista

    int getpelota(),getcamiseta(),getautografo();///OBJETOS
    int getMessi(),getDibu(),getDepaul(),getDimaria(),getAlvarez(),getJugador6(); /// SELECCION
    int getsuarez(), getcristiano(), getneymar(); /// REPETIDAS
    int getbicicletero(),getkiosquera(), getpersonaje3();
    void intercambios();
    void repartirobjetos();
    void inicializarfiguritas();
///void inicializarranking(ranking archivoranking);
    void update();
    sf::FloatRect getBound() const;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    void checkearcolisiones();
    void limitesdelmapa();
};
#endif // GAMEPLAY_H
