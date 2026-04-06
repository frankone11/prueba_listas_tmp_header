#ifndef __KT_LISTA_INFO__
#define __KT_LISTA_INFO__

#include <string>
#include "listat.hpp"

class Info
{
protected:
	std::string nombre;

public:
	Info() :
		nombre("")
	{
	}

	Info(std::string n) :
		nombre(n)
	{
	}

	~Info()
	{

	}

	void ColocaNombre(std::string n)
	{
		nombre = n;
	}

	std::string DameNombre(void)
	{
		return nombre;
	}

	Info & operator = (Info i)
	{
		nombre = i.nombre;
		return *this;
	}
};

typedef KtListas::ListaT<Info> ListaInfo;

#endif // __KT_LISTA_INFO__
