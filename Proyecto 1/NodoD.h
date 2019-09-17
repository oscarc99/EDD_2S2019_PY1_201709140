#ifndef NODOD_H
#define NODOD_H

#include <iostream>
#include "Cubo.h"
#include <string>
using namespace std;


class NodoD
{
private:

	
	NodoD* siguiente;
	NodoD* anterior;


public:
	Cubo cub;
	
	NodoD();
	NodoD(Cubo);
	
	Cubo getValor();
	void setValor(Cubo);
	void setSiguiente(NodoD*);
	void setAnterior(NodoD*);
	
	NodoD* getSiguiente();
	NodoD* getAnterior();
	virtual ~NodoD();


};

#endif // NODOD_H


