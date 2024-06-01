#pragma once
#include "Pieza.h"
#include <iostream>


//using namespace std;

const int PiezaTam = 1;
const int casillaTam = 5;
class Tablero
{
private:
	Pieza* tablero[6][6];
	int contadorblanco;
	int contadornegro;
	int turno;
	bool fin;

	float x_ojo;
	float y_ojo;
	float z_ojo;
public:
	Tablero() :turno(1), contadorblanco(0), contadornegro(0), fin(0) {
		// Inicializacion del tablero	
		//no se si tengo q diferenciar el 4x4 y el 6x6 o puedo crear la matriz 6x6 y solo dibujar la 4x4 cuando sea necesario
		for (int y = 0; y < 6; y++) {
			for (int x = 0; x < 6; x++) {
				tablero[x][y] = nullptr;
			}
		}
	};
	~Tablero();
	void dibuja(int);
	void inicializa(int);

	void onMouseClick(int button, int state, int x, int y); //Obtiene la posicion del raton y mueve pieza
	static void confirmaMouse(int button, int state, int x, int y, Tablero& tablero)
	{
		tablero.onMouseClick(button, state, x, y);
	}
	friend class Peon;
	friend class Reina;
	friend class Rey;
	friend class Torre;
	friend class Caballo;
	friend class Pieza;
	friend class Coordinador;

	bool estaReyEnJaque(Tablero& t, char colorRey, bool ocupado);
	void dibujaPiezaBorrad(Tablero& t, TYPEPIEZA tipoFinal, int xFinal, int yFinal, char colorFinal);
	
};
