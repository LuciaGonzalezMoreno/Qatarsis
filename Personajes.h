#ifndef PERSONAJES_H
#define PERSONAJES_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Figurita.h"
#include "Objeto.h"
#include "Repetida.h"

class Personajes : public sf::Drawable
{


/// Funciones que personaje principal no deberia heredar
///void setParlamentos ();
///void Hablar(int codigodeparlamento);

protected:

    //	Sprites
    sf::Sprite _spritepersonajes;
    sf::Texture _texturapersonajes;

    bool _objetos[3];
    bool _figuritas[6];
    bool _repetidas[3];



public:

    Personajes();


    //	Funciones
    void setcodigodepersonaje(int codigo);
    void inicializarpunteros();
    void update();

    // Acciones

    void addFigurita(Figurita *jugador);
    void addRepetida(Repetida *repetida);
    void addobjeto(Objeto *objeto);

    void darfigurita(Figurita *figurita, Personajes *personaje);
    void darfiguritaapipo(Figurita *figurita, Personajes *personaje);
    void darobjeto(Objeto *objeto, Personajes *personaje);
    void darobjetoapipo(Objeto *objeto, Personajes *personaje);

    void solucionarobjeto(Objeto *objeto);

    //	Sprites y draw
    void setsprite(std::string nombredearchivo);
    sf::FloatRect getBound() const;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    virtual ~Personajes();
};

#endif // PERSONAJES_H
