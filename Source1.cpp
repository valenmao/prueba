#include "cLista.h"

cLista::cLista(int L) {
	c_actual = 0;
	tamanio = L;
	lista = new Tipodato * [L];
	for (int i = 0; i < L; i++)
	{
		lista[i] = NULL;
	}

}
cLista::~cLista()
{
	if (lista != nullptr) {
		for (int i = 0; i < c_actual; i++)
		{
			if (lista[i] != NULL)
				delete lista[i];
		}
		delete[]lista;
	}

}

void cLista::operat