#include "pch.h"
#include "Sistema.h"

bool Sistema::obteEstatSessio() {
	return _sessioIniciada;
}

void Sistema::canviaEstatSessio(bool estat) {
	_sessioIniciada = estat;
}

void Sistema::canviaContrasenya(String^ cNova) {
	_contrasenya = cNova;
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

PassarellaProveidor^ Sistema::obteProveidor() {
	return _pro;
}

PassarellaAdmin^ Sistema::obteAdministrador() {
	return _adm;
}

void Sistema::iniciaSessio(PassarellaUsuari^ usu, PassarellaEstudiant^ estu, PassarellaAdmin^ admin, PassarellaProveidor^ pro) {
	_sessioIniciada = true;
	_tipusUsuari = usu->obteTipus();
	_contrasenya = usu->obteContrasenya();
	if (_tipusUsuari == "estudiant" && estu != nullptr) {
		_est = estu;
	}
	else if (_tipusUsuari == "proveidor"/* && pro != nullptr */ ) {
		_pro = pro;
	}
	else if (_tipusUsuari == "administrador"/* && admin != nullptr*/) {
		_adm = admin;
	}
	else {
		_sessioIniciada = false;
		_tipusUsuari = "";
		_contrasenya = "";
	}
}

void Sistema::tancaSessio() {
	if (_est != nullptr) delete _est;
	// if (_pro != nullptr) delete _pro;
	// if (_adm != nullptr) delete _adm;
	_sessioIniciada = false;
	_tipusUsuari = "";
	_contrasenya = "";
}
