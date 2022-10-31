#ifndef FIGURITA_H
#define FIGURITA_H
#include <SFML/Graphics.hpp>
#include <iostream>

class Figurita : public sf::Drawable
{

    protected:
    //  Sprites
    sf::Sprite _spritefigurita;
    sf::Texture _texturafigurita;

    //  Propiedades
    int _codigodefigurita;
    bool pegada=false;
<<<<<<< Updated upstream
    public:
    bool getestado();

    void Pegar();
     Figurita();
     int getcodigodefigurita();
        void setcodigodefigurita(int codigo);
       virtual ~Figurita();
void setsprite(std::string nombredearchivo);

    /// sprite y textura
    ///Personajes *_poseedor=nullptr;
/// getsprite()
   ////void setposeedor(Personajes &personaje){
    ///_poseedor=&personaje;
    ///}
=======

    public:
    Figurita();
    //  Funciones
    void Pegar();
    bool getestado();

    void setcodigodefigurita(int codigo);
    int getcodigodefigurita();

    //  Sprites y draw
    void setposicionsprite(float x, float y);
    void setsprite(std::string nombredearchivo);
    sf::Sprite getSprite();
    sf::FloatRect getBound() const;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    virtual ~Figurita();
>>>>>>> Stashed changes
};

#endif // FIGURITA_H
