/*
 * KUKALTRONICA LISTA SIMPLE EN MODO PLANTILLA
 * POR FJGO
 * 2026-04-06
 */

#ifndef __KT_LISTA_TEMPLATE__
#define __KT_LISTA_TEMPLATE__

#include "lista.hpp"
#include "nodot.hpp"

namespace KtListas
{
	template <class T>
	class ListaT : public Lista
	{
	public:
		ListaT() :
			Lista()
		{

		}

		~ListaT()
		{
			Lista::~Lista();
		}

		void AgregaNodo(NodoT<T> *nuevo)
		{
			Lista::AgregaNodo(nuevo);
		}

		void AgregaNodo(const T &informacion)
		{
			Lista::AgregaNodo(new NodoT<T>(informacion));
		}

		NodoT<T> *DameNodoPorPosicion(unsigned int pos)
		{
			return (KtListas::NodoT<T> *) Lista::DameNodoPorPosicion(pos);
		}

		T DameInfoPorPosicion(unsigned int pos)
		{
			return ((KtListas::NodoT<T> *) Lista::DameNodoPorPosicion(pos))->DameInformacion();
		}

	};
}

#endif // __KT_LISTA_TEMPLATE__
