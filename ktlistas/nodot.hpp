/*
 * KUKALTRONICA NODO SIMPLE EN MODO PLANTILLA
 * POR FJGO
 * 2026-04-06
 */

#include "nodo.hpp"

#ifndef __KT_NODO_TEMPLATE__
#define __KT_NODO_TEMPLATE__

namespace KtListas
{
	template <class T>
	class NodoT : public Nodo
	{
	protected:
		T info;
	public:
		NodoT() :
			Nodo()
		{

		}

		NodoT(Nodo *anterior, Nodo *siguiente) :
			Nodo(anterior, siguiente)
		{

		}


		NodoT(Nodo *anterior, Nodo *siguiente, T const &informacion) :
			Nodo(anterior, siguiente),
			info(informacion)
		{

		}

		NodoT(T const &informacion) :
			Nodo(NULL, NULL),
			info(informacion)
		{

		}

		~NodoT()
		{
			Nodo::~Nodo();
		}

		void ColocaInformacion(T const &informacion)
		{
			info = informacion;
		}

		T& DameInformacion(void)
		{
			return info;
		}
	};
}

#endif // __KT_NODO_TEMPLATE__
