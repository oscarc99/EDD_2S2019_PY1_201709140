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
	void reporte_arbol();
	string nombre;
	Hoja* getRaiz();
	string dot(Hoja* hj, string cadena);
	void agregarElemento(Hoja* raizActual, Cubo* cubo);
	void plantar(Cubo* cub);
	void setRaiz(Hoja*);
	void rep_inorder();
	void rep_preorder();
	void rep_postorder();
	string inorder(Hoja*);
	string preorder(Hoja*);
	string postorder(Hoja*);



	
	virtual ~Arbol();
};

#endif // ARBOL_H