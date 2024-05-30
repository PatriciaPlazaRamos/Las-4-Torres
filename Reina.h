#pragma once
#include "Pieza.h"
#include "ETSIDI.h"
#include "freeglut.h"
#include "Tablero.h"

using ETSIDI::SpriteSequence;




class Reina : public Pieza
{
	//Accedemos a las imagenes .png para usarlas posteriormente
	SpriteSequence imagen1{ "imagenes/REINABLANCA.png", 1 };
	SpriteSequence imagen2{ "imagenes/REINANEGRA.png", 1 };
	
public:
	
	Reina(char _color) {
	

	}

	virtual~Reina() {};


	void dibuja() override;

	// PRUBEBA
	bool mover(int xInicial, int yInicial, int xFinal, int yFinal, bool ocupado, Tablero& t) override;
};
