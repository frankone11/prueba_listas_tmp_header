/*
 * listastr.h
 *
 *  Created on: 27 abr 2026
 *      Author: paco
 */

#ifndef INC_LISTASTR_H_
#define INC_LISTASTR_H_


#include <string>
#include "listat.hpp"

typedef struct _ListaStr
{
	int id;
	std::string nombre;
} ListaStr;

typedef KtListas::ListaT<ListaStr> LListaStr;


#endif /* INC_LISTASTR_H_ */
