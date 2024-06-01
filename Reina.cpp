#include "freeglut.h"
#include "Reina.h"

void Reina::dibuja() {

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


bool Reina::mover(int xInicial, int yInicial, int xFinal, int yFinal, bool ocupado, Tablero& t) {




}
