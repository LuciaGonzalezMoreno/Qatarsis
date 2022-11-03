#ifndef PROTAGONISTA_H
#define PROTAGONISTA_H
#include "Personajes.h"
#include "Objeto.h"
#include "Figurita.h"
#include "Repetida.h"
#include "Colisionable.h"
class Protagonista : public Personajes, public Colisionable
{
private:

    sf:: Vector2f _velocidad;
    sf:: Vector2f _posicionanterior;
    sf::Sprite _spriteprotagonista;
    sf::Texture _texturaprotagonista;
    sf:: Vector2i _divSpriteProta;
    sf:: Vector2f _frameSize;

public:

    Protagonista();
    void update();
    float getxorigen(), getyorigen(), getalto(), getancho();
    void setposicionanterior(sf::Vector2f posicionanterior);
    sf:: Vector2f getposicionanterior();
    void setposicion(sf::Vector2f nuevaposicion);

    /// Sprites y Draw
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    sf::FloatRect getBound() const;
    sf::Sprite getSprite() {  return _spriteprotagonista; }
    void _setFrame(sf::Sprite, sf::Vector2i numero_frame);
    virtual ~Protagonista();
};

#endif // PROTAGONISTA_H
