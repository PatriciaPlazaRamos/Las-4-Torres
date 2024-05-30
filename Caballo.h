#pragma once
#include "Pieza.h"
#include "ETSIDI.h"
#include "freeglut.h"
#include "Tablero.h"
using ETSIDI::SpriteSequence;




class Caballo : public Pieza
{
	//Accedemos a las imagenes .png para usarlas posteriormente
	SpriteSequence imagen1{ "imagenes/CABALLOBLANCO.png", 1 };
	SpriteSequence imagen2{ "imagenes/CABALLONEGRO.png", 1 };

public:

	Caballo(char _color) {
	
	}

	virtual~Caballo() {};


	void dibuja() override;

	// PRUEBA
	bool mover(int xInicial, int yInicial, int xFinal, int yFinal, bool ocupado, Tablero& t) override;
};
