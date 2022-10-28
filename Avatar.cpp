#include "Avatar.h"

Avatar::Avatar()
{
    _texturaAvatar.loadFromFile("Avatar.png");
    _spriteAvatar.setTexture(_texturaAvatar);

    _spriteAvatar.setOrigin(0,_spriteAvatar.getGlobalBounds().height);
    _spriteAvatar.setPosition(10, 600 - 10); //deberia acceder al tamaño de la ventana y no tener los 600 de manera literal

    _fuente1.loadFromFile("geometric_415_black_bt.ttf");
    _textoNombre.setFont(_fuente1);
    _textoCronometro.setFont(_fuente1);


    _textoNombre.setString(_nombreJugador);
    _textoNombre.setOrigin(0 , _textoNombre.getGlobalBounds().height);
    _textoNombre.setPosition(_spriteAvatar.getPosition().x + 5.f , _spriteAvatar.getPosition().y + 5.f);


   _textoCronometro.setString("18:00");
   _textoCronometro.setOrigin(0 , _textoCronometro.getGlobalBounds().height);
   _textoCronometro.setPosition(_spriteAvatar.getPosition().x , _spriteAvatar.getPosition().y);
}

void Avatar::update()
{
    //_textoCronometro.setString(_tiempo2.));
}

void Avatar::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
   target.draw(_spriteAvatar, states);
    target.draw(_textoNombre , states);
    target.draw(_textoCronometro , states);
}

void Avatar::setNombreJugador(std::string nombre)
{
    _nombreJugador = nombre;
}

std::string Avatar::getNombreJugador()
{
    return _nombreJugador;
}

void Avatar::set_tiempo(sf::Time tiempo)
{
    _tiempo2 =tiempo;
}
