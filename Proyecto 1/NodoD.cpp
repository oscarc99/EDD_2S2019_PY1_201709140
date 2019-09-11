#include "NodoD.h"
#include "Cubo.h"
#include <stralign.h>

using namespace std;


NodoD::NodoD(Cubo n) 
{
	cubo = &n;
	siguiente = NULL;
	anterior = NULL;
}

void NodoD::setValor(Cubo n) {
	cubo = &n;
}

void NodoD::setSiguiente(NodoD* n) {
	siguiente = n;
}

void NodoD::setAnterior(NodoD* n) {
	anterior = n;
}

string NodoD::getValor() {
	return cubo->nombre;
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
