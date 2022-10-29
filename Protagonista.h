#ifndef PROTAGONISTA_H
#define PROTAGONISTA_H
#include <SFML/Graphics.hpp>
#include "Colisionable.h"
#include "Personajes.h"
class Protagonista : public Personajes, public Colisionable {

    private:

    sf:: Vector2f _velocidad;
    sf:: Vector2f _posicionanterior;
    sf::Sprite _spriteprotagonista;
    sf::Texture _texturaprotagonista;

           public:
       Protagonista();
       void update();
       void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    void pegarfigurita(Figurita *Vectorfigus, int jugador);
      sf::FloatRect getBound() const;
        virtual ~Protagonista();
      float getxorigen();
      float getyorigen();
      float getalto();
      float getancho();
              void setposicionanterior(sf::Vector2f posicionanterior);
          sf:: Vector2f getposicionanterior();
      void setposicion(sf::Vector2f nuevaposicion);
      sf::Sprite getSprite() {return _spriteprotagonista;}

};

#endif // PROTAGONISTA_H
