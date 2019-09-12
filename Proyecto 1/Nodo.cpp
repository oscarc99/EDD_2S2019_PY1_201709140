#include "Nodo.h"

using namespace std;

Nodo::Nodo(Matriz n) {
	mat = n;
	siguiente = NULL;
}

Nodo::Nodo(Matriz n, Nodo* nod) {
	mat = n;
	siguiente = nod;
}

Nodo::Nodo() {
	siguiente = NULL;
}

void Nodo::setValor(Matriz n, string name) {
	mat = n;

}

void Nodo::setSiguiente(Nodo* n) {
	siguiente = n;
}

Matriz Nodo::getValor() {
	return mat;
}

Nodo* Nodo::getSiguiente() {
	return siguiente;
}


