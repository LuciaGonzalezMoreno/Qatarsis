#include "Juego.h"

///CONSTRUCTOR-DESTRUCTOR
Juego::Juego()
{
    inicializavariables();
    inicializarventana();
    Gameloop();
}

Juego::~Juego()
{
    delete _window;
}

void Juego::inicializavariables()
{
    _window =nullptr;
/// Gameplay.inicializarrakning(getarchivoranking())
}

void Juego::inicializarventana()
{
    _window = new sf::RenderWindow(sf::VideoMode(900, 600), "Qatarsis!");
    _window->setFramerateLimit(60);
}

void Juego::Gameloop()
{
    while (ventanaabierta())
    {
        update();

        draw();
    }
}

const bool Juego::ventanaabierta()const
{
    return this->_window->isOpen();
}

// UPDATE
void Juego::update()
{
    pollevents();

    if(_menu.gameplayactivo()==false)
    {
        _menu.update();
    }
    if (_menu.gameplayactivo()==true)
    {
        _gameplay.update();
    }
}

//DRAW
void Juego::draw()
{
    _window->clear(); /// borrar frame anterior

    if(_menu.gameplayactivo()==false)
    {
        _window->draw(_menu);
    }
    else if (_menu.gameplayactivo()==true)
    {
        _window->draw(_gameplay);
    }
    _window->display(); /// display el frame
}

/// FUNCIONES
void Juego:: pollevents()
{
    while (_window->pollEvent(_event))
    {
        if (_event.type == sf::Event::Closed)
            _window->close();
    }
}
