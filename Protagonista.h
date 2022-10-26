#ifndef PROTAGONISTA_H
#define PROTAGONISTA_H
#include "Personajes.h"
#include "Objeto.h"
#include "Figurita.h"
#include "Repetida.h"

class Protagonista : public Personajes
{


    private:

    Objeto *_Pelota=nullptr;
    Objeto *_Camiseta=nullptr;
    Objeto *_Autografo=nullptr;
    Figurita *_figuritas[6];
    Repetida *_repetidas[3];
    sf:: Vector2f _velocidad;
    sf:: Vector2f _posicionanterior;
    sf::Sprite _spriteprotagonista;
    sf::Texture _texturaprotagonista;

           public:
       Protagonista();
       void update();
       void draw(sf::RenderTarget& target, sf::RenderStates states) const;
       void pegarfigurita(Figurita *figurita[], int codigo);
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
