#pragma once
#include "Pieza.h"
#include "ETSIDI.h"
#include "freeglut.h"
#include "Tablero.h"
using ETSIDI::SpriteSequence;




class Rey : public Pieza
{
	//Accedemos a las imagenes .png para usarlas posteriormente
	SpriteSequence imagen1{ "imagenes/REYBLANCO.png", 1 };
	SpriteSequence imagen2{ "imagenes/REYNEGRO.png", 1 };
	
	public:
	

	Rey(char _color) {
	
	}

	virtual~Rey() {};


	void dibuja() override;

	// PRUBEBA
	bool mover(int xInicial, int yInicial, int xFinal, int yFinal, bool ocupado, Tablero& t) override;
};
