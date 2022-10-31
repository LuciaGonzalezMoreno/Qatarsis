#include "Protagonista.h"

Protagonista::Protagonista()
{
    _texturaprotagonista.loadFromFile("TexturaPipo.png"); //cambiar textura
    _spriteprotagonista.setTexture(_texturaprotagonista);

    _divSpriteProta.x = 2; //cant de sprites en x
    _divSpriteProta.y = 1; //cant de sprites en y

    _frameSize = sf::Vector2f(_spriteprotagonista.getTexture()->getSize().x / _divSpriteProta.x , _spriteprotagonista.getTexture()->getSize().y / _divSpriteProta.y);

    //_setFrame(_spriteprotagonista, {0,0});
    int _dimX = _spriteprotagonista.getTexture()->getSize().x / 2;
    int _dimY =_spriteprotagonista.getTexture()->getSize().y;
    _spriteprotagonista.setTextureRect({0,0 , _dimX , _dimY});

    _velocidad= {0,0};

    _spriteprotagonista.setOrigin(_spriteprotagonista.getGlobalBounds().width/2,_spriteprotagonista.getGlobalBounds().height/2);
    _spriteprotagonista.setPosition(12+_spriteprotagonista.getGlobalBounds().width/2,12+_spriteprotagonista.getGlobalBounds().height/2);
}

void Protagonista::_setFrame(sf::Sprite _spriteprotagonista, sf::Vector2i numero_frame) {
    sf::IntRect posicion(numero_frame.x * _frameSize.x , numero_frame.y * _frameSize.y , _frameSize.x , _frameSize.y);
    _spriteprotagonista.setTextureRect({numero_frame.x * (int)_frameSize.x , numero_frame.y * (int)_frameSize.y , (int)_frameSize.x , (int)_frameSize.y});
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
}

sf::Vector2f Protagonista::getposicionanterior(){ return _posicionanterior;}

void Protagonista::setposicion(sf::Vector2f nuevaposicion){  _spriteprotagonista.setPosition(nuevaposicion);}

void Protagonista::setposicionanterior(sf:: Vector2f posicionanterior) {  _posicionanterior=posicionanterior;}

float Protagonista::getxorigen(){ return _spriteprotagonista.getPosition().x;}

float Protagonista::getyorigen(){ return _spriteprotagonista.getPosition().y;}

float Protagonista::getancho(){ return (float)_spriteprotagonista.getGlobalBounds().width;}

float Protagonista::getalto(){ return (float)_spriteprotagonista.getGlobalBounds().height;}

// Sprites y draw
void Protagonista::draw(sf::RenderTarget& target, sf::RenderStates states) const{
        target.draw(_spriteprotagonista, states);
}
sf::FloatRect  Protagonista::getBound() const { return _spriteprotagonista.getGlobalBounds();}

Protagonista::~Protagonista(){}
