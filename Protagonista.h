#ifndef PROTAGONISTA_H
#define PROTAGONISTA_H
#include <SFML/Graphics.hpp>
#include "Colisionable.h"
#include "Personajes.h"
#include "Objeto.h"
#include "Figurita.h"
#include "Repetida.h"

class Protagonista : public Personajes{


    private:

    sf:: Vector2f _velocidad;
    sf:: Vector2f _posicionanterior;
    sf::Sprite _spriteprotagonista;
    sf::Texture _texturaprotagonista;

        public:
Protagonista();
        void addFigurita(Figurita &figuritajugador);

       void update();
       void draw(sf::RenderTarget& target, sf::RenderStates states) const;
        sf::FloatRect getBound() const;


        float getxorigen();
        float getyorigen();
        float getalto();
        float getancho();
        void setposicionanterior(sf::Vector2f posicionanterior);
        sf:: Vector2f getposicionanterior();
        void setposicion(sf::Vector2f nuevaposicion);
        sf::Sprite getSprite() {return _spriteprotagonista;}

        virtual ~Protagonista();

};

#endif // PROTAGONISTA_H
