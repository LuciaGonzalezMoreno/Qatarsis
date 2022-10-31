#ifndef MAPA_H
#define MAPA_H
#include <SFML/Graphics.hpp>
#include "Colisionable.h"
#include "Cuadras.h"
#include "Casas.h"

class Mapa  : public sf::Drawable, public Colisionable

{
private:
    sf::Sprite _spritecalles;
    sf::Texture _texturacalles;

public:
    Cuadras _cuadras[14];
    Casas _casas[21];
    ///SPRITES PUESTOS EN PUBLICO PARA PROBAR ALGO


    Mapa();
    void texturayposicioncuadras();
    void texturayposicioncasas();

    sf::FloatRect getBound() const;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    sf:: Sprite getspriteCalles();
    virtual ~Mapa();

};

#endif // MAPA_H
