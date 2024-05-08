#include "pch.h"
#include "Sistema.h"

bool Sistema::obteEstatSessio() {
	return _sessioIniciada;
}

void Sistema::canviaEstatSessio(bool estat) {
	_sessioIniciada = estat;
}

String^ Sistema::obteContrasenya() {
	return _contrasenya;
}

String^ Sistema::obteTipusUsuari() {
	return _tipusUsuari;
}

PassarellaEstudiant^ Sistema::obteEstudiant() {
	return _est;
}

//PassarellaProveidor* Sistema::obteProveidor() {
//	return _pro;
// }

//PassarelaAdministrador* Sistema::obteAdministrador() {
//  return _adm;
// }

void Sistema::iniciaSessio(PassarellaUsuari^ usu, PassarellaEstudiant^ estu) {
	_sessioIniciada = true;
	_est = estu;
	_tipusUsuari = usu->obteTipus();
	_contrasenya = usu->obteContrasenya();
}

void Sistema::tancaSessio() {
	if (_est != nullptr) delete _est;
	// if (_pro != nullptr) delete _pro;
	// if (_adm != nullptr) delete _adm;
	_sessioIniciada = false;
	_tipusUsuari = "";
	_contrasenya = "";
}