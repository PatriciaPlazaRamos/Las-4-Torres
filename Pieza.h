#pragma once

class Tablero;

enum TYPEPIEZA {
    NONE,
    CABALLO,
    PEON,
    TORRE,
    REY,
    REINA,
};


class Pieza
{
public:
    TYPEPIEZA tipo;
    int tipoFigura;
    int x, y;
    char color;
    Pieza() : tipo(TYPEPIEZA::NONE), x(0), y(0) {};

    virtual void dibuja() {};
    virtual bool mover(int xInicial, int yInicial, int xFinal, int yFinal, bool ocupado, Tablero& t) {
        return true;
    };
   
};
