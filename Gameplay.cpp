#include "Gameplay.h"

using namespace sf;

Gameplay::Gameplay()
{
<<<<<<< Updated upstream
=======
    _estaActivo = false;
    _comienzaJuego = true;

    //Cargando sprites
>>>>>>> Stashed changes
    _texturafondo.loadFromFile("Pasto.png");
    _spritefondo.setTexture(_texturafondo);

    _texturaRio.loadFromFile("Rio.png");
    _spriteRio.setTexture(_texturaRio);
    _spriteRio.setPosition(0,380);

    inicializarfiguritas();

/// inicializarobjetos()'
/// inicializar
    repartirobjetos();

    _tiempo1 = _reloj1.restart();
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
    for(int x=0; x<14; x++)
    {
        if (_pipo.getBound().intersects(_mapa._cuadras[x].getBound()))
            _pipo.setposicion(_pipo.getposicionanterior());
    }
}

void Gameplay::limitesdelmapa()
{
    if(_pipo.getxorigen()-_pipo.getancho()/2<10)
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

<<<<<<< Updated upstream
void Gameplay::update()
{
=======
    if(_comienzaJuego)
    {

    }
>>>>>>> Stashed changes
    _pipo.update();
    checkearcolisiones();
}

void Gameplay::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(_spritefondo, states);
    target.draw(_mapa,states);
    target.draw(_spriteRio, states);
    target.draw(_panellateral, states);
    target.draw(_pipo,states);
    target.draw(_avatar, states);

}

sf::FloatRect  Gameplay::getBound() const
{
    return _spritefondo.getGlobalBounds();
}
