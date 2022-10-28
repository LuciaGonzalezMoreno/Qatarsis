#ifndef CUADRAS_H
#define CUADRAS_H
#include <SFML/Graphics.hpp>
#include <iostream>



class Cuadras : public sf::Drawable

{
private:
    sf::Sprite _spritecuadras;
    sf::Texture _texturacuadras;

public:
    Cuadras();

    sf::FloatRect getBound() const;
    void cargartexturaensprite(std::string nombredelarchivo);
    void setposicionsprite(float x, float y);
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    sf::Sprite getSprite() const;
    float getxorigen();
    float getyorigen();
};

#endif // CUADRAS_H
