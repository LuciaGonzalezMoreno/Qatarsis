#ifndef PANELLATERAL_H
#define PANELLATERAL_H
#include <SFML/Graphics.hpp>

class Panellateral : public sf::Drawable
{
    private:

    sf::Sprite _spritepanellateral;
    sf::Texture _texturapanellateral;

    public:
    Panellateral();
    sf::FloatRect getBound() const;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    virtual ~Panellateral();




};

#endif // PANELLATERAL_H
