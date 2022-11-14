#include "Protagonista.h"

Protagonista::Protagonista()
{
    _texturaprotagonista.loadFromFile("TexturaPipo.png"); //cambiar textura
    _spriteprotagonista.setTexture(_texturaprotagonista);

<<<<<<< Updated upstream
void Protagonista::pegarfigurita(Figurita *figurita[], int codigo)
{
    figurita[codigo]->Pegada();
}

Protagonista::~Protagonista()
{
    //dtor
=======
    _divSpriteProta.x = 7; //cant de sprites en x
    _divSpriteProta.y = 1; //cant de sprites en y

    _dimTextureRect.x = _spriteprotagonista.getTexture()->getSize().x / _divSpriteProta.x;
    _dimTextureRect.y =_spriteprotagonista.getTexture()->getSize().y / _divSpriteProta.y;
    _frameActual.x=0;
    _frameActual.y=0;
    _spriteprotagonista.setTextureRect({_frameActual.x * _dimTextureRect.x,_frameActual.y * _dimTextureRect.y, _dimTextureRect.x, _dimTextureRect.y});

    _velocidad= {0,0};

    _spriteprotagonista.setOrigin(_spriteprotagonista.getLocalBounds().width/2,_spriteprotagonista.getLocalBounds().height/2);
    _spriteprotagonista.setPosition(12+_spriteprotagonista.getLocalBounds().width/2,12+_spriteprotagonista.getLocalBounds().height/2);

    _banderaFrame = 1;
}

void Protagonista::setTextureRect(int x, int y)
{
    _spriteprotagonista.setTextureRect({x * _dimTextureRect.x, y * _dimTextureRect.y, _dimTextureRect.x, _dimTextureRect.y});
>>>>>>> Stashed changes
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

void Protagonista::setposicionanterior(sf::Vector2f posicionanterior)
{
    _posicionanterior=posicionanterior;
}

sf::Vector2i Protagonista::getFrameActual()
{
    return _frameActual;
}

void Protagonista::setFrameAnterior(sf::Vector2i frameAnterior)
{
    _frameAnterior = frameAnterior;
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
    setFrameAnterior(_frameActual);

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        _spriteprotagonista.setRotation(270.f);

        if(_banderaFrame ==1)
        {
            if((_frameActual.x + 1) <= 6)
            {
                _frameActual.x += 1;
            }
            else
            {
                _frameActual.x -= 1;
                _banderaFrame = 0;
            }
        }
        else if((_frameActual.x - 1) >= 0 )
        {
            _frameActual.x -= 1;
        }
        else
        {
            _frameActual.x += 1;
            _banderaFrame = 1;
        }

        setTextureRect(_frameActual.x, _frameActual.y);

        _velocidad.x=3;
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        _spriteprotagonista.setRotation(90.f);

        if(_banderaFrame ==1)
        {
            if((_frameActual.x + 1) <= 6)
            {
                _frameActual.x += 1;
            }
            else
            {
                _frameActual.x -= 1;
                _banderaFrame = 0;
            }
        }
        else if((_frameActual.x - 1) >= 0 )
        {
            _frameActual.x -= 1;
        }
        else
        {
            _frameActual.x += 1;
            _banderaFrame = 1;
        }

        setTextureRect(_frameActual.x, _frameActual.y);

        _velocidad.x=-3;
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        _spriteprotagonista.setRotation(180.f);

        if(_banderaFrame ==1)
        {
            if((_frameActual.x + 1) <= 6)
            {
                _frameActual.x += 1;
            }
            else
            {
                _frameActual.x -= 1;
                _banderaFrame = 0;
            }
        }
        else if((_frameActual.x - 1) >= 0 )
        {
            _frameActual.x -= 1;
        }
        else
        {
            _frameActual.x += 1;
            _banderaFrame = 1;
        }

        setTextureRect(_frameActual.x, _frameActual.y);

        _velocidad.y=-3;

    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        _spriteprotagonista.setRotation(0.f);

        if(_banderaFrame ==1)
        {
            if((_frameActual.x + 1) <= 6)
            {
                _frameActual.x += 1;
            }
            else
            {
                _frameActual.x -= 1;
                _banderaFrame = 0;
            }
        }
        else if((_frameActual.x - 1) >= 0 )
        {
            _frameActual.x -= 1;
        }
        else
        {
            _frameActual.x += 1;
            _banderaFrame = 1;
        }

        setTextureRect(_frameActual.x, _frameActual.y);

        _velocidad.y=3;
    }
    _spriteprotagonista.move(_velocidad);
}

<<<<<<< Updated upstream
=======
Protagonista::~Protagonista()
{
    //dtor
}
>>>>>>> Stashed changes
