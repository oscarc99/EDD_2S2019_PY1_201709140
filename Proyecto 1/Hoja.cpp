#include "Hoja.h"

#include "pch.h"
using namespace std;

Hoja::Hoja(string name, Cubo * cubo, int ancho, int alto, int pixA, int pixAl) {
	nombre = name;
	cubs = cubo;
	image_widht = ancho;
	image_height = alto;
	pixel_widht = pixA;
	pixel_height = pixAl;
	mayor = NULL;
	menor = NULL;

}

Hoja::Hoja(string name) {
	nombre = name;
	mayor = NULL;
	menor = NULL;
}

void Hoja::setMenor(Hoja* n) {
	menor = n;
}

void Hoja::setMayor(Hoja* n) {
	mayor = n;
}

void Hoja::set_imWidht(int n) {
	image_widht = n;
}

void Hoja::set_imHeight(int n) {
	image_height = n;
}

void Hoja::set_pixWidht(int n) {
	pixel_widht = n;
}

void Hoja::set_pixHeight(int n) {
	pixel_height = n;
}

string Hoja::getNombre() {
	return nombre;
}

Cubo* Hoja::getCubo() {
	return cubs;
}

Nodo::~Nodo()
{
	//dtor
}
