#include "GestorDatos.h"

vector<Persona> GestorDatos::getList()
{
	try
	{
		lectura.open("Cuentas.csv", ios::in);
		while (!lectura.eof())
		{
			lectura >> leido;
			if (lectura.eof() !=true)
			{

				found = leido.find(";");
				contador = contador + 1;
				Persona cliente;
				_parametroA = leido.substr(0, found);
				_parametroB = leido.substr(found + 1, leido.size());
				if (contador == 1)
				{
					auxiliar = _parametroB;
					cliente.Setid(stoi(_parametroA));
				}
				if (contador == 2)
				{
					string aux = "";
					for (int i = 0; i < _parametroB.size(); i++)
					{
						if (_parametroB[i] != '$')
						{
							aux += _parametroB[i];
						}
					}
					contador = 0;
					cliente.SetApellido(auxiliar);
					cliente.SetName(_parametroA);
					cliente.Setmonto(stoi(aux));
					listadoAlumnos.push_back(cliente);
				}
			}
			

		}
		return listadoAlumnos;
	}
	catch (const std::exception&)
	{
		cout << "error" << endl;
	}
	return vector<Persona>();
}

bool GestorDatos::AddNewItem(Persona item)
{
	try
	{
		ofstream fichero;
		fichero.open("Cuentas.csv", ios::app);

		string monto = "$";
		monto += to_string(item.Getmonto());

			fichero << item.GetId() << ";" << item.GetApellido() +" "+ item.GetName() << ";" << monto <<  "\n";
				fichero.close(); 
		return true;
	}
	catch (const std::exception&)
	{
		return false;
	}
	
}

bool GestorDatos::Trasferir(Persona _p1, Persona _p2, int monto)
{
	try
	{
		int p1monto = _p1.Getmonto();
		p1monto = p1monto - monto;
		if (p1monto>0)
		{
			_p2.Setmonto(_p2.Getmonto() + monto);
			_p1.Setmonto(p1monto);
		}
		

		return true;
	}
	catch (const std::exception&)
	{
		return false;
	}
}
