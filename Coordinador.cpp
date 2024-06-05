/*#include "Coordinador.h"
#include "freeglut.h"
#include <math.h>
#include "ETSIDI.h"
bool ControlTablero;
void Coordinador::dibuja()
{
	if (estado == INICIO) {
		gluLookAt(0, 0, 30, // posicion del ojo
			0.0, 7.5, 0.0, // hacia que punto mira (0,7.5,0)
			0.0, 1.0, 0.0); // definimos hacia arriba (eje Y)
		std::cout << estado << std::endl;

		ETSIDI::setTextColor(1, 1, 0);
		ETSIDI::setFont("fuentes/victorianbritania.ttf", 16);
		ETSIDI::printxy("Minichess", -5, 15);
		ETSIDI::setTextColor(1, 1, 1);
		ETSIDI::setFont("fuentes/victorianbritania.ttf", 12);
		ETSIDI::printxy("PULSE LA TECLA -E- PARA JUGAR", -10, 9);
		ETSIDI::printxy("PULSE LA TECLA -S- PARA SALIR", -10, 5);
		ETSIDI::printxy("LAS CUATRO TORRES", 2, 1);
	}
	else if (estado == JUGAR)
	{
		tablero.dibuja(ControlTablero);

	}


	else if (estado == FIN)
	{
		gluLookAt(0, 0, 30, // posicion del ojo
			0.0, 7.5, 0.0, // hacia que punto mira (0,7.5,0)
			0.0, 1.0, 0.0); // definimos hacia arriba (eje Y)

		ETSIDI::setTextColor(1, 1, 0);

		ETSIDI::setFont("fuentes/victorianbritania.ttf", 16);
		ETSIDI::printxy("FINAL DE LA PARTIDA", -10, 13);

		if ((tablero.turno % 2) != 0) {
			ETSIDI::setFont("fuentes/victorianbritania.ttf", 12);
			ETSIDI::printxy("LAS NEGRAS GANAN", -10, 9);
			//ETSIDI::play("sonidos/vnegras.wav");
			//Los comenta vanden para quitar los sonidos que no son nuestros
		}
		else if ((tablero.turno % 2) == 0) {
			ETSIDI::setFont("fuentes/victorianbritania.ttf", 12);
			ETSIDI::printxy("LAS BLANCAS GANAN", -10, 9);
			//ETSIDI::play("sonidos/vblancas.wav");
		}


		ETSIDI::setFont("fuentes/victorianbritania.ttf", 12);
		ETSIDI::printxy("FIN de la partida, GG WP", -10, 5);
		ETSIDI::printxy("Pulsa -C- para continuar", -10, 3);
	}
}

void Coordinador::tecla(unsigned char key)
{
	if (estado == INICIO)
	{
		if (key == 'e' || key == 'E')
		{
			ControlTablero = 1;
			tablero.dibuja(ControlTablero);
			tablero.inicializa(ControlTablero);
			estado = JUGAR;
			std::cout << estado << std::endl;
		}
		if (key == 's')
			exit(0);

	}
	else if (estado == JUGAR)
	{

		if (key == 'f' && tablero.fin) {
			estado = FIN;
		}
	}
	else if (estado == FIN)
	{
		if (key == 'c')
			estado = INICIO;
	}


}*/

#include "Coordinador.h"
#include "freeglut.h"
#include <math.h>
#include "ETSIDI.h"
bool ControlTablero;
void Coordinador::dibuja()
{
	if (estado == INICIO) {
		gluLookAt(0, 0, 30, // posicion del ojo
			0.0, 7.5, 0.0, // hacia que punto mira (0,7.5,0)
			0.0, 1.0, 0.0); // definimos hacia arriba (eje Y)
		std::cout << estado << std::endl;

		ETSIDI::setTextColor(1, 1, 0);
		ETSIDI::setFont("fuentes/victorianbritania.ttf", 16);
		ETSIDI::printxy("Minichess", -5, 15);
		ETSIDI::setTextColor(1, 1, 1);
		ETSIDI::setFont("fuentes/victorianbritania.ttf", 12);
		ETSIDI::printxy("PULSE LA TECLA -E- PARA JUGAR LOS ALAMOS 6X6", -10, 9);
		ETSIDI::printxy("PULSE LA TECLA -P- PARA JUGAR SYLVERMAN 4X4", -10, 7);
		ETSIDI::printxy("PULSE LA TECLA -S- PARA SALIR", -10, 5);
		ETSIDI::printxy("LAS CUATRO TORRES", 2, 1);
	}
	else if (estado == ALAMOS)
	{
		ControlTablero = 1;
		tablero.dibuja(ControlTablero);
		//std::cout << estado << std::endl;
	}
	else if (estado == SYLVERMAN)
	{
		ControlTablero = 0;
		tablero.dibuja(ControlTablero);
		std::cout << estado << std::endl;
	}

	else if (estado == FIN)
	{
		gluLookAt(0, 0, 30, // posicion del ojo
			0.0, 7.5, 0.0, // hacia que punto mira (0,7.5,0)
			0.0, 1.0, 0.0); // definimos hacia arriba (eje Y)

		ETSIDI::setTextColor(1, 1, 0);

		ETSIDI::setFont("fuentes/victorianbritania.ttf", 16);
		ETSIDI::printxy("FINAL DE LA PARTIDA", -10, 13);

		if ((tablero.turno % 2) != 0) {
			ETSIDI::setFont("fuentes/victorianbritania.ttf", 12);
			ETSIDI::printxy("LAS NEGRAS GANAN", -10, 9);
			//ETSIDI::play("sonidos/vnegras.wav");
			//Los comenta vanden para quitar los sonidos que no son nuestros
		}
		else if ((tablero.turno % 2) == 0) {
			ETSIDI::setFont("fuentes/victorianbritania.ttf", 12);
			ETSIDI::printxy("LAS BLANCAS GANAN", -10, 9);
			//ETSIDI::play("sonidos/vblancas.wav");
		}


		ETSIDI::setFont("fuentes/victorianbritania.ttf", 12);
		ETSIDI::printxy("FIN de la partida, GG WP", -10, 5);
		ETSIDI::printxy("Pulsa -C- para continuar", -10, 3);
	}
}

void Coordinador::tecla(unsigned char key)
{
	if (estado == INICIO)
	{
		if (key == 'e' || key == 'E')
		{
			ControlTablero = 1;
			tablero.dibuja(ControlTablero);
			tablero.inicializa(ControlTablero);
			estado = ALAMOS;
			std::cout << estado << std::endl;
		}
		if (key == 's')
			exit(0);
		if (key == 'P' || key == 'p')
		{
			ControlTablero = 0;
			tablero.dibuja(ControlTablero);
			tablero.inicializa(ControlTablero);
			estado = SYLVERMAN;
		}

	}
	else if (estado == ALAMOS)
	{

		if (key == 'f' && tablero.fin) {
			estado = FIN;
		}
	}
	else if (estado == FIN)
	{
		if (key == 'c')
			estado = INICIO;
	}

	else if (estado == SYLVERMAN) {

		if (key == 'f' && tablero.fin) {
			estado = FIN;
		}
	}


}

void Coordinador::onMouseClick(int button, int state, int x, int y) {
	if (estado == ALAMOS ) {
		tablero.onMouseClick(button, state, x, y);
	}
	if (estado == SYLVERMAN) {
		tablero.onMouseClick(button, state, x, y);
	}
	glutPostRedisplay();
}
