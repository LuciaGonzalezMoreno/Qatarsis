#include "Mapa.h"

Mapa::Mapa()
{
    _texturacalles.loadFromFile("Calles.png");
    _spritecalles.setTexture(_texturacalles);
    _spritecalles.setPosition(15,15);

    texturayposicioncuadras();
    texturayposicioncasas();
}

Mapa::~Mapa()
{
    //dtor
}

void Mapa::texturayposicioncuadras()
{
    _cuadras[0].cargartexturaensprite("cuadraprueba.png");
    _cuadras[0].setposicionsprite(407,144);
}

void Mapa::texturayposicioncasas()
{
    _casas[0].cargartexturaensprite("casakiosco0.png");
    _casas[0].setposicionsprite(414,150);
}

sf::FloatRect  Mapa::getBound() const
{
    return _spritecalles.getGlobalBounds();
}

void Mapa::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(_spritecalles, states);
    target.draw(_cuadras[0],states);
    target.draw(_casas[0],states);
}
