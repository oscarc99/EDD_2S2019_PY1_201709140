#include "Matriz.h"
#include<iostream>
#include<cstdlib>
using namespace std;
Matriz::Matriz()
{
	//Crea la matriz vacia
	primero = NULL;
	fin_derecha = NULL;
	fin_abajo = NULL;
	temp_x = NULL;
	temp_y = NULL;
}
void Matriz::guardar_pix(string color, int x, int y)
{
	pixelptr n = new pixel;
	temp_x = primero;
	temp_y = temp_x;
	while (temp_x->pos_x != x) {
		temp_x = temp_x->derecha;
	}
	while (temp_y->pos_y != y) {
		temp_y = temp_y->abajo;
	}
	while (temp_x->abajo != NULL) {
		temp_x = temp_x->abajo;
	}
	while (temp_y->derecha != NULL) {
		temp_y = temp_y->derecha;
	}
	n->pos_x = x;
	n->pos_y = y;
	n->color = color;
	
	n->arriba = temp_x;
	n->izquierda = temp_y;
	n->abajo = NULL;
	n->derecha = NULL;
	temp_y->derecha = n;
	temp_x->abajo = n;

}
//Metodo crea columna de la matriz
void Matriz::columna()
{
	pixelptr n = new pixel;
	//Si cabecera esta vacia guarda
	if (primero == NULL)
	{	//crea pixel
		pixelptr m = new pixel;
		primero = m;
		//asigna valores
		primero->pos_x = 0;
		primero->pos_y = 0;
		fin_abajo = primero;
		n->pos_y = 0;
		n->pos_x = 1;
		n->derecha = NULL;
		n->abajo = NULL;
		primero->derecha = fin_derecha = n;
		fin_derecha->izquierda = primero;

	}
	else
	{
		//Sino lo guarda en la siguiente columna
		int x = fin_derecha->pos_x + 1;
		n->pos_y = 0;
		n->pos_x = x;
		n->izquierda = fin_derecha;
		n->derecha = NULL;
		n->abajo = NULL;
		fin_derecha->derecha = n;
		fin_derecha = n;


	}
}
void Matriz::fila()
{
	pixelptr n = new pixel;

	if (primero == NULL)
	{
		pixelptr m = new pixel;
		primero = m;
		primero->pos_x = 0;
		primero->pos_y = 0;
		fin_derecha = primero;
		n->pos_y = 1;
		n->pos_x = 0;
		n->abajo = NULL;
		n->derecha = NULL;
		primero->abajo = fin_abajo = n;
		fin_abajo->arriba = primero;

	}
	else
	{
		int y = fin_abajo->pos_y + 1;
		n->pos_x = 0;
		n->pos_y = y;
		n->arriba = fin_abajo;
		n->abajo = NULL;
		n->derecha = NULL;
		fin_abajo->abajo = n;
		fin_abajo = n;


	}
}
void Matriz::mostrar()
{
	temp_y = primero;
	temp_x = primero;

	while (temp_x != NULL) {
		temp_y = temp_x;
		while (temp_y != NULL) {
			cout << temp_y->pos_x << "," << temp_y->pos_y << endl;
			temp_y = temp_y->abajo;
		}
		temp_x = temp_x->derecha;
		cout << "---------" << endl;

	}
}

