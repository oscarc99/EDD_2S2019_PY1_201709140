#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <bits/stdc++.h> 
#include <cstring>


#include "Arbol.h"
#include "Cubo.h"
#include "Lista.h"
#include "Matriz.h"

#include <vector>
#include <sstream>
#include <iostream>




using namespace std;


Matriz llenar_matriz(string ruta, int x, int y);
Cubo crear_cubo(string ruta); 

int main()
{
    bool bandera=false;
    char tecla;
    //Estructuras principales
	Arbol* imagenes = new Arbol();
	Lista* filtros = new Lista();
	
	ifstream archiv;
	string conf; 
	//Matriz temporal
	Matriz* capa = new Matriz();
	Cubo* select = new Cubo();
	string s;
	string delimiter = "->";
    size_t pos = 0;
    string token;	
 	int sele;
 	string confi;
 	string cap;
 	string ca;
 	int iterador=0;
 	string name_image[15];
 	char tfs;
 	char f;
 	//nodoptr nodoT = new nodo;
 	
    do
    {
        
        
        cout << "<<<<<<<  MENU PRINCIPAL  >>>>>>>>>\n";
        cout << "\n";
        cout << "\t1 .- Insertar imagen \n";
        cout << "\t2 .- Select image \n";
        cout << "\t3 .- Aplicar filtro \n";
        cout << "\t4 .- Edicion Manual \n";
        cout << "\t5 .- Exportar imagenes \n";
        cout << "\t6 .- Reportes \n";
        cout << "\t7 .- Salir \n";
        cout << "Elije una opcion: ";
 
        cin >> tecla;
 
		switch(tecla)
		{
			case '1':
				
				cout << "<<<<< Insertando imagenes.>>>>>>\n";
				cout << "Inserte archivo configuracion.\n";
				cin>>conf;
				cout<< conf;
				archiv.open(conf.c_str(),ios::in);
				
				if(archiv.fail()){
					cout<<"No existe ese archivo o hubo un error. \n";
				}else{
					while(!archiv.eof()){
						getline(archiv,confi);
					}
					cout<<	confi << "\n";
				}
				archiv.close();
				cout << "Inserte archivo capas.\n";
				cin>>cap;
				cout<< cap;
				archiv.open(cap.c_str(),ios::in);
				
				if(archiv.fail()){
					cout<<"No existe ese archivo o hubo un error. \n";
				}else{
					while(!archiv.eof()){
						getline(archiv,ca);
					}
					cout<<	ca << "\n";
				}
				archiv.close();
					
											
				break;
 
			case '2':
				
				cout << "Seleccione la imagen a trabajar.\n";
				
				if(imagenes->raiz==NULL){
					cout<<"No se han insertado imagenes \n";
				}else{
					
					for(int i=0; i<15; i++){
						cout<< (i+1) +". "+ imagenes->name_image[i];
					}
					cin>>sele;
					
					try{
						cout << name_image[sele-1];
						select = imagenes->buscar(name_image[sele-1], imagenes->raiz);
						filtros->agregarElement(*select);
					}catch(int e){
						cout << "An exception occurred. Exception Nr. " << e << '\n';
					}
			
				}
				break;
 
			case '3':
				
				char tfs;
				cout << "Menu filtros \n";
				if(select != NULL){
					cout << "\n";
        			cout << "\t1 .- Imagen completa\n";
        			cout << "\t2 .- Seleccionar capa \n";
        			
				cin>>tfs;
				switch(tfs){
					case '1':
						cout<<"Se aplicara filtro completo a la imagen previamente seleccionada";
						//Menu filtros
						cout << "\n";
        				cout << "\t1 .- Negativo\n";
        				cout << "\t2 .- Escala de grises \n";
        				cout << "\t3 .- Espejo x \n";
        				cout << "\t4 .- Espejo y \n";
        				cout << "\t5 .- Ambos espejos\n";
        				cout << "\t6 .- Collage \n";
        				cout << "\t7 .- Mosaico\n";
        				cin>>f;
        				switch(f){
        					case '1':
        						//Metodo que negatico
        						break;
        					case '2':
        						//metodo grises
        						break;
        					case '3':
        						//Metodo espejo x
        						break;
        					case '4':
        						//metodo espejo y
        						break;
        					case '5':
        						//metodo espeyo ambos
        						break;
        						
        					case '6':
        						//Metodo collage 
        						break;
        					case '7':
        						
        						//Metodo mosaico
        						
        						break;
							default:
						cout << "Opcion no valida.\a\n";
						break;
						}
        				
						break;
					case '2':
						//Recorrer "select" el cubo para mostar el nombre de las capas 
						//nodoT= select->cabeza;
						/*
						while(nodoT != NULL ){
							//Metodo de modificacion en 
							//nodoT=nodoT->siguiente;
						}*/
						
						
						break;
					default:
						cout << "Opcion no valida.\a\n";
						break;
				}
				}else{
					cout<<"Debe seleccionar una imagen primero";
				}

					
				
				

				break;
 
			case '4':
				
				cout << "Seleccione capa a editar.\n";
				//Recorro cubo select
				
				break;
 			case '5':
				
				cout << "Exporto la imagen.\n";
				//Metodo exportar imagen
				
				break;
			
			case '6':
				
				cout << "Menu reportes.\n";
				cout << "\t1 .- Reportes imagenes\n";//arbol
				cout << "\t2 .- Reporte de capa \n"; //Menu para seleccionar capa de la imagen seleccionada anteriormente "select"
				cout << "\t3 .- Reporte lineal por fila\n"; 
				cout << "\t4 .- Reporte lineal por columna\n";
				cout << "\t5 .- Reporte arbol\n"; //Menu de reccorrido
				cout << "\t6 .- Reporte filtros\n";//Lista circular
				
				break;	
							
			case '7':
				bandera=true;
				//exit(1);
				break;
 
			default:
				cout << "Opcion no valida.\a\n";
				
				break;
		}
    }while(bandera!=true);
 
    return 0;
}


