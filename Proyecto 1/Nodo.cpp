#include "Nodo.h"
#include "pch.h"

using namespace std;

Nodo::Nodo(string n) {
	mat = n;
	siguiente = NULL;
}

Nodo::Nodo(string n, Nodo* nod) {
	mat = n;
	siguiente = nod;
}

Nodo::Nodo() {
	siguiente = NULL;
}

void Nodo::setValor(string n) {
	mat = n;
}

void Nodo::setSiguiente(Nodo* n) {
	siguiente = n;
}

string Nodo::getValor() {
	return mat;
}

Nodo* Nodo::getSiguiente() {
	return siguiente;
}

Nodo::~Nodo()
{
	//dtor
}
