#include "Lista.h"
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <fstream>
#include "Cubo.h"


using namespace std;
Lista::Lista() {
	cabeza = NULL;
	ultimo = NULL;
	cantidad = 0;
}
void Lista::agregarElemento(Cubo cub) {
	NodoD* nuevo = new NodoD(cub);

	if (cabeza == NULL) {
		nuevo->setAnterior(nuevo);
		nuevo->setSiguiente(nuevo);
		cabeza = nuevo;
		ultimo = cabeza;
		setCantidad();

	}
	else {
		cantidad++;
		
		nuevo->setAnterior(ultimo);
		nuevo->setSiguiente(cabeza);


		ultimo = nuevo;
		
	}
}

void Lista::setCantidad() {
	cantidad++;
}

int Lista::getCantidad() {
	return cantidad;
}

void Lista::setCantidadM() {
	cantidad--;
}

Lista::~Lista()
{
	//destructor
}
