#include "Empleado.h"

//constructor
Empleado::Empleado

//destructor
Empleado::~Empleado() {

}

//getters
date Empleado::get_HorarioLaboral() {
	return this->HorarioLaboral;
}

float Empleado::get_Sueldo() {
	return this->Sueldo;
}

//setters

	//crear un parametro de NuevaHoraLaboral
date Empleado::set_HorarioLaboral(date NuevaHoraLaboral) {
	this->HorarioLaboral = NuevoHorarioLaboral;
}

//crear un parametro de NuevoSueldo
float Empleado::set_Sueldo(float NuevoSueldo) {
	this->Sueldo = NuevoSueldo;
}