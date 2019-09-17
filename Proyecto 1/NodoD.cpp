#include "NodoD.h"
#include "Cubo.h"
#include <string>

using namespace std;

NodoD::NodoD(){
	siguiente = NULL;
	anterior = NULL;	
}

NodoD::NodoD(Cubo n) 
{
	cub = n;
	siguiente = NULL;
	anterior = NULL;
}

void NodoD::setValor(Cubo n) {
	cub = n;
}

void NodoD::setSiguiente(NodoD* n) {
	siguiente = n;
}

void NodoD::setAnterior(NodoD* n) {
	anterior = n;
}

Cubo NodoD::getValor() {
	return cub;
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

