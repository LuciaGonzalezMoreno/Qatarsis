#include "Juego.h"

///CONSTRUCTOR-DESTRUCTOR
Juego::Juego()
{
    inicializavariables();
    inicializarventana();

    Gameloop();
}

<<<<<<< Updated upstream
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
=======
void Juego::inicializarArchivo()
{
    Archivo _arch;

    if(_arch.leer(0)!=1)
    {
        for(int x=0; x<3; x++)
        {
            _arch.setNombre("vacio");
            _arch.setMin(0);
            _arch.setSeg(0);
            _arch.grabar();
        }
    }
}

void Juego::inicializarventana()
{
    _window.create(sf::VideoMode(900, 600), "Qatarsis!");
    _window.setFramerateLimit(15);
}

void Juego::inicializavariables()
{
    //_window =nullptr;
/// Gameplay.inicializarrakning(getarchivoranking())
>>>>>>> Stashed changes
}

void Juego::Gameloop()
{
    while (ventanaabierta())
    {
        _tiempo = _reloj.getElapsedTime();

        update();

        draw();
    }
}

const bool Juego::ventanaabierta()const
{
<<<<<<< Updated upstream
    return this->_window->isOpen();
=======
    return this->_window.isOpen();
>>>>>>> Stashed changes
}

// UPDATE
void Juego::update()
{
    pollevents();
<<<<<<< Updated upstream

    if(_menu.gameplayactivo()==false)
=======
    std::cout<<_tiempo.asSeconds() << std::endl;

    if(_menu.get_eligioSalir()==true)
>>>>>>> Stashed changes
    {
        exit(1);
    }
    else if(_menu.get_eligioJuego()==true || _gameplay.get_estaActivo()==true)
    {
        if(_menu.get_eligioJuego()==true)
        {
            _window.setFramerateLimit(40);
            _menu.set_eligioJuego(false);
            _menu.set_estaActivo(false);
            _gameplay.set_estaActivo(true);
        }
        _gameplay.update();
<<<<<<< Updated upstream
=======
    }
    else if(_menu.get_eligioRanking()==true || _ranking.get_estaActivo()==true)
    {
        if(_menu.get_eligioRanking()==true)
        {
            _window.setFramerateLimit(15);
            _menu.set_eligioRanking(false);
            _menu.set_estaActivo(false);
            _ranking.set_estaActivo(true);
        }
        _ranking.update(_tiempo);
    }
    else if(_menu.get_estaActivo()==true || (_gameplay.get_estaActivo()==false && _ranking.get_estaActivo()==false))
    {
        _window.setFramerateLimit(15);
        if(_gameplay.get_estaActivo()==false && _ranking.get_estaActivo()==false)
        {
            _menu.set_estaActivo(true);
        }
        _menu.update(_window);
>>>>>>> Stashed changes
    }
}

//DRAW
void Juego::draw()
{
<<<<<<< Updated upstream
    _window->clear(); /// borrar frame anterior
=======
    _window.clear(); /// borrar frame anterior
>>>>>>> Stashed changes

    if(_menu.get_estaActivo()==true)
    {
        _window.draw(_menu);
    }
    else if(_gameplay.get_estaActivo()==true)
    {
        _window.draw(_gameplay);
    }
    else if(_ranking.get_estaActivo()==true)
    {
        _window.draw(_ranking);
    }
    else if(_menu.get_eligioSalir()==true)
    {
        _window.close();
    }
    _window.display(); /// display el frame
}

/// FUNCIONES
void Juego:: pollevents()
{
<<<<<<< Updated upstream
    while (_window->pollEvent(_event))
    {
        if (_event.type == sf::Event::Closed)
            _window->close();
    }
}
=======
    while (_window.pollEvent(_event))
    {
        if (_event.type == sf::Event::Closed)
            _window.close();
    }
}

Juego::~Juego()
{

}
>>>>>>> Stashed changes
