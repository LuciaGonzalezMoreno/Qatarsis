#include "Archivo.h"
using namespace std;

Archivo::Archivo()
{

}

int Archivo::leer(int nroRegistro)
{
    FILE *p;
    p=fopen("rankingJUEGO.dat", "rb");
    if(p==NULL) return -1;
    fseek(p, sizeof *this*nroRegistro,0);
    int leyo=fread(this, sizeof *this,1, p);
    fclose(p);
    return leyo;
}

int Archivo::grabar()
{
    FILE *p;
    p=fopen("rankingJUEGO.dat", "ab");
    if(p==NULL) return -1;
    int grabo=fwrite(this, sizeof *this,1, p);
    fclose(p);
    return grabo;
}

void Archivo::modificar()
{

}

void Archivo::mostrar()
{
    cout<<"nombre:" << _nombreJugador<<endl;
    cout<<endl;
    cout<<"min:"<<_min<<endl;
    cout<<endl;
    cout<<"seg:"<<_seg<<endl;
    cout<<endl;
}



Archivo::~Archivo()
{

}