Matriz llenar_matriz(string ruta, int x, int y)
{

	ifstream archivo;
	string texto;
	string linea;
	Matriz mat;
	for (int i=0; i < x; i++) {
		mat.columna();
	}
	for (int i=0; i < y; i++) {
		mat.fila();
	}
	//empieza a lleer el archivo --------
	archivo.open(ruta.c_str(), ios::in);

	if (archivo.fail())

	{
		cout << "no hay archivo";
	}

		for (int yi = 1; yi <= y; yi++) {
			getline(archivo, linea, '\n');
			std::istringstream lin(linea);
			cout << linea << endl;
			for (int xi = 1; xi <= x; xi++) {

				
				getline(lin, texto, ',');
				cout << texto << endl;
				if (strstr(texto.c_str(), "x")) {
				
				}
				else
				{

					std::istringstream ss(texto);

					string color;
					getline(ss, color, '-');
					int red;
					int green;
					int blue;
					std::istringstream rojo(color);
					rojo >> red;

					getline(ss, color, '-');
					std::istringstream verde(color);
					verde >> green;

					getline(ss, color,'\n');
					std::istringstream azul(color);
					azul >> blue;

					mat.guardar_pix(color, xi, yi);
				
				}

			}

		}
	
	archivo.close();
	return mat;
}



Cubo crear_cubo(string ruta) {
	std::istringstream nomb(ruta);
	string nombre,name;
	getline(nomb, nombre, '\\');
	Cubo list;
	int x = 0;
	int y = 0;
	int px = 0;
	int py = 0;
	string texto;
	ifstream archivo;
	
	archivo.open(ruta.c_str(), ios::in);
	if (archivo.fail())
	{
		cout << "no hay archivo";
	}
	getline(archivo, texto, ',');
	getline(archivo, texto, '\n');
	while (!archivo.eof()) {
		getline(archivo, texto, ',');
		name = texto;
		getline(archivo, texto, '\n');
		if (strstr(texto.c_str(), "config.csv")) {
			string text;
			ifstream archi;
			archi.open(nombre+"\\config.csv", ios::in);
			
			while (!archi.eof()) {
				getline(archi, text, ',');
				if (strstr(text.c_str(), "pixel_width")) {
					getline(archi, text, '\n');
					std::istringstream verde(text);
					verde >> px;
				}
				else if (strstr(text.c_str(), "image_width")) {
					getline(archi, text, '\n');
					std::istringstream verde(text);
					verde >> x;
		
				}
				else if (strstr(text.c_str(), "pixel_height")) {
					getline(archi, text, '\n');
					std::istringstream verde(text);
					verde >> py;
					
				}
				else if (strstr(text.c_str(), "image_height")) {
					getline(archi, text, '\n');
					std::istringstream verde(text);
					verde >> y;
					
				}
				
				
			}
          list.configurar(nombre,x,y,px,py);
		}
		else {
			Matrix mat;
			mat = lectura(nombre+"\\"+texto,x,y);
			list.agregarinicio(mat,name);
		}
	}

	return list;
};
