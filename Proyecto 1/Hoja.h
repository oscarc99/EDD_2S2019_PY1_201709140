#ifndef HOJA_H
#define HOJA_H


#include <string>
#include "Cubo.h"
using namespace std;


class Hoja
{

public:
	Hoja* mayor;
	Hoja* menor;
	
	Cubo* cubs;
	
	Hoja();
	
	Hoja(Cubo*);
	void setMayor(Hoja*);
	void setMenor(Hoja*);
	Cubo* getCubo();
	
	virtual ~Hoja();


};

#endif // NODO_H

