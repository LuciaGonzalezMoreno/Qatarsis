#include "Protagonista.h"

Protagonista::Protagonista()
{
    _texturaprotagonista.loadFromFile("Pipo.png");
    _spriteprotagonista.setTexture(_texturaprotagonista);
    _velocidad= {0,0};
    _spriteprotagonista.setPosition(12+_spriteprotagonista.getGlobalBounds().width/2,15+_spriteprotagonista.getGlobalBounds().height/2);
    _spriteprotagonista.setOrigin(_spriteprotagonista.getGlobalBounds().width/2,_spriteprotagonista.getGlobalBounds().height/2);
}

void Protagonista::pegarfigurita(Figurita *figurita[], int codigo)
{
    figurita[codigo]->Pegada();
}

Protagonista::~Protagonista()
{
    //dtor
}

float Protagonista::getxorigen()
{
    return _spriteprotagonista.getPosition().x;
}

float Protagonista::getyorigen()
{
    return _spriteprotagonista.getPosition().y;
}

float Protagonista::getancho()
{
    return (float)_spriteprotagonista.getGlobalBounds().width;
}

float Protagonista::getalto()
{
    return (float)_spriteprotagonista.getGlobalBounds().height;
}

void Protagonista::setposicion(sf::Vector2f nuevaposicion)
{
    _spriteprotagonista.setPosition(nuevaposicion);
}

sf::Vector2f Protagonista::getposicionanterior()
{
    return _posicionanterior;
}

void Protagonista::setposicionanterior(sf:: Vector2f posicionanterior)
{
    _posicionanterior=posicionanterior;
}

sf::FloatRect  Protagonista::getBound() const
{
    return _spriteprotagonista.getGlobalBounds();
}

void Protagonista::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(_spriteprotagonista, states);
}

void Protagonista::update()
{
    _velocidad= {0,0};

    setposicionanterior(_spriteprotagonista.getPosition());

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        _velocidad.x=3;
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        _velocidad.x=-3;
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        _velocidad.y=-3;

    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        _velocidad.y=3;
    }
    _spriteprotagonista.move(_velocidad);

//MIRA PARA DONDE TOCO LA TECLA
    if(_velocidad.x < 0)
    {
        _spriteprotagonista.setScale(-1,1);
    }
    else if(_velocidad.x > 0)
    {
        _spriteprotagonista.setScale(1,1);
    }
    // Hola
}

