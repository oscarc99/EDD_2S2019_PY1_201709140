#pragma once
#ifndef HOJA_H
#define HOJA_H

#include "pch.h"
#include <string>
#include "Cubo.h"
using namespace std;


class Hoja
{

public:
	Hoja* mayor;
	Hoja* menor;
	string nombre;
	Cubo* cubs;
	int image_widht;
	int image_height;
	int pixel_widht;
	int pixel_height;
	Hoja(string);
	
	Hoja(string,Cubo*, int,int,int,int);
	void set_imWidht(int);
	void set_imHeight(int);
	void set_pixWidht(int);
	void set_pixHeight(int);
	string getNombre();
	void setMayor(Hoja*);
	void setMenor(Hoja*);
	Cubo* getCubo();
	
	virtual ~Hoja();


};

#endif // NODO_H