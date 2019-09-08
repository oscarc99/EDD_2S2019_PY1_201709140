#include "Arbol.h"
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <fstream>
#include "pch.h"



using namespace std;
Arbol::Arbol() {
	raiz = NULL;
}
void Arbol::agregarElemento(Hoja* hoj, string name, Cubo* icubo, int iiW, int iiH, int ipW, int ipH) {
	
	if (getRaiz() == 0){
		Hoja* nuevo = new Hoja(name,  icubo, iiW, iiH, ipW,ipH);
		setRaiz(nuevo);

	}else if(strcmp( name.c_str(), hoj->getNombre)>=0){
		//Mayor se va a la derecha
		if (hoj->mayor == NULL) {
			//Guarda en donde corresponde
			hoj->setMayor(new Hoja(name, icubo, iiW, iiH, ipW, ipH));
		}
		else {
			//Sigue recorriendo hasta encontrar null
			agregarElemento(hoj->mayor, name, icubo, iiW, iiH, ipW, ipH);
		}
	}
	else {
		//Menor
		if (hoj->menor == NULL) {
			hoj->setMenor(new Hoja(name, icubo, iiW, iiH, ipW, ipH));
		}
		else {
			agregarElemento(hoj->menor, name, icubo, iiW, iiH, ipW, ipH);
		}
	}
}

void Arbol::plantar(string name, Cubo* icubo, int iiW, int iiH, int ipW, int ipH) {
	agregarElemento(getRaiz(),name, icubo, iiW, iiH, ipW, ipH);

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
