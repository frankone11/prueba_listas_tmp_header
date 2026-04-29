#include <iostream>
#include "listainfo.h"
#include "listastr.h"

using namespace std;

int main()
{
	ListaInfo L;
	LListaStr LS;
	unsigned int i;
	Info I;

	ListaStr LStr;

	L.AgregaNodo(Info("Hola"));
	L.AgregaNodo(Info("Aquí estoy"));
	L.AgregaNodo(Info("Ya me voy"));
	L.AgregaNodo(Info("Adios"));

	LStr.id = 0;
	LStr.nombre = "Nueva";
	LS.AgregaNodo(LStr);

	LStr.id = 0;
	LStr.nombre = "Lista";
	LS.AgregaNodo(LStr);

	LStr.id = 0;
	LStr.nombre = "Estructurada";
	LS.AgregaNodo(LStr);


	cout << "Programa de prueba de listas con plantillas." << endl;

	for( i = 0; i < L.DameNumDatos(); i++ )
	{
		I = L.DameInfoPorPosicion(i);
		cout << "# "<< i+1 << "\t" << I.DameNombre() << endl;
	}

	cout << "*****" << endl;

	for( i = 0; i < LS.DameNumDatos(); i++ )
	{
		cout << "# " << i+1 << "\t" << LS.DameInfoPorPosicion(i).nombre << endl;
	}

	LStr.id = 0;
	LStr.nombre = "Nuevisima";
	LS.DameNodoPorPosicion(0)->ColocaInformacion(LStr);

	cout << "*****" << endl;

	for( i = 0; i < LS.DameNumDatos(); i++ )
	{
		cout << "# " << i+1 << "\t" << LS.DameInfoPorPosicion(i).nombre << endl;
	}

	return 0;
}
