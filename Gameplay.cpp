#include "Gameplay.h"

using namespace sf;

Gameplay::Gameplay()
{
    _texturafondo.loadFromFile("Pasto.png");
    _spritefondo.setTexture(_texturafondo);

    _texturaRio.loadFromFile("Rio.png");
    _spriteRio.setTexture(_texturaRio);
    _spriteRio.setPosition(0,380);

    inicializarfiguritas();
<<<<<<< Updated upstream

/// inicializarobjetos()'
/// inicializar
    repartirobjetos();
=======
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
    _objetos[1].setposicionsprite(1,600,390);

>>>>>>> Stashed changes

    _tiempo1 = _reloj1.restart();
}

Gameplay::~Gameplay()
{
<<<<<<< Updated upstream
=======
Kioskera->addobjeto(Pelota);
Kioskera->addobjeto(Camiseta);
Kioskera->addFigurita(Figuritaalvarez);
>>>>>>> Stashed changes

}

Protagonista *Gameplay::getpipo()
{
    return &_pipo;
}

int Gameplay::getcodigokiosquera()
{
    return 0;
}

int Gameplay::getcodigobicicletero()
{
    return 1;
}

int Gameplay::getcodigopersonajepelota()
{
    return 2;
}

int Gameplay::getcodigomessi ()
{
    return 0;
}

Objeto *Gameplay::getpelota()
{
    Objeto *Pelota=&_pelota;
    return Pelota;
}

void Gameplay::repartirobjetos()
{
    cout<<_pelota.getestado()<< endl; /// estado de la pelota
    cout << &_pelota << endl; /// direccion de memoria de la pelota

    _personajessecundarios[getcodigopersonajepelota()].addpelota(getpelota());/// gameplay le da direccion de memoria de Pelota al personaje.
/// ahora el personaje puede manipularla
    _personajessecundarios[getcodigopersonajepelota()].solucionarpelota();/// personaje soluciona la pelota desde su propia direccion
///de memoria que tiene en sus propiedades. Si el personaje entrega la pelota el puntero a la pelota vuelve a ser nullptr.
    _personajessecundarios[0].solucionarpelota();/// Si un personaje quiere solucionar la pelota y no tiene su direccion el sistema lo avisa.

    cout<<_pelota.getestado();/// pelota solucionada por el personaje pelota

///_personajessecundarios[getcodigokiosquera()].addFigurita(_figuritas,getcodigomessi());
///_personajessecundarios[getcodigopersonajepelota()].solucionarobjeto(getpelota());
///cout << &_personajessecundarios[getcodigopersonajepelota()]._pelota;
}

void Gameplay::inicializarfiguritas()
{
    for(int i=0; i<6; i++)
    {
        _figuritas[i].setcodigodefigurita(i);
    }
    /*   _figuritas[0].setsprite("Messi");

       _figuritas[1].setsprite("Dimaria");
       _figuritas[2].setsprite("Lautaro");
       _figuritas[3].setsprite("Papugomez");
       _figuritas[4].setsprite("Dibu");
       _figuritas[5].setsprite("Depaul");
    */
}

