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

void Lista::reporte() {
	ofstream archivo;
	archivo.open("filtro.dot", ios::out);
	archivo << "digraph G { \n";
	archivo << "node [shape=record];rankdir=LR; \n";
	NodoD *temp = cabeza;
	
	while (temp != ultimo) {

		archivo << temp->getValor()+ " ->";
		temp = temp->getSiguiente();
	}
	archivo << ultimo->getValor();
	NodoD *tem = ultimo;
	
	while (tem != cabeza) {

		archivo << tem->getValor() + " ->";
		tem = tem->getAnterior();
	}
	archivo << cabeza->getValor();
	archivo << cabeza->getValor() << "-> " << ultimo->getValor();
	archivo << ultimo->getValor() << "-> " << cabeza->getValor();

	archivo << "}";
	system("dot -Tjpg filtro.dot -o filtro.jpg");
	system("nohup display preorder.jpg &");
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
