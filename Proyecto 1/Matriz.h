 #pragma once
#ifndef MATRIZ_H
#define MATRIZ_H

#include <string>
using namespace std;
class Matriz
{
private:
	typedef struct pixel {
		//Apuntadores 
		pixel* arriba;
		pixel* abajo;
		pixel* izquierda;
		pixel* derecha;
		//Informacion de cada pixel siendo el color
		string color;
		string nombre;
		//Ayuda para la posicion
		int pos_x;
		int pos_y;

	}*pixelptr;

	//Atributos de la matriz(cabeceras)
	pixelptr primero;
	pixelptr fin_derecha;
	pixelptr fin_abajo;

public:
	pixelptr temp_y;
	pixelptr temp_x;
	//constructor
	Matriz();

	void columna();

	void fila();

	void mostrar();

	//Guarda informacion del pixel
	void guardar_pix(string color, int x, int y);

};

#endif