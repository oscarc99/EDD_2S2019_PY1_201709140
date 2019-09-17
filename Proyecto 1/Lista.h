#ifndef LISTA_H
#define LISTA_H

#include "Cubo.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

class Lista
{
	private:
	typedef struct nodod {
		Cubo cubo;
		int alto;
		int ancho;
		int pixelx;
		int pixely;
		nodod* siguiente;
		nodod* anterior;
	}*nododptr;

	nododptr cabeza;
	nododptr ultimo;
	
	
public:
	Lista();
	
	int cantidad;
	void setCantidad();
	

	void setCantidadM();

	void Limpiar();

	
	void reporte();
	string nombre;
	
	void agregarElement(Cubo);

	

	int getCantidad();
	virtual ~Lista();
};

#endif // LISTA_

