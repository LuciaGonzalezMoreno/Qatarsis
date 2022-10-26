#ifndef MENU_H
#define MENU_H
#include <SFML/Graphics.hpp>

class Menu : public sf::Drawable
{
      private:
        int _opciones=1;
     sf::Sprite _spritecalles;
    sf::Texture _texturacalles;

    public:
        Menu();
        bool gameplayactivo();
    void update();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
        virtual ~Menu();




};

#endif // MENU_H
