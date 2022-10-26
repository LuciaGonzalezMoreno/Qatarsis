#include "Gameplay.h"

using namespace sf;

Gameplay::Gameplay()
{
    _texturafondo.loadFromFile("texturafondo.png");
    _spritefondo.setTexture(_texturafondo);

    _mapa.texturayposicioncuadras();
    _mapa.texturayposicioncasas();
    inicializarfiguritas();
/// inicializarobjetos()'
/// inicializar
    repartirobjetos();
}

Gameplay::~Gameplay()
{

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

void Gameplay::intercambios()
{


}

void Gameplay::checkearcolisiones()
{
    limitesdelmapa();
    if (_pipo.getBound().intersects(_mapa._cuadras[0].getBound()))
    {
        _pipo.setposicion(_pipo.getposicionanterior());
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

void Gameplay::update()
{
    _pipo.update();
    checkearcolisiones();
}

void Gameplay::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(_spritefondo, states);
    target.draw(_panellateral, states);
    target.draw(_mapa,states);
    target.draw(_pipo,states);
}

sf::FloatRect  Gameplay::getBound() const
{
    return _spritefondo.getGlobalBounds();
}
