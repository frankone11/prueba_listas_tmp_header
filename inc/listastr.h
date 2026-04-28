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

struct _ListaStr
{
	int id;
	std::string nombre;
};

typedef KtListas::ListaT<_ListaStr> ListaStr;


#endif /* INC_LISTASTR_H_ */
