#ifndef CUBO_H
#define CUBO_H

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "Matriz.h"

using namespace std;

class Cubo
{
private:
	typedef struct nodo {
		Matriz data;
		nodo* siguiente;
	}*nodoptr;


	
	int cantidad;
	
	
	
	

public:
	nodoptr cabeza;
	nodoptr ultimo;
	nodoptr temporal;
	Cubo();
	Cubo(string nombre, int ancho, int alto, int pixA, int pixAl);
	void configurar(string nombre, int ancho, int alto, int pixA, int pixAl);
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
