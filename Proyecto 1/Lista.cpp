#include "Lista.h"
#include <iostream>

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

void Lista::agregarElement(Cubo cubs) {
	nododptr nuevo = new nodod;
	nuevo->cubo = cubs;
	if (cabeza == NULL) {
		nuevo->anterior=nuevo;
		nuevo->siguiente=nuevo;
		cabeza = nuevo;
		ultimo = nuevo;
		cantidad++;
	}
	else {
		cantidad++;
		
		nuevo->anterior=ultimo;
		nuevo->siguiente=cabeza;


		ultimo = nuevo;
		
	}
}

void Lista::reporte() {
	ofstream archivo;
	archivo.open("filtro.dot", ios::out);
	archivo << "digraph G { \n";
	archivo << "node [shape=record];rankdir=LR; \n";
	nododptr temp = new nodod;
	temp=cabeza;
	while (temp != ultimo) {

		archivo << temp->cubo.nombre + " ->";
		temp = temp->siguiente;
	}
	archivo << ultimo->cubo.nombre;
	nododptr tem = new nodod;
	tem=ultimo;
	while (tem != cabeza) {

		archivo << temp->cubo.nombre+ " ->";
		tem = tem->anterior;
	}
	archivo << cabeza->cubo.nombre;
	archivo << cabeza->cubo.nombre << "-> " << ultimo->cubo.nombre;
	archivo << ultimo->cubo.nombre << "-> " << cabeza->cubo.nombre;

	archivo << "}";
	system("dot -Tjpg filtro.dot -o filtro.jpg");
	system("nohup display preorder.jpg &");
}


int Lista::getCantidad() {
	return cantidad;
}

void Lista::Limpiar(){
	cabeza = NULL;
	ultimo = NULL;
	cantidad = 0;
} 

Lista::~Lista()
{
	//destructor
}


