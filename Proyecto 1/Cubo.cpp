#include "Cubo.h"
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <fstream>
#include "pch.h"

using namespace std;
Cubo::Cubo() {
	cabeza = NULL;
	ultimo = NULL;
	cantidad = 0;
}
void Cubo::agregarElemento(string fed) {
	Nodo* nuevo = new Nodo(fed, cabeza);

	if (cabeza == NULL) {
		
		cabeza = nuevo;
		ultimo = cabeza;
		setCantidad();
		
	}
	else {
		cantidad++;
		Nodo* aux = ultimo;
		
		
		ultimo = nuevo;
		aux->setSiguiente(ultimo);
	}
}

void Cubo::setCantidad() {
	cantidad++;
}

string Cubo::imprimirLista() {
	string cadenlis = "";
	Nodo* aux = cabeza;

	if (cabeza == NULL) {
		return "VACIA";
	}
	if (cantidad == 0) {
		return "VACIA";
	}
	if (cabeza == ultimo) {
		return "\"" + cabeza->getValor() + "\"";
	}
	cadenlis += "	\"" + cabeza->getValor() + "\"-> ";
	aux = aux->getSiguiente();
	while (aux != cabeza) {
		cadenlis += "	\"" + aux->getValor() + "\"-> ";
		aux = aux->getSiguiente();
	}
	cadenlis += "	\"" + aux->getValor() + "\"\n ";
	return cadenlis;
}

int Cubo::getCantidad() {
	return cantidad;
}

void Cubo::eliminarElemento(string pizad) {
	Nodo* aux = cabeza;
	Nodo* ant = NULL;

	if (aux != NULL) {
		if (aux->getValor() == pizad) {
			if (aux->getSiguiente() == NULL) {
				cabeza = NULL;
				ultimo = NULL;
				cantidad = 0;
			}
			else {
				ultimo->setSiguiente(aux->getSiguiente());
				cabeza = aux->getSiguiente();
				setCantidadM();
			}
		}
		else {
			while (aux != NULL) {
				ant = aux;
				aux = aux->getSiguiente();

				if (aux->getValor() == pizad) {
					ant->setSiguiente(aux->getSiguiente());
					aux->setSiguiente(NULL);
					setCantidadM();
					break;
				}

			}
		}
	}
}
void Cubo::setCantidadM() {
	cantidad--;
}

Cubo::~Cubo()
{
	//dtor
}
