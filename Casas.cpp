#include "Casas.h"


void Casas::cargartexturaensprite(string nombredelarchivo)
{
    _texturacasas.loadFromFile(nombredelarchivo);
    _spritecasas.setTexture(_texturacasas);
}


void Casas::setposicionsprite(float x, float y)
{
    _spritecasas.setPosition(x,y);
}

sf::FloatRect  Casas::getBound() const
{
    return _spritecasas.getGlobalBounds();
}


void Casas::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(_spritecasas, states);
}

Casas::Casas()
{
    //ctor
}

Casas::~Casas()
{
    //dtor
}
