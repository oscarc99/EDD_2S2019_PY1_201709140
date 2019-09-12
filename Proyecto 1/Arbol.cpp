#include "Arbol.h"
#include <iostream>

#include <sstream>
#include <string>
#include <fstream>
#include "Hoja.h"
 

using namespace std;
Arbol::Arbol() {
	raiz = NULL;
}
void Arbol::agregarElemento(Hoja* hoj, Cubo* icubo){
	
	if (raiz == NULL){
		Hoja* nuevo = new Hoja(icubo);
		setRaiz(nuevo);

	}else if(strcmp(hoj->getCubo()->getNombre().c_str(), hoj->getCubo()->getNombre().c_str())>=0){
		//Mayor se va a la derecha
		if (hoj->mayor == NULL) {
			//Guarda en donde corresponde
			hoj->setMayor(new Hoja(icubo));
		}
		else {
			//Sigue recorriendo hasta encontrar null
			agregarElemento(hoj->mayor, icubo);
		}
	}
	else {
		//Menor
		if (hoj->menor == NULL) {
			hoj->setMenor(new Hoja(icubo));
		}
		else {
			agregarElemento(hoj->menor, icubo);
		}
	}
}

void Arbol::reporte_arbol() {
	ofstream archivo;
	
	archivo.open("arbol.dot",ios::out);
	if (archivo.fail()) {
		cout << "No se pudo generar el reporte";
	}
	else {//Se creo el archivo sin problema 
		//Escribir en el documento
		archivo << "digraph G {" << '\n';
		archivo << "    nodesep=0.8;ranksep=0.5;" << '\n';
		archivo << "{node[style = invis, label = \"\"]; cx_"<<raiz->getCubo()->getNombre()<<"; }" << '\n';
		archivo << "     {edge[style=invis];"<< raiz->getCubo()->getNombre() <<" -> cx_"<< raiz->getCubo()->getNombre() <<"; "<< raiz->menor->getCubo()->getNombre() <<" -> cx_"<< getRaiz()->getCubo()->getNombre() <<" -> "<< raiz->mayor->getCubo()->getNombre() <<";}";
		archivo << "{rank = same; ";
		archivo << raiz->menor->getCubo()->getNombre()<<"; ";
		archivo << raiz->mayor->getCubo()->getNombre() << "; ";
		archivo << " cx_"<<raiz->getCubo()->getNombre() << "; "<< '\n';
		archivo << dot(raiz);
		archivo << '\n';
		archivo << "}";
		archivo.close();
		system("dot -Tjpg arbol.dot -o arbol.jpg");
		system("nohup display arbol.jpg &");
	}

}

void Arbol::plantar(Cubo* icubo) {
	agregarElemento(getRaiz(), icubo);

}

Hoja* Arbol::getRaiz() {
	return raiz;
}

void Arbol::setRaiz(Hoja* root) {
	raiz = root;
}

string Arbol::dot(Hoja* hj) {
	
	if (hj == 0) {
		return "";
	}
	else {
		return hj->getCubo()->getNombre() + "->" + hj->menor->getCubo()->getNombre() +"; \n" + dot(hj->menor) +  hj->getCubo()->getNombre() + "->" + hj->menor->getCubo()->getNombre() + "; \n " + dot(hj->mayor);
		
		
		
	}
	
}

void Arbol::rep_inorder(){
	ofstream archivo;
	archivo.open("inorder.dot", ios::out);
	archivo << "digraph G { \n";
	archivo << "node [shape=record];rankdir=LR; \n";
	archivo<<inorder(raiz);
	archivo << "}";
	system("dot -Tjpg inorder.dot -o inorder.jpg");
	system("nohup display inorder.jpg &");
}

void Arbol::rep_preorder() {
	ofstream archivo;
	archivo.open("preorder.dot", ios::out);
	archivo << "digraph G { \n";
	archivo << "node [shape=record];rankdir=LR; \n";
	archivo << preorder(raiz);
	archivo << "}";
	system("dot -Tjpg preorder.dot -o preorder.jpg");
	system("nohup display preorder.jpg &");
	
}

void Arbol::rep_postorder() {
	ofstream archivo;
	archivo.open("postorder.dot", ios::out);
	archivo << "digraph G { \n";
	archivo << "node [shape=record];rankdir=LR; \n";
	archivo << postorder(raiz);
	archivo << "}";
	system("dot -Tjpg postorder.dot -o postorder.jpg");
	system("nohup display postorder.jpg &");
	
}

string Arbol::inorder(Hoja* hoj) {
	
	if (hoj != 0) {
		
		return inorder(hoj->menor) +" " + hoj->getCubo()->getNombre() + "->" + inorder(hoj->mayor);
		
	}

}

string Arbol::preorder(Hoja* hoj) {
	if (hoj != 0) {
		return " " + hoj->getCubo()->getNombre() + "->" + preorder(hoj->menor) + preorder(hoj->mayor);
		
	}
}

string Arbol::postorder(Hoja* hoj) {
	if (hoj != 0) {
		return  postorder(hoj->menor)+ postorder(hoj->mayor) + " " + hoj->getCubo()->getNombre() + "-> ";
		
		
	}
}

Arbol::~Arbol()
{
	//destructor
}

