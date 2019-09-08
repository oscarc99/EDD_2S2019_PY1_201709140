#pragma once
#ifndef CUBO_H
#define CUBO_H

#include "pch.h"
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
	Nodo* cabeza;
	
	int cantidad;
	void setCantidad();
	int contadorsito;
	
	void setCantidadM();
	

public:
	Cubo();
	Nodo* ultimo;
	string nombre;
	string imprimirLista();
	string getNombre();
	void agregarElemento(string);
	
	void eliminarElemento(string);
	
	int getCantidad();
	virtual ~Cubo();
};

#endif // CUBO_H
