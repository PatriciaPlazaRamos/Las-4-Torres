#include "Tablero.h"
#include "Pieza.h"
#include "Peon.h"
#include "Caballo.h"
#include "Reina.h"
#include "Torre.h"
#include "Rey.h"




Tablero::~Tablero()
{
	//pieza.destruirContenido();

	// Liberar memoria de las piezas
	/*
	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 6; x++) {
			delete tablero[x][y];
			tablero[x][y] = nullptr;
		}
	}*/
	
}



void Tablero::dibuja(int ControlTablero) {

	gluLookAt(x_ojo, y_ojo, z_ojo, // posicion del ojo
		x_ojo, y_ojo, 0.0, // hacia que punto mira (0,0,0)
		0.0, 1.0, 0.0); // definimos hacia arriba (eje Y)

	int margenIzquierda;
	int margenInferior;

	// dibujo del tablero
	if (ControlTablero == 1) {
		margenInferior = 3;
		margenIzquierda = 3;
		for (int y = 0; y < 6; y++) {
			for (int x = 0; x < 6; x++) {
				if ((x + y) % 2 == 0) {
					glColor3ub(26, 105, 150); // Color oscurito
				}
				else {
					glColor3ub(192, 219, 235); // Color clarito
				}
				glBegin(GL_QUADS);
				glVertex2i(margenIzquierda + x * (casillaTam - 1), margenInferior + y * (casillaTam + 1));
				glVertex2i(margenIzquierda + (x + 1) * (casillaTam - 1), margenInferior + y * (casillaTam + 1));
				glVertex2i(margenIzquierda + (x + 1) * (casillaTam - 1), margenInferior + (y + 1) * (casillaTam + 1));
				glVertex2i(margenIzquierda + x * (casillaTam - 1), margenInferior + (y + 1) * (casillaTam + 1));
				glEnd();

				// Dibujar la pieza en la casilla
				if (tablero[x][y] != nullptr) {
					glPushMatrix();
					glTranslatef(margenIzquierda + x * (casillaTam - 1), margenInferior + y * (casillaTam + 1), 0.1);
					tablero[x][y]->dibuja();
					glPopMatrix();
				}
			}
		}
	}
	
}

void Tablero::inicializa(int ControlTablero) {


	x_ojo = 20;
	y_ojo = 20;
	z_ojo = 30; // habria q mirarlo bien

	
	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 6; x++) {
			tablero[x][y] = nullptr;
		}
	}
	turno = 1;

	tablero[1][0] = new Caballo('b');
	tablero[4][0] = new Caballo('b');
	tablero[1][5] = new Caballo('n');
	tablero[4][5] = new Caballo('n');
	tablero[2][0] = new Reina('b');
	tablero[2][5] = new Reina('n');
	tablero[0][0] = new Torre('b');
	tablero[5][0] = new Torre('b');
	tablero[0][5] = new Torre('n');
	tablero[5][5] = new Torre('n');
	tablero[3][0] = new Rey('b');
	tablero[3][5] = new Rey('n');


	for (int i = 0; i < 6; i++) {
		tablero[i][1] = new Peon('b'); //peones blancos en toda la fila 1
		tablero[i][4] = new Peon('n'); //peones negros en toda la fila 6
	}
	

	




	//ETSIDI::play("sonidos/Empieza.wav");//tengo q implementar los sonidos
}
