#ifndef OBJETO_H
#define OBJETO_H
#include <SFML/Graphics.hpp>
#include <iostream>

class Objeto
{

    private:


    sf::Sprite _spriteobjeto;
    sf::Texture _texturaobjeto;
    bool _solucionado=false;

    public:

        bool getestado(){return _solucionado;}
        void solucionar();
        Objeto();
        void setsprite(std::string nombredearchivo);
        virtual ~Objeto();




};

#endif // OBJETO_H
