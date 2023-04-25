#include <Local.h>
Local::Local(string nombre,string Direccion,date HorarioSemana, date HorarioFinDeSemana,string Contacto) {

}
Local::~Local(){}
//getter
date Local::get_HorarioFinDeSemana() {
	return this->HorarioFinDeSemana;
}
string Local::set_Contacto(string Contacto) {
	this->Contacto = Contacto;
}
AsistAutomatico::AsistAutomatico(string NroTurno) {

}
~AsistAutomatico::AsistAutomatico(){}
string AsistAutomatico::get_NroTurno() {
	this->NroTurno;

}