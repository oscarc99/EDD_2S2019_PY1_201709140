#pragma once
#ifndef NODOD_H
#define NODOD_H

#include "pch.h"
#include "Cubo.h"
#include <string>
using namespace std;


class NodoD
{
private:

	
	NodoD* siguiente;
	NodoD* anterior;


public:
	Cubo cubo;
	string nombre;


	NodoD();
	NodoD(Cubo, string);
	NodoD(Cubo, NodoD*,NodoD*);

	void setValor(Cubo);
	void setSiguiente(NodoD*);
	void setAnterior(NodoD*);
	Cubo getValor();
	NodoD* getSiguiente();
	NodoD* getAnterior();
	virtual ~NodoD();


};

#endif // NODOD_H