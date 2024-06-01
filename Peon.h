#pragma once
#include "Pieza.h"
#include "ETSIDI.h"
#include "freeglut.h"
#include "Tablero.h"
using ETSIDI::SpriteSequence;




class Peon : public Pieza
{
	//Accedemos a las imagenes .png para usarlas posteriormente
	SpriteSequence imagen1{ "imagenes/PEONBLANCO.png", 1 };
	SpriteSequence imagen2{ "imagenes/PEONNEGRO.png", 1 };

public:

	Peon(char _color) {
		color = _color;
		tipo = TYPEPIEZA(PEON);
		imagen1.setCenter(-0.7, -0.5); //blancas
		imagen1.setSize(3, 5);
		imagen2.setCenter(-0.7, -0.5);
		imagen2.setSize(3, 5);

	}

	virtual~Peon() {};


	void dibuja() override;

	
	bool mover(int xInicial, int yInicial, int xFinal, int yFinal, bool ocupado, Tablero& t) override;
};
