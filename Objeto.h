#ifndef OBJETO_H
#define OBJETO_H
#include <SFML/Graphics.hpp>
#include <iostream>

class Objeto : public sf::Drawable
{

    private:

    //  Sprites
    sf::Sprite _spriteobjeto;
    sf::Texture _texturaobjeto;

    //  Propiedades
    bool _solucionado=false;
    bool _activo=false;
    int _codigodeobjeto;

    public:
<<<<<<< Updated upstream

        bool getestado(){return _solucionado;}
        void solucionar();
        Objeto();
        void setsprite(std::string nombredearchivo);
        virtual ~Objeto();




=======
    Objeto();

    //  Funciones
    bool activar();
    bool getestado(){return _solucionado;}
    int getcodigoobjeto();
    void setcodigoobjeto(int codigo);
    void solucionado();

    //  Sprites y draw
    void setsprite(std::string nombredearchivo);
    sf::Sprite getSprite() const;
    sf::FloatRect getBound() const;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    virtual ~Objeto();
>>>>>>> Stashed changes
};

#endif // OBJETO_H
