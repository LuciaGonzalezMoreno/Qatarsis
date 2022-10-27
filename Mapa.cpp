#include "Mapa.h"

Mapa::Mapa()
{
    _texturacalles.loadFromFile("Calles.png");
    _spritecalles.setTexture(_texturacalles);
    _spritecalles.setPosition(10,10);

    texturayposicioncuadras();
    texturayposicioncasas();
}

Mapa::~Mapa()
{
    //dtor
}

void Mapa::texturayposicioncuadras()
{
    for(int x=0; x<14; x++)
    {
        _cuadras[x].cargartexturaensprite("SpriteManzana" + std::to_string(x+1) + ".png");
    }
    float _distMapa = 10;;
    float _distCalle= 35;

    _cuadras[0].setposicionsprite(_distMapa + _distCalle , _distMapa + _distCalle);
    _cuadras[1].setposicionsprite(_distMapa + (2 * _distCalle) +  _cuadras[0].getSprite().getGlobalBounds().width , _distMapa + _distCalle);
    _cuadras[2].setposicionsprite(_distMapa + (3 * _distCalle) +  _cuadras[0].getSprite().getGlobalBounds().width +  _cuadras[1].getSprite().getGlobalBounds().width, _distMapa + _distCalle);
    _cuadras[3].setposicionsprite(_distMapa + _distCalle ,  _distMapa + (2 * _distCalle) + _cuadras[0].getSprite().getGlobalBounds().height);
    _cuadras[4].setposicionsprite(_distMapa + (2 * _distCalle) +  _cuadras[3].getSprite().getGlobalBounds().width ,  _distMapa + (2 * _distCalle) + _cuadras[1].getSprite().getGlobalBounds().height);
    _cuadras[5].setposicionsprite(_distMapa + (3 * _distCalle) +  _cuadras[3].getSprite().getGlobalBounds().width +  _cuadras[4].getSprite().getGlobalBounds().width, _distMapa + (2 * _distCalle) + _cuadras[2].getSprite().getGlobalBounds().height);
    _cuadras[6].setposicionsprite(_distMapa + (4 * _distCalle) +  _cuadras[3].getSprite().getGlobalBounds().width +  _cuadras[4].getSprite().getGlobalBounds().width +  _cuadras[5].getSprite().getGlobalBounds().width, _distMapa + (2 * _distCalle) + _cuadras[2].getSprite().getGlobalBounds().height);
    _cuadras[7].setposicionsprite(_distMapa + (2 * _distCalle) +  _cuadras[3].getSprite().getGlobalBounds().width ,  _distMapa + (3 * _distCalle) + _cuadras[1].getSprite().getGlobalBounds().height + _cuadras[4].getSprite().getGlobalBounds().height);
    _cuadras[8].setposicionsprite(_distMapa + (3 * _distCalle) +  _cuadras[3].getSprite().getGlobalBounds().width +  _cuadras[7].getSprite().getGlobalBounds().width,  _distMapa + (3 * _distCalle) + _cuadras[1].getSprite().getGlobalBounds().height + _cuadras[4].getSprite().getGlobalBounds().height);
    _cuadras[9].setposicionsprite(_distMapa + _distCalle ,  _distMapa + (3 * _distCalle) + _cuadras[0].getSprite().getGlobalBounds().height+ _cuadras[3].getSprite().getGlobalBounds().height);
    _cuadras[10].setposicionsprite(_distMapa + (2 * _distCalle) +  _cuadras[9].getSprite().getGlobalBounds().width ,  _distMapa + (4 * _distCalle) + _cuadras[1].getSprite().getGlobalBounds().height + _cuadras[4].getSprite().getGlobalBounds().height + _cuadras[7].getSprite().getGlobalBounds().height);
    _cuadras[11].setposicionsprite(_distMapa + (3 * _distCalle) +  _cuadras[9].getSprite().getGlobalBounds().width  +  _cuadras[10].getSprite().getGlobalBounds().width,  _distMapa + (4 * _distCalle) + _cuadras[1].getSprite().getGlobalBounds().height + _cuadras[4].getSprite().getGlobalBounds().height + _cuadras[7].getSprite().getGlobalBounds().height);
    _cuadras[12].setposicionsprite(_distMapa + (4 * _distCalle) +  _cuadras[9].getSprite().getGlobalBounds().width  +  _cuadras[10].getSprite().getGlobalBounds().width +  _cuadras[11].getSprite().getGlobalBounds().width,  _distMapa + (4 * _distCalle) + _cuadras[1].getSprite().getGlobalBounds().height + _cuadras[4].getSprite().getGlobalBounds().height + _cuadras[7].getSprite().getGlobalBounds().height);
    _cuadras[13].setposicionsprite(_distMapa + (5 * _distCalle) +  _cuadras[9].getSprite().getGlobalBounds().width  +  _cuadras[10].getSprite().getGlobalBounds().width +  _cuadras[11].getSprite().getGlobalBounds().width +  _cuadras[12].getSprite().getGlobalBounds().width,  _distMapa + (4 * _distCalle) + _cuadras[1].getSprite().getGlobalBounds().height + _cuadras[4].getSprite().getGlobalBounds().height + _cuadras[7].getSprite().getGlobalBounds().height);
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

    for(int x=0; x<14; x++)
    {
        target.draw(_cuadras[x], states);
    }
}
