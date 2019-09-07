#include "Listas.h"
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <time.h>
#include <string>
#include <fstream>

using namespace std;
Listas::Listas() {
	cabeza = NULL;
	ultimo = NULL;
	cantidad = 0;
}
void Listas::agregarElemento(string fed) {
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

void Listas::setCantidad() {
	cantidad++;
}

string Listas::imprimirLista() {
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

int Listas::getCantidad() {
	return cantidad;
}

void Listas::eliminarElemento(string pizad) {
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
void Listas::setCantidadM() {
	cantidad--;
}

Listas::~Listas()
{
	//dtor
}
