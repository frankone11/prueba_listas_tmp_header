/*
 * KUKALTRONICA NODO SIMPLE
 * POR FJGO
 * 2026-04-06
 */

#ifndef __KT__NODO__
#define __KT__NODO__

#include <cstdlib>

namespace KtListas
{

	class Nodo
	{
		protected:

			Nodo *ant, *sig;

		public:

			Nodo():
				ant(NULL),
				sig(NULL)
			{};

			Nodo(Nodo *anterior, Nodo *siguiente):
				ant(anterior),
				sig(siguiente)
			{};

			~Nodo() {};

			void ColocaAnterior(Nodo *anterior)
			{
				ant = anterior;
			};

			void ColocaSiguiente(Nodo *siguiente)
			{
				sig = siguiente;
			};

			Nodo *DameAnterior()
			{
				return ant;
			};

			Nodo *DameSiguiente()
			{
				return sig;
			};
	};

}
#endif
