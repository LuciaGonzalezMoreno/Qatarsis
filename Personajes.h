#ifndef PERSONAJES_H
#define PERSONAJES_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Colisionable.h"
#include "Figurita.h"
#include "Objeto.h"
#include "Repetida.h"

class Personajes : public Objeto, public sf::Drawable, public Colisionable
{

/// Funciones que personaje principal no deberia heredar
///void setParlamentos ();
///void Hablar(int codigodeparlamento);

private:

    sf::Sprite _spritepersonajes;
    sf::Texture _texturapersonajes;
<<<<<<< Updated upstream
    Objeto *_pelota;
    Objeto *_camiseta;
    Objeto *_autografo;
    Figurita *_figuritas[6];
    Repetida *_repetidas[3];

public:


=======

    bool _objetos[3];
    bool _figuritas[6];
    bool _repetidas[3];

public:

    Personajes();

    //	Funciones
    void setcodigodepersonaje(int codigo);
>>>>>>> Stashed changes
    void inicializarpunteros();

    Personajes();
    void update();
    sf::FloatRect getBound() const;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    virtual ~Personajes();
    void solucionarpelota();

    void addFigurita(Figurita *figurita,int codigo);
    void addRepetida(Repetida *repetida,int codigo);

    ///FUNCIONESQUECOMPARTENCONPROTAGONISTA
    void addpelota(Objeto *pelota);
    void addcamiseta(Objeto *camiseta);
    void addautografo(Objeto *autografo);
    void darpelota(Objeto *pelota, Personajes *personaje);
    void darcamiseta(Objeto *camiseta, Personajes *personaje);
    void darautografo(Objeto *autografo, Personajes *personaje);

};

#endif // PERSONAJES_H
