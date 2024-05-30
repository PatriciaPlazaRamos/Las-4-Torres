#pragma once
#include "Tablero.h"

class Coordinador
{
public:
	Coordinador() { estado = INICIO; };
	virtual ~Coordinador() {};

	void dibuja();
	void tecla(unsigned char key);
	//void onMouseClick(int button, int state, int x, int y);

	friend class Tablero;


protected:

	enum Estado { INICIO, JUGAR, FIN };
	Estado estado;

	Tablero tablero;

};
