#include "Torre.h"


void Torre::dibuja() {

	glPushMatrix();
	glColor3f(1.0f, 0.0f, 0.0f);
	if (color == 'b') {
		imagen1.draw(); //blancas
	}
	else if (color == 'n') {
		imagen2.draw(); //negras
	}
	glPopMatrix();
}


bool Torre::mover(int xInicial, int yInicial, int xFinal, int yFinal, bool ocupado, Tablero& t) {
	
}
