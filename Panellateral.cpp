#include "Panellateral.h"

Panellateral::Panellateral()
{
    _texturapanellateral.loadFromFile("panellateral.png");
    _spritepanellateral.setTexture(_texturapanellateral);
}

Panellateral::~Panellateral()
{
    //dtor
}

sf::FloatRect  Panellateral::getBound() const
{
    return _spritepanellateral.getGlobalBounds();
}

void Panellateral::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(_spritepanellateral, states);
}
