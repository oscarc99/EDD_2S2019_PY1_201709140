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

Cubo::Cubo(){
	cabeza = NULL;
	ultimo = NULL;
	cantidad = 0;	
}

void Cubo::configurar(string nombr, int ancho, int alto, int pixA, int pixAl) {
	nombre = nombr;
	image_widht = ancho;
	image_height = alto;
	pixel_widht = pixA;
	pixel_widht = pixAl;

}

void Cubo::agregarElemento(Matriz fed) {
	nodoptr n = new nodo;
	n->siguiente = NULL;
	n->data = fed;
	if (cabeza == NULL) {
		cabeza = n;
		ultimo = n;
		cantidad++;
	}
	else
	{
		ultimo->siguiente = n;
		ultimo = n;
		cantidad++;
	}
}


int Cubo::getCantidad() {
	return cantidad;
}

string Cubo::getNombre() {
	return nombre;
}

Cubo::~Cubo()
{
	//dtor
}

