#include "Paneldecontrol.h"

Paneldecontrol::Paneldecontrol()
{
    _texturapanellateral.loadFromFile("panellateral.png");
    _spritepanellateral.setTexture(_texturapanellateral);
    _spritepanellateral.setPosition(575,10);

}


void Paneldecontrol::cargarobjetos(Figurita *Vectorfiguritas, const int cantidadfigus, Objeto *Vectorobjetos, const int cantidadobjetos, Repetida *vectorrepetidas, const int cantidadrepetidas){

for(int i=0;i<cantidadfigus;i++){    _figuritas[i]=&Vectorfiguritas[i];}

for(int i=0;i<cantidadobjetos;i++){    _objetos[i]=&Vectorobjetos[i];}

for(int i=0;i<cantidadfigus;i++){    _repetidas[0]=&vectorrepetidas[i];}

}

void Paneldecontrol::update(){


}


Paneldecontrol::~Paneldecontrol()
{
    //dtor
}
sf::FloatRect  Paneldecontrol::getBound() const
{
    return _spritepanellateral.getGlobalBounds();
}

void Paneldecontrol::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(_spritepanellateral, states);
   for(int i=0;i<6;i++){
    if(_figuritas[i]->getestado()){
    Figurita aux0=*_figuritas[i];
       target.draw(aux0,states);
    }
   }


/*


    target.draw(aux1,states);

*/


}









