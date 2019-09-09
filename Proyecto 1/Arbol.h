#pragma once
#ifndef ARBOL_H
#define ARBOL_H


#include "Hoja.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <sstream>
#include <fstream>

using namespace std;

class Arbol
{
public:
	Hoja* raiz;
	Arbol();

	string nombre;
	Hoja* getRaiz();
	void agregarElemento(Hoja* raizActual, Cubo* cubo);
	void plantar(Cubo* cub);
	void setRaiz(Hoja*);


	
	virtual ~Arbol();
};

#endif // ARBOL_H