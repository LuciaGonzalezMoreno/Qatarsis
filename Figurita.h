#ifndef FIGURITA_H
#define FIGURITA_H
#include <SFML/Graphics.hpp>
#include <iostream>

class Figurita
{
  private:

    sf::Sprite _spritefigurita;
    sf::Texture _texturafigurita;
    int _codigodefigurita;
    public:
    bool pegada=false;
    void Pegada();
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
};

#endif // FIGURITA_H
