#include "NodoD.h"
#include "pch.h"

using namespace std;

NodoD::NodoD(Cubo n, string name) {
	cubo = n;
	nombre = name;
	siguiente = NULL;
	anterior = NULL;
}

NodoD::NodoD(Cubo n, NodoD* nod, NodoD* no) {
	cubo = n;
	siguiente = nod;
	anterior = no;
}

NodoD::NodoD() {
	siguiente = NULL;
	anterior = NULL;
}

void NodoD::setValor(Cubo n) {
	cubo = n;
}

void NodoD::setSiguiente(NodoD* n) {
	siguiente = n;
}

void NodoD::setAnterior(NodoD* n) {
	anterior = n;
}

Cubo NodoD::getValor() {
	return cubo;
}

NodoD* NodoD::getSiguiente() {
	return siguiente;
}

NodoD* NodoD::getAnterior() {
	return anterior;
}

NodoD::~NodoD()
{
	//dtor
}
