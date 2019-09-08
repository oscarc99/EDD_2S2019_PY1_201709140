#pragma once
#ifndef LISTA_H
#define LISTA_H

#include "pch.h"
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
	
	string nombre;
	string imprimirLista();
	void agregarElemento(Cubo, string);

	

	int getCantidad();
	virtual ~Lista();
};

#endif // LISTA_H