#ifndef NODO_H
#define NODO_H

#include <iostream>
#include <string>
#include "Matriz.h"
using namespace std;


class Nodo
{
private:
	
	
	Nodo* siguiente;

public:
	Matriz mat;
	string nombre;

	Nodo();
	Nodo(Matriz);
	Nodo(Matriz, Nodo*);

	void setValor(Matriz, string);
	void setSiguiente(Nodo*);
	Matriz getValor();
	Nodo* getSiguiente();
	


};

#endif // NODO_H
