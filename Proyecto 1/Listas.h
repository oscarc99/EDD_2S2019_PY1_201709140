#pragma once
#ifndef LISTAS_H
#define LISTAS_H

#include "Nodo.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <time.h>
#include <fstream>

using namespace std;

class Listas
{
private:
	Nodo* cabeza;
	
	int cantidad;
	void setCantidad();
	int contadorsito;
	
	void setCantidadM();
	

public:
	Listas();
	Nodo* ultimo;
	
	string imprimirLista();
	void agregarElemento(string);
	
	void eliminarElemento(string);
	
	int getCantidad();
	virtual ~Listas();
};

#endif // LISTAS_H
