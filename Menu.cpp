#include "Menu.h"

Menu::Menu()
{
    _texturacalles.loadFromFile("callesubicar.png");
    _spritecalles.setTexture(_texturacalles);
}

Menu::~Menu()
{
    //dtor
}

void Menu::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(_spritecalles, states);
}

void Menu::update()
{


}

bool Menu::gameplayactivo()
{
    if (_opciones!=0)
    {
        return true;
    }
}
