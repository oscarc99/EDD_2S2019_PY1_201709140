#pragma once
#ifndef LISTA_H
#define LISTA_H


#include "NodoD.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <fstream>

using namespace std;

class Lista
{
private:
	NodoD* cabeza;
	NodoD* ultimo;
	int cantidad;
	void setCantidad();
	

	void setCantidadM();


public:
	Lista();
	 void reporte();
	string nombre;
	
	void agregarElemento(Cubo);

	

	int getCantidad();
	virtual ~Lista();
};

#endif // LISTA_H