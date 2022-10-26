#ifndef JUEGO_H
#define JUEGO_H
/// includeranking
#include "Gameplay.h"
#include "Menu.h"

class Juego
{

private:
    sf::RenderWindow *_window;
    sf::Event _event;

    ///FUNCIONES PRIVADAS
    Gameplay _gameplay;
    Menu _menu;

    ///Ranking
    ///ArchivoRanking _archivoranking;
    void inicializavariables();
    void inicializarventana();

public:
/// CONSTRUCTODESTRUCTOR
    Juego();
  ~Juego();
///ACCESORES
    const bool ventanaabierta() const;
    ///FUNCIONES
    /// Ranking getrankingarchivo());
    void Gameloop();
    void update ();
    void draw ();
    void pollevents();


};

#endif // JUEGO_H
