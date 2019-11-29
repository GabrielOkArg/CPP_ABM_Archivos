#include "Persona.h"

Persona::Persona()
{
}

Persona::~Persona()
{
}

string Persona::GetName()
{
	return this->nombre;
}

string Persona::GetApellido()
{
	return this->apellido;
}

void Persona::SetName(string nom)
{
	this->nombre = nom;
}

void Persona::SetApellido(string ape)
{
	this->apellido = ape;
}

int Persona::GetId()
{
	return this->id;
}

void Persona::Setid(int newid)
{
	this->id = newid;
}

int Persona::Getmonto()
{
	return this->monto;
}

void Persona::Setmonto(int newmonto)
{
	this->monto = newmonto;
}
