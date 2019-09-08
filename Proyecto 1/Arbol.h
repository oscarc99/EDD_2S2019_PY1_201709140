#pragma once
#ifndef ARBOL_H
#define ARBOL_H

#include "pch.h"
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
	void agregarElemento(Hoja*, string , Cubo*, int,int ,int, int);
	void plantar(string, Cubo*, int, int, int, int);
	void setRaiz(Hoja*);


	
	virtual ~Arbol();
};

#endif // ARBOL_H