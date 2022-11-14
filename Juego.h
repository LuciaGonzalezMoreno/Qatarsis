#ifndef JUEGO_H
#define JUEGO_H
#include "Menu.h"
#include "Ranking.h"
#include "Gameplay.h"
#include "Archivo.h"
#include<iostream>

class Juego
{
private:
    sf::Event _event;
    sf::RenderWindow _window;

    Gameplay _gameplay;
    Menu _menu;
    Ranking _ranking;
    Archivo _archivoRanking;
    sf::Vector2i posicion_mouse;

    void inicializavariables();
    void inicializarventana();
    void inicializarArchivo();

    sf::Clock _reloj;
    sf::Time _tiempo;

public:

    Juego();
  ~Juego();

    const bool ventanaabierta() const;

    /// Ranking getrankingarchivo());
    void Gameloop();
    void update ();
    void draw ();
    void pollevents();
};

#endif // JUEGO_H
