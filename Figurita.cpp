#include "Figurita.h"

Figurita::Figurita()
{

}

void Figurita::Pegada()
{
    pegada=true;
}

void Figurita::setcodigodefigurita(int codigo)
{
    _codigodefigurita=codigo;
}

void Figurita::setsprite(std::string nombredearchivo)
{
    _texturafigurita.loadFromFile(nombredearchivo);
    _spritefigurita.setTexture(_texturafigurita);
}

int Figurita::getcodigodefigurita()
{
    return _codigodefigurita;
}

Figurita::~Figurita()
{
    //dtor
}
