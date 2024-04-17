#include "pch.h"
#include "PassarellaParticipa.h"
PassarellaParticipa::PassarellaParticipa(){}
PassarellaParticipa::PassarellaParticipa(String^ estudiant, String^ grup, String^ data, String^ horaInici) {
	_estudiant = estudiant;
	_grup = grup;
	_data = data;
	_horaInici = horaInici;
}

void PassarellaParticipa::posaEstudiant(String^ estudiant) {
	_estudiant = estudiant;
}
void PassarellaParticipa::posaGrup(String^ grup) {
	_grup = grup;
}
void PassarellaParticipa::posaData(String^ data) {
	_data = data;
}
void PassarellaParticipa::posaHoraInici(String^ hora) {
	_horaInici = hora;
}

String^ PassarellaParticipa::obteEstudiant() {
	return _estudiant;
}
String^ PassarellaParticipa::obteGrup() {
	return _grup;
}
String^ PassarellaParticipa::obteData() {
	return _data;
}
String^ PassarellaParticipa::obteHoraInici() {
	return _horaInici;
}