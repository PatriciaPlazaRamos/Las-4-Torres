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
		color = _color;
		tipo = TYPEPIEZA(CABALLO);
		imagen1.setCenter(-1, -0.5); //blancas
		imagen1.setSize(3, 5);
		imagen2.setCenter(-1, -0.5);
		imagen2.setSize(3, 5);

	}

	virtual~Caballo() {};


	void dibuja() override;

	bool mover(int xInicial, int yInicial, int xFinal, int yFinal, bool ocupado, Tablero& t) override;
};
