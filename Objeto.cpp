#include "Objeto.h"

Objeto::Objeto(){}

///	Funciones

void Objeto::setcodigoobjeto(int codigo)    {_codigodeobjeto=codigo;}

int Objeto::getcodigoobjeto()   {return _codigodeobjeto;}

void Objeto::solucionado()  {_solucionado=true;}

bool Objeto::activar()  {_activo=true;}


///	Sprites y draw

sf::FloatRect Objeto::getBound() const  {return _spriteobjeto.getGlobalBounds();}

void Objeto::draw(sf::RenderTarget& target, sf::RenderStates states) const  {target.draw(_spriteobjeto);}

sf::Sprite Objeto::getSprite() const    {return _spriteobjeto;}

void Objeto::setsprite(std::string nombredearchivo){
    _texturaobjeto.loadFromFile(nombredearchivo);
    _spriteobjeto.setTexture(_texturaobjeto);
}

Objeto::~Objeto(){}
