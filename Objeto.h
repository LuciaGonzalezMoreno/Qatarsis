#ifndef OBJETO_H
#define OBJETO_H
#include <SFML/Graphics.hpp>
#include <iostream>

class Objeto
{

    private:

<<<<<<< Updated upstream

    sf::Sprite _spriteobjeto;
    sf::Texture _texturaobjeto;
    bool _solucionado=false;
=======
    //  Sprites
    sf::Sprite _spriteobjeto[2];
    sf::Texture _texturaobjeto[2];


    //  Propiedades
    bool _solucionado=false;
    bool _enpantalla=false;
    int _codigodeobjeto;
>>>>>>> Stashed changes

    public:

        bool getestado(){return _solucionado;}
        void solucionado();
        Objeto();
        void setsprite(std::string nombredearchivo);
        virtual ~Objeto();

<<<<<<< Updated upstream

=======
    //  Funciones
    void imprimir();
    bool getenpantalla() {return _enpantalla;}
    bool getestado(){return _solucionado;}
    int getcodigoobjeto();

    void setcodigoobjeto(int codigo);
    void solucionado();

    //  Sprites y draw
      void setposicionsprite(int numerodesprite,float x, float y);
    void setsprite(int numerodesprite, std::string nombredearchivo);
      sf::FloatRect getBound() const;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
>>>>>>> Stashed changes


};

#endif // OBJETO_H
