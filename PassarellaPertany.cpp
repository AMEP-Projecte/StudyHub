#include "pch.h"
#include "PassarellaPertany.h"

PassarellaPertany::PassarellaPertany(String^ estudiant, String^ grup) {
	_estudiant = estudiant;
	_grup = grup;
}

String^ PassarellaPertany::obteEstudiant() {
	return _estudiant;
}

String^ PassarellaPertany::obteGrup() {
	return _grup;
}

void PassarellaPertany::posaEstudiant(String^ estudiant) {
	_estudiant = estudiant;
}

void PassarellaPertany::posaGrup(String^ grup) {
	_grup = grup;
}