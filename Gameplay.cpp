#include "Gameplay.h"

Gameplay::Gameplay()
{
    //Cargando sprites
    _texturafondo.loadFromFile("Pasto.png");
    _spritefondo.setTexture(_texturafondo);
    _texturaRio.loadFromFile("Rio.png");
    _spriteRio.setTexture(_texturaRio);
    _spriteRio.setPosition(0,380);

    /// Inicializaciones
    _paneldecontrol.cargarobjetos(_figuritas,6,_objetos,3,_repetidas,3);
    inicializarfiguritas();
    inicializarobjetos();
    repartirobjetos();
}

void Gameplay::inicializarobjetos(){


       _objetos[0].setcodigoobjeto(0);
    _objetos[0].setsprite(0,"pelotadesinflada.png");
    _objetos[0].setposicionsprite(0,600,390);
    _objetos[0].setsprite(1,"pelotainflada.png");
    _objetos[0].setposicionsprite(1,600,390);

    _objetos[1].setcodigoobjeto(1);
    _objetos[1].setsprite(0,"camisetaargentinasucia.png");
    _objetos[1].setposicionsprite(0,700,390);
    _objetos[1].setsprite(1,"camisetaargentinalimpia.png");
    _objetos[1].setposicionsprite(1,700,390);


    ///_tiempo1 = _reloj1.restart();

}
void Gameplay::repartirobjetos()
{

Kioskera->addobjeto(Pelota);
Kioskera->addFigurita(Figuritaalvarez);

}

///SETEANDO SPRITE Y CODIGO DE FIGURITA

void Gameplay::inicializarfiguritas(){

_figuritas[0].setsprite("figuritamessi.png");
_figuritas[0].setcodigodefigurita(0);
_figuritas[0].setposicionsprite(591,36);


_figuritas[1].setsprite("figuritaalvarez.png");
_figuritas[1].setcodigodefigurita(1);
_figuritas[1].setposicionsprite(691,36);

_figuritas[2].setsprite("figuritadepaul.png");
_figuritas[2].setcodigodefigurita(2);
_figuritas[2].setposicionsprite(793,36);

_figuritas[3].setsprite("figuritadimaria.png");
_figuritas[3].setcodigodefigurita(3);
_figuritas[3].setposicionsprite(591,133);

_figuritas[4].setsprite("figuritadibu.png");
_figuritas[4].setcodigodefigurita(4);
_figuritas[4].setposicionsprite(691,133);

_figuritas[5].setsprite("figuritalautaro.png");
_figuritas[5].setcodigodefigurita(5);
_figuritas[5].setposicionsprite(793,133);

}

void Gameplay::inicializarpersonajes(){
/*
_personajes[0].setcodigodepersonaje(0);
_personajes[0].setsprite("kioskera.png");
_personajes[1].setcodigodepersonaje(1);
_personajes[1].setsprite("bicicletero.png");
_personajes[2].setcodigodepersonaje(1);
_personajes[2].setsprite("personaje3.png");
_personajes[3].setcodigodepersonaje(1);
_personajes[3].setsprite("personaje4.png");
_personajes[4].setcodigodepersonaje(1);
_personajes[4].setsprite("personaje5.png");
*/

}


void Gameplay::intercambios(){
/*
Kioskera->darobjeto(Pelota,Pipo);
Pipo->darobjeto(Pelota,Kioskera);
Kioskera->solucionarobjeto(Pelota);
Kioskera->darobjeto(Pelota,Pipo);
Kioskera->darfiguritaapipo(Figuritaalvarez,Pipo);
Kioskera->darfiguritaapipo(Figuritamessi,Pipo);
Kioskera->darfiguritaapipo(Figuritadepaul,Pipo);
Kioskera->darfiguritaapipo(Figuritadimaria,Pipo);
Kioskera->darfiguritaapipo(Figuritadibu,Pipo);
Kioskera->darfiguritaapipo(Figuritalautaro,Pipo);
*/

}

void Gameplay::checkearcolisiones(){
    limitesdelmapa();

    if (Pipo->iscolision(*_mapa.getcasa(0))){


        Kioskera->darfiguritaapipo(Figuritaalvarez,Pipo);
    }
    if (Pipo->iscolision(*_mapa.getcasa(1))){



Kioskera->darfiguritaapipo(Figuritamessi,Pipo);

    }
    if (Pipo->iscolision(*_mapa.getcasa(2))){


       Kioskera->darfiguritaapipo(Figuritadepaul,Pipo);

    }
    if (Pipo->iscolision(*_mapa.getcasa(3))){


        Kioskera->darfiguritaapipo(Figuritadimaria,Pipo);

    }
    if (Pipo->iscolision(*_mapa.getcasa(4))){


   Kioskera->darfiguritaapipo(Figuritadibu,Pipo);

    }
    if (Pipo->iscolision(*_mapa.getcasa(5))){

   Kioskera->darfiguritaapipo(Figuritalautaro,Pipo);
    }
    if (Pipo->iscolision(*_mapa.getcasa(6))){

   Kioskera->darobjetoapipo(Pelota,Pipo);
    }

        if (Pipo->iscolision(*_mapa.getcasa(7))){

   Kioskera->darobjetoapipo(Camiseta,Pipo);
    }
if (Pipo->iscolision(*_mapa.getcasa(8))){

   Kioskera->solucionarobjeto(Pelota);
    }

        if (Pipo->iscolision(*_mapa.getcasa(9))){

   Kioskera->solucionarobjeto(Camiseta);
    }

    for(int i=0;i<14;i++){

    if (Pipo->iscolision(*_mapa.getcuadras(i))){

        Pipo->setposicion(Pipo->getposicionanterior());
    }
    }



}


void Gameplay::limitesdelmapa()
{

/// LIMITE IZQUIERDO
    if(_pipo.getxorigen()-_pipo.getancho()/2<12)
    {

        _pipo.setposicion(_pipo.getposicionanterior());
    }

///LIMITE DERECHO

    if(_pipo.getxorigen()+_pipo.getancho()/2>495)
    {
        _pipo.setposicion(_pipo.getposicionanterior());
    }

    /// LIMITESUPERIOR

    if(_pipo.getyorigen()-_pipo.getalto()/2<15)
    {

        _pipo.setposicion(_pipo.getposicionanterior());



        ///LIMITE INFERIOR

        if(_pipo.getyorigen()+_pipo.getalto()/2>452)
        {

            _pipo.setposicion(_pipo.getposicionanterior());
        }


}
}
void Gameplay::update(){

    _pipo.update();
    _paneldecontrol.update();
    intercambios();
    checkearcolisiones();

}
sf::FloatRect  Gameplay::getBound() const   {return _spritefondo.getGlobalBounds();}

void Gameplay::draw(sf::RenderTarget& target, sf::RenderStates states) const{

    target.draw(_spritefondo, states);
    target.draw(_mapa,states);
    target.draw(_spriteRio, states);
    target.draw(_paneldecontrol, states);
    target.draw(_pipo,states);

    }



Gameplay::~Gameplay(){}
