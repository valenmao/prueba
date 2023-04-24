#include "cLista.h"

//no me gusto, lo cambie
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
