#include "Arbol.h"
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <fstream>




using namespace std;
Arbol::Arbol() {
	raiz = NULL;
}
void Arbol::agregarElemento(Hoja* hoj, Cubo* icubo){
	
	if (getRaiz() == 0){
		Hoja* nuevo = new Hoja(icubo);
		setRaiz(nuevo);

	}else if(strcmp(hoj->getCubo->getNombre(), hoj->getCubo->getNombre())>=0){
		//Mayor se va a la derecha
		if (hoj->mayor == NULL) {
			//Guarda en donde corresponde
			hoj->setMayor(new Hoja(icubo));
		}
		else {
			//Sigue recorriendo hasta encontrar null
			agregarElemento(hoj->mayor, icubo);
		}
	}
	else {
		//Menor
		if (hoj->menor == NULL) {
			hoj->setMenor(new Hoja(icubo));
		}
		else {
			agregarElemento(hoj->menor, icubo);
		}
	}
}

void Arbol::plantar(Cubo* icubo) {
	agregarElemento(getRaiz(), icubo);

}

Hoja* Arbol::getRaiz() {
	return raiz;
}

void Arbol::setRaiz(Hoja* root) {
	raiz = root;
}


Arbol::~Arbol()
{
	//destructor
}
