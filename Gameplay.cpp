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

int Gameplay::getkiosquera(){return 0;}
int Gameplay::getbicicletero(){return 1;}
int Gameplay::getpersonaje3(){return 2;}
int Gameplay::getpelota(){return 0;}
int Gameplay::getcamiseta(){return 1;}
int Gameplay::getautografo(){return 2;}
int Gameplay::getMessi(){return 0;}
int Gameplay::getAlvarez(){return 1;}
int Gameplay::getDepaul(){ return 2;}
int Gameplay::getDimaria(){return 3;}
int Gameplay::getDibu(){ return 4;}
int Gameplay::getJugador6(){ return 5;}



        /// SELECCION
    int Gameplay::getsuarez(){

    return 0;

    }
     int Gameplay::getcristiano(){
     return 1;
     }
     int Gameplay::getneymar(){

     return 2;
     } /// REPETIDAS




void Gameplay::repartirobjetos()
{
 /*
    cout<<_pelota.getestado()<< endl; /// estado de la pelota
    cout << &_pelota << endl; /// direccion de memoria de la pelota
    _personajessecundarios[getcodigopersonajepelota()].addpelota(getpelota());/// gameplay le da direccion de memoria de Pelota al personaje.
/// ahora el personaje puede manipularla
    _personajessecundarios[getcodigopersonajepelota()].solucionarpelota();/// personaje soluciona la pelota desde su propia direccion
///de memoria que tiene en sus propiedades. Si el personaje entrega la pelota el puntero a la pelota vuelve a ser nullptr.
    _personajessecundarios[0].solucionarpelota();/// Si un personaje quiere solucionar la pelota y no tiene su direccion el sistema lo avisa.
    cout<<_pelota.getestado();/// pelota solucionada por el personaje pelota
*/



_personajessecundarios[getkiosquera()].addFigurita(_figuritas,getMessi());
std::cout <<_personajessecundarios[getkiosquera()].getpunterofiguritas(getMessi());
///_personajessecundarios[getkiosquera()].darfigurita(getMessi(),getpipo());
_pipo.pegarfigurita(_figuritas,getMessi());
std::cout<<_figuritas[getMessi()].getestado();
std::cout<< getpipo();
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
<<<<<<< Updated upstream
    target.draw(_panellateral, states);
    target.draw(_mapa,states);
=======
        target.draw(_mapa,states);
        target.draw(_spriteRio, states);
        target.draw(_paneldecontrol,states);


>>>>>>> Stashed changes
    target.draw(_pipo,states);
}

sf::FloatRect  Gameplay::getBound() const
{
    return _spritefondo.getGlobalBounds();
}


