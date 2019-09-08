#ifndef NODO_H
#define NODO_H

#include "pch.h"
#include <string>
using namespace std;


class Nodo
{
private:
	
	string mat;
	Nodo* siguiente;

public:
	string mat;
	

	Nodo();
	Nodo(string);
	Nodo(string, Nodo*);

	void setValor(string);
	void setSiguiente(Nodo*);
	string getValor();
	Nodo* getSiguiente();
	virtual ~Nodo();


};

#endif // NODO_H