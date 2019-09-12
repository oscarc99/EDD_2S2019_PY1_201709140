#include "Cubo.h"
#include <iostream>

#include <sstream>
#include <string>
#include <fstream>


using namespace std;
Cubo::Cubo(string nombr, int ancho, int alto, int pixA, int pixAl) {
	nombre = nombr;
	image_widht = ancho;
	image_height = alto;
	pixel_widht = pixA;
	pixel_widht = pixAl;
	cabeza = NULL;
	ultimo = NULL;
	cantidad = 0;
}
void Cubo::agregarElemento(Matriz fed) {
	Nodo* nuevo = new Nodo(fed, NULL);

	if (cabeza == NULL) {
		
		cabeza = nuevo;
		ultimo = cabeza;
		setCantidad();
		
	}
	else {
		cantidad++;
		
		
		
		ultimo ->setSiguiente( nuevo);
		ultimo = nuevo;
	}
}

void Cubo::setCantidad() {
	cantidad++;
}

int Cubo::getCantidad() {
	return cantidad;
}

void Cubo::setCantidadM() {
	cantidad--;
}

string Cubo::getNombre() {
	return nombre;
}

Cubo::~Cubo()
{
	//dtor
}

