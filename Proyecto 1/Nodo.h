#pragma once
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
	

	Nodo();
	Nodo(Matriz);
	Nodo(Matriz, Nodo*);

	void setValor(Matriz);
	void setSiguiente(Nodo*);
	Matriz getValor();
	Nodo* getSiguiente();
	virtual ~Nodo();


};

#endif // NODO_H