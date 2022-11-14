#ifndef ARCHIVO_H
#define ARCHIVO_H
#include<iostream>


class Archivo
{
    public:
        Archivo();

        int leer(int nroRanking);
        int grabar();
        void modificar();
        void mostrar();

        void setNombre(std::string nom){_nombreJugador = nom;}
        void setMin(float minu){_min = minu;}
        void setSeg(float seg){_seg = seg;}

        std::string getString(){return _nombreJugador;}
        float getMin(){return _min;}
        float getSeg(){return _seg;}

        ~Archivo();

    private:

        std::string _nombreJugador;
        float _min;
        float  _seg;
};

#endif // ARCHIVO_H
