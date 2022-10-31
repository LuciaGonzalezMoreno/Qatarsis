#ifndef PANELDECONTROL_H
#define PANELDECONTROL_H
#include <SFML/Graphics.hpp>
#include "Figurita.h"
#include "Repetida.h"
#include "Objeto.h"

class Paneldecontrol : public sf::Drawable
{

 ///_FiguMessi_0.setposicionsprite(580,20);
  ///target.draw(_figuritas[4],states);



    private:
    Figurita *_figuritas[6];
    Repetida *_repetidas[3];
    Objeto *_objetos[3];
    sf::Sprite _spritepanellateral;
    sf::Texture _texturapanellateral;
    sf::Sprite _spritesfiguritas[6];
    sf::Sprite _spritesrepetidas[3];
    sf::Sprite _spritesobjetos[3];

    public:

    void cargarobjetos(Figurita *Vectorfiguritas,const int cantidadfigus, Objeto *Vectorobjetos, const int cantidadobjetos, Repetida *vectorrepetidas, const int cantidadrepetidas);
    Paneldecontrol();
    void controlarfiguritas();
       void update();
    sf::FloatRect getBound() const;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    virtual ~Paneldecontrol();



};

#endif // PANELDECONTROL_H
