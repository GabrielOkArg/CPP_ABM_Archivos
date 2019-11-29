#pragma once
#include <iostream>
#include <stdlib.h>
#include <iostream>
#include<fstream>
#include<sstream>
#include <cstdlib>
#include<vector>
#include"persona.h"

using namespace std;
 class GestorDatos
{
public:
	vector<Persona> getList();
	bool AddNewItem(Persona item);
	bool Trasferir(Persona _p1, Persona _p2, int monto);

private:
	ifstream lectura;
	size_t found;
	int contador = 0;
	string _parametroA = "";
	string _parametroB = "";
	string _Nombre = "";
	int _id = 0;
	vector<Persona> listadoAlumnos;
	string leido = "";
	string auxiliar;
};

