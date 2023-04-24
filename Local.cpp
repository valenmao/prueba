#include <Local.h>
Local::Local() {

}
Local::~Local(){}
//getter
date Local::get_HorarioFinDeSemana() {
	return this->HorarioFinDeSemana;
}
string Local::set_Contacto(string Contacto) {
	this->Contacto = Contacto;
}