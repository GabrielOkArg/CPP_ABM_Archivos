// primeraPractica.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <iostream>
#include<fstream>
#include<sstream>
#include <cstdlib>
#include<vector>
#include"persona.h"
#include"GestorDatos.h"

using namespace std;

struct miEstudiante
{
	int id;
	char nombre[20];
	char apellido[20];
	int edad;
	double promedio;
};



int main()
{
	miEstudiante persona;
	vector<Persona> Varray;
	{
		GestorDatos gestor;
		
		for (int i = 0; i <gestor.getList().size(); i++)
		{
			Varray.push_back(gestor.getList()[i]);
		}
		cout << "ID" << "   " << "Nombre" << "   " << "Apellido" << "   " << "Monto" << endl;
		for (int i = 0; i < Varray.size(); i++)
		{
			cout << Varray[i].GetId() << "    " << Varray[i].GetName() << "   " << Varray[i].GetApellido() << " " << " $" << Varray[i].Getmonto() << endl;
		}
	}
	{
		GestorDatos gestor;
		cout << "ID" << "   " << "Nombre" << "   " << "Apellido" << "   " << "Monto" << endl;
		for (int i = 0; i < gestor.getList().size(); i++)
		{
			cout << gestor.getList()[i].GetId() << "    " << gestor.getList()[i].GetName() + "   " + gestor.getList()[i].GetApellido() << " " << " $" << gestor.getList()[i].Getmonto() << endl;
		}
	}
	{
		GestorDatos gestor;
		gestor.Trasferir(gestor.getList()[53], gestor.getList()[50],500);
		for (int i = 0; i < gestor.getList().size(); i++)
		{
			cout << gestor.getList()[i].GetId() << "    " << gestor.getList()[i].GetName() + "   " + gestor.getList()[i].GetApellido() << " " << " $" << gestor.getList()[i].Getmonto() << endl;
		}
	}
	
	
}
	
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
