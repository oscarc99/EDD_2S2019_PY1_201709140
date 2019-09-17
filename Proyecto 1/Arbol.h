#ifndef ARBOL_H
#define ARBOL_H

#include "Hoja.h"
#include <iostream>
#include <string.h>

#include <sstream>
#include <fstream>

using namespace std;


class Arbol
{
	public:
		string name_image[15];
		Hoja* raiz;
		int tamano;
		Arbol();
		void reporte_arbol();
		string nombre;
		Hoja* getRaiz();
		string dot(Hoja* hj);
		void agregarElemento(Hoja* raizActual, Cubo* cubo);
		void plantar(Cubo* cub);
		void setRaiz(Hoja*);
		void rep_inorder();
		void rep_preorder();
		void rep_postorder();
		string inorder(Hoja*);
		string preorder(Hoja*);
		string postorder(Hoja*);
		Cubo* buscar(string, Hoja*);



	
	virtual ~Arbol();
	protected:
};

#endif