<<<<<<< Updated upstream
void Gameplay::intercambios()
{

=======

void Gameplay::intercambios(){

Kioskera->addobjeto(Pelota);

/*
Kioskera->darfiguritaapipo(Figuritaalvarez,Pipo);
Kioskera->darfiguritaapipo(Figuritamessi,Pipo);
Kioskera->darfiguritaapipo(Figuritadepaul,Pipo);
Kioskera->darfiguritaapipo(Figuritadimaria,Pipo);
Kioskera->darfiguritaapipo(Figuritadibu,Pipo);
Kioskera->darfiguritaapipo(Figuritalautaro,Pipo);
*/
>>>>>>> Stashed changes

}

void Gameplay::checkearcolisiones()
{
    limitesdelmapa();
<<<<<<< Updated upstream
    for(int x=0; x<14; x++)
    {
        if (_pipo.getBound().intersects(_mapa._cuadras[x].getBound()))
            _pipo.setposicion(_pipo.getposicionanterior());
=======


     if (Pipo->iscolision(*_mapa.getcasa(0))){
        std::cout<< "Llegaste al hospital";
        Kioskera->solucionarobjeto(Pelota);
    }
    if (Pipo->iscolision(*_mapa.getcasa(1))){
        std::cout<< "Llegaste";
        Kioskera->darfiguritaapipo(Figuritadibu,Pipo);
    }
        if (Pipo->iscolision(*_mapa.getcasa(2))){
        std::cout<< "Llegaste";
    Kioskera->darfiguritaapipo(Figuritalautaro,Pipo);
        }
        if (Pipo->iscolision(*_mapa.getcasa(3))){
        std::cout<< "Llegaste";
   Kioskera->darfiguritaapipo(Figuritaalvarez,Pipo);

        if (Pipo->iscolision(*_mapa.getcasa(4))){
        std::cout<< "Llegaste ";
Kioskera->darfiguritaapipo(Figuritamessi,Pipo);

    }
    }
        if (Pipo->iscolision(*_mapa.getcasa(5))){
        std::cout<< "Llegaste ";
Kioskera->darfiguritaapipo(Figuritadepaul,Pipo);

    }
        if (Pipo->iscolision(*_mapa.getcasa(6))){
        std::cout<< "Llegaste";
    Kioskera->darfiguritaapipo(Figuritadimaria,Pipo);
}
        if (Pipo->iscolision(*_mapa.getcasa(7))){
        std::cout<< "Llegaste";
    Kioskera->solucionarobjeto(Camiseta);
}
        if (Pipo->iscolision(*_mapa.getcasa(8))){
        std::cout<< "Llegaste";
   Kioskera->darobjetoapipo(Pelota,Pipo);
}
        if (Pipo->iscolision(*_mapa.getcasa(8))){
        std::cout<< "Llegaste";
Kioskera->darobjetoapipo(Camiseta,Pipo);
}



    for(int i=0;i<14;i++){

    if (Pipo->iscolision(*_mapa.getcuadras(i))){

        Pipo->setposicion(Pipo->getposicionanterior());
    }
>>>>>>> Stashed changes
    }
}

<<<<<<< Updated upstream
void Gameplay::limitesdelmapa()
{
    if(_pipo.getxorigen()-_pipo.getancho()/2<10)
=======

void Gameplay::limitesdelmapa(){


/// LIMITE IZQUIERDO
    if(_pipo.getxorigen()-_pipo.getancho()/2<12)
>>>>>>> Stashed changes
    {
        _pipo.setposicion(_pipo.getposicionanterior());
    }

    ///LIMITE DERECHO
    if(_pipo.getxorigen()+_pipo.getancho()/2>_mapa.getspriteCalles().getGlobalBounds().width + 10)
    {
        _pipo.setposicion(_pipo.getposicionanterior());
    }

    /// LIMITESUPERIOR
    if(_pipo.getyorigen()-_pipo.getalto()/2<10)
    {
        _pipo.setposicion(_pipo.getposicionanterior());
    }

    ///LIMITE INFERIOR
    if(_pipo.getyorigen()+_pipo.getalto()/2>_mapa.getspriteCalles().getGlobalBounds().height + 10)
    {
        _pipo.setposicion(_pipo.getposicionanterior());
    }
}

void Gameplay::update()
{
    _pipo.update();
    checkearcolisiones();
}

<<<<<<< Updated upstream
void Gameplay::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(_spritefondo, states);
    target.draw(_mapa,states);
    target.draw(_spriteRio, states);
    target.draw(_panellateral, states);
    target.draw(_pipo,states);
    target.draw(_avatar, states);
=======
void Gameplay::draw(sf::RenderTarget& target, sf::RenderStates states) const{



    target.draw(_spritefondo, states);
    target.draw(_mapa,states);
    target.draw(_spriteRio, states);
    target.draw(_paneldecontrol, states);
     target.draw(_pipo,states);

    }
>>>>>>> Stashed changes

}

sf::FloatRect  Gameplay::getBound() const
{
    return _spritefondo.getGlobalBounds();
}
