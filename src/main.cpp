#include <iostream>
#include "listainfo.h"

using namespace std;

int main()
{
	ListaInfo L;
	unsigned int i;
	Info I;

	L.AgregaNodo(Info("Hola"));
	L.AgregaNodo(Info("Aquí estoy"));
	L.AgregaNodo(Info("Ya me voy"));
	L.AgregaNodo(Info("Adios"));
	cout << "Programa de prueba de listas con plantillas." << endl;

	for(i = 0; i < L.DameNumDatos(); i++)
	{
		I = L.DameInfoPorPosicion(i);
		cout << "# "<< i+1 << "\t" << I.DameNombre() << endl;
	}

	return 0;
}
