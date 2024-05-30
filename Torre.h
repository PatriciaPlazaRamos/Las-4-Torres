#pragma once
#include "Pieza.h"
#include "ETSIDI.h"
#include "freeglut.h"
#include "Tablero.h"
using ETSIDI::SpriteSequence;




class Torre : public Pieza
{
	//Accedemos a las imagenes .png para usarlas posteriormente
	SpriteSequence imagen1{ "imagenes/TORREBLANCO.png", 1 };
	SpriteSequence imagen2{ "imagenes/TORRENEGRO.png", 1 };

public:
	
	Torre(char _color) {
	
	}

	virtual~Torre() {};


	void dibuja() override;

	// PRUBEBA
	bool mover(int xInicial, int yInicial, int xFinal, int yFinal, bool ocupado, Tablero& t) override;
};
