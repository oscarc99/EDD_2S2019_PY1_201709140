#include "Hoja.h"

using namespace std;

Hoja::Hoja(Cubo * cubo) {
	
	cubs = cubo;
	
	mayor = NULL;
	menor = NULL;

}

Hoja::Hoja() {
	
	mayor = NULL;
	menor = NULL;
}

void Hoja::setMenor(Hoja* n) {
	menor = n;
}

void Hoja::setMayor(Hoja* n) {
	mayor = n;
}


Cubo* Hoja::getCubo() {
	return cubs;
}

Nodo::~Nodo()
{
	//dtor
}
