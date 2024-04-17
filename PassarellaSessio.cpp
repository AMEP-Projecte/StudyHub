#include "pch.h"
#include "PassarellaSessio.h"

PassarellaSessio::PassarellaSessio(){}
PassarellaSessio::PassarellaSessio(String^ grup, String^ data, String^ horaInici, String^ horaFi, String^ adreca, int llocs) {
	_grup = grup;
	_data = data;
	_horaInici = horaInici;
	_horaFi = horaFi;
	_adreca = adreca;
	_llocsLliures = llocs;
}

void PassarellaSessio::posaGrup(String^ grup) {
	_grup = grup;
}
void PassarellaSessio::posaData(String^ data) {
	_data = data;
}
void PassarellaSessio::posaHoraInici(String^ hora) {
	_horaInici = hora;
}
void PassarellaSessio::posaHoraFi(String^ hora) {
	_horaFi = hora;
}
void PassarellaSessio::posaAdreca(String^ adreca) {
	_adreca = adreca;
}
void PassarellaSessio::posaLlocs(int llocs) {
	_llocsLliures = llocs;
}

String^ PassarellaSessio::obteGrup() {
	return _grup;
}
String^ PassarellaSessio::obteData() {
	return _data;
}
String^ PassarellaSessio::obteHoraInici() {
	return _horaInici;
}
String^ PassarellaSessio::obteHoraFi() {
	return _horaFi;
}
String^ PassarellaSessio::obteAdreca() {
	return _adreca;
}
int PassarellaSessio::obteLlocsLliures() {
	return _llocsLliures;
}