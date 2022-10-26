#ifndef FIGURITAS_H
#define FIGURITAS_H
#include "Personajes.h"


class Figuritas
{
    private:
    int _codigodefigurita;
    public:
    bool pegada=false;
    void Pegada();
     Figuritas();
     int getcodigodefigurita();
        void setcodigodefigurita(int codigo);
       virtual ~Figuritas();

    /// sprite y textura
    ///Personajes *_poseedor=nullptr;
/// getsprite()
   ////void setposeedor(Personajes &personaje){
    ///_poseedor=&personaje;
    ///}


};




#endif // FIGURITAS_H
