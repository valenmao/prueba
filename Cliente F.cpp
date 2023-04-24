#include "Cliente.h"

//constructor
Cliente::Cliente(string)

//destructor
Cliente::~Cliente() {
}


//getters
string Cliente::get_Mail()
{
	return this->Mail;
}

string Cliente::get_DNI() {
	return this->DNI;
}

const string Cliente::get_NroAfiliado() {
	return this->NroAfiliado;
}

unsigned int Cliente::get_CodigoSeguridad() {
	return this->CodigoSeguridad;
}

string Cliente::get_Receta() {
	return this->Receta;
}

string Cliente::get_NroTicket() {
	return this->NroTicket;
}

//setters

	//como parametro entra nuevo codigo de seguridad (NuevoCodigo)
unsigned int Cliente::set_CodigoSeguridad(unsigned int NuevoCodigo) {
	this->CodigoSeguridad = NuevoCodigo;
}