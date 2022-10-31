#ifndef PERSONAJES_H
#define PERSONAJES_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Figurita.h"
#include "Objeto.h"
#include "Repetida.h"

<<<<<<< Updated upstream

class Personajes : public Objeto, public sf::Drawable
{

=======
class Personajes : public sf::Drawable
{

>>>>>>> Stashed changes
/// Funciones que personaje principal no deberia heredar
///void setParlamentos ();
///void Hablar(int codigodeparlamento);

protected:

    //	Sprites
    sf::Sprite _spritepersonajes;
    sf::Texture _texturapersonajes;
<<<<<<< Updated upstream
    Objeto *_objetos[3];
    Figurita *_figuritas[6];
    Repetida *_repetidas[3];

public:

    Objeto *getpunteroobjetos(int codigodeobjeto);
    Figurita *getpunterofiguritas(int codigofiguritas);
    Repetida *getpunterorepetidas(int codigorepetidas);
=======

    //	Propiedades
    int _codigodepersonaje;
    bool _figuritas[6];
    bool _repetidas[3];
    bool _objetos[3];

public:

    Personajes();
>>>>>>> Stashed changes

    //	Funciones
    void setcodigodepersonaje(int codigo);
    void inicializarpunteros();
    void update();
<<<<<<< Updated upstream
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
=======

    // Acciones

    void addFigurita(Figurita *jugador);
    void addRepetida(Repetida *repetida);
    void addobjeto(Objeto *objeto);

    void darfigurita(Figurita *figurita, Personajes *personaje);
    void darfiguritaapipo(Figurita *figurita, Personajes *personaje);
    void darobjeto(Objeto *objeto, Personajes *personaje);
>>>>>>> Stashed changes

    void solucionarobjeto(Objeto *objeto);

    //	Sprites y draw
    void setsprite(std::string nombredearchivo);
    sf::FloatRect getBound() const;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    virtual ~Personajes();
};

#endif // PERSONAJES_H
