/*
 * KUKALTRONICA LISTA SIMPLE
 * POR FJGO
 * 2026-04-06
 */

#ifndef __KT__LISTA__
#define __KT__LISTA__

#include "nodo.hpp"

namespace KtListas
{
	class Lista
	{
		protected:
			Nodo *inicio, *fin;
			unsigned int ndatos;

		public:
			Lista():
				inicio(NULL),
				fin(NULL),
				ndatos(0)
			{};

			virtual ~Lista()
			{
				BorraLista();
			};

			void BorraLista()
			{
				Nodo *aux;

				while(inicio != NULL)
				{
					aux = inicio;
					inicio = aux->DameSiguiente();
					delete aux;
				}
				fin = NULL;
			};

			void AgregaNodo(Nodo *nuevo)
			{
				if(inicio == NULL)
				{
					inicio = nuevo;
					fin = inicio;
					fin->ColocaAnterior(NULL);
					fin->ColocaSiguiente(NULL);
				}
				else
				{
					nuevo->ColocaAnterior(fin);
					nuevo->ColocaSiguiente(NULL);
					fin->ColocaSiguiente(nuevo);
					fin = nuevo;
				}
				ndatos ++;
			};

			void BorraNodoPorPos(unsigned int pos)
			{
				Nodo *aux;
				unsigned int i;

				if(pos >= ndatos)
					return;

				aux = inicio;
				i = 0;

				while(aux != NULL)
				{
					if(i == pos)
					{
						if(aux == inicio)
						{
							if(inicio == fin)
							{
								fin = NULL;
								inicio = NULL;
							}
							else
								inicio = inicio->DameSiguiente();
						}
						else if(aux == fin)
						{
							fin->DameAnterior()->ColocaSiguiente(NULL);
							fin = fin->DameAnterior();
						}
						else
						{
							aux->DameAnterior()->ColocaSiguiente(aux->DameSiguiente());
							aux->DameSiguiente()->ColocaAnterior(aux->DameAnterior());
						}
						delete aux;
						break;
					}
					aux = aux->DameSiguiente();
				}
			};

			Nodo *DameNodoPorPosicion(unsigned int pos)
			{
				unsigned int i;
				Nodo *aux;

				aux = inicio;
				i = 0;

				while(aux != NULL)
				{
					if(i == pos)
						return aux;
					aux = aux->DameSiguiente();
					i++;
				}
				return NULL;
			};

			unsigned int DameNumDatos(void)
			{
				return ndatos;
			};
	};
}

#endif
