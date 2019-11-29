#pragma once

#include <iostream>
#include <stdlib.h>
#include <iostream>
#include<fstream>
#include<sstream>
#include <cstdlib>
#include<vector>
#include<string>

using namespace std;


  class Persona
{
public:
	Persona();
	~Persona();
	string GetName();
	string GetApellido();
	void SetName(string nom);
	void SetApellido(string ape);
	int GetId();
	void Setid(int newid);
	int Getmonto();
	void Setmonto(int newmonto);
private:
	string nombre;
	string apellido;
	int id;
	int monto;


};

