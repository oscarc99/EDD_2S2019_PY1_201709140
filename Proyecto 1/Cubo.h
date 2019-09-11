#pragma once
#ifndef CUBO_H
#define CUBO_H

#include "Nodo.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <fstream>

using namespace std;

class Cubo
{
private:
	
	
	int cantidad;
	void setCantidad();
	int contadorsito;
	
	void setCantidadM();
	

public:
	Cubo();
	Cubo(string nombre, int ancho, int alto, int pixA, int pixAl);
	Nodo* cabeza;
	Nodo* ultimo;
	string nombre;
	int image_widht;
	int image_height;
	int pixel_widht;
	int pixel_height;
	
	string getNombre();
	void agregarElemento(Matriz);
	
	
	
	int getCantidad();
	virtual ~Cubo();
};

#endif // CUBO_H
