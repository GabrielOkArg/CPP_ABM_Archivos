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
	/*ofstream fichero;
	fichero.open("fichero.csv", ios::app);

	for (int i = 0; i < 2; i++)
	{
		cout << "Ingrese id, nombre, apellido,edad y promedio por favor: \n";
		cin >> persona.id;
		cin.ignore();
		cin.getline(persona.nombre, 20);
		cin.getline(persona.apellido, 20);
		cin >> persona.edad;
		cin >> persona.promedio;

		fichero << persona.id << ";" << persona.nombre << ";" << persona.apellido << ";" << persona.edad << ";" << persona.promedio << "\n";
		system("cls");
	}
	fichero.close();*/
	/*ifstream lectura;
	lectura.open("Cuentas.csv", ios::in);
	string leido;
	size_t found;
	vector<Persona> Vpersona;
	int contador = 0;
	string x;
	string y;
	string Nombre_ = "";
	int ID_ = 0;
	while (!lectura.eof())
	{
		lectura >> leido;
		try
		{
			found = leido.find(";");
			{
				contador = contador + 1;
				Persona _cliente;
				x = leido.substr(0, found);
				y = leido.substr(found + 1, leido.size());

				if (contador == 1)
				{
					ID_ = stoi(x);
					Nombre_ = y;
				}
				if (contador == 2)
				{
					string aux = "";
					_cliente.SetApellido(x);
					for (int i = 0; i < y.length(); i++)
					{
						if (y[i] != '$')
						{
							aux += y[i];
						}
					}
					_cliente.SetName(Nombre_);
					_cliente.Setid(ID_);
					_cliente.Setmonto(stoi(aux));
					Vpersona.push_back(_cliente);
					contador = 0;
					ID_ = 0;
					Nombre_ = "";
				}


			}
		}
		catch (const std::exception&)
		{

		}
		
	}*/
	vector<Persona> Varray;
	{
		GestorDatos gestor;
		vector<Persona> Varray = gestor.getList();
		cout << "ID" << "   " << "Nombre" << "   " << "Apellido" << "   " << "Monto" << endl;
		for (int i = 0; i < gestor.getList().size(); i++)
		{
			cout << gestor.getList()[i].GetId() << "    " << gestor.getList()[i].GetName() << "   " << gestor.getList()[i].GetApellido() << " " << " $" << gestor.getList()[i].Getmonto() << endl;
		}
	}
	{
		GestorDatos gestor;
		/*Persona NewPeople;
		NewPeople.Setid(55);
		NewPeople.SetApellido("Fuentes");
		NewPeople.SetName("Maru");
		NewPeople.Setmonto(65500);
		bool OK_ = gestor.AddNewItem(NewPeople);*/
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
