#include "pch.h"
#include "TxEditarProveidor.h"
#include "Sistema.h"
#include "Alert.h"
#include "CercadoraUsuari.h"
#include "Encriptacio.h"
TxEditarProveidor::TxEditarProveidor(String^ ca, String^ cn) {
	_contrasenyaActual = ca;
	_contrasenyaNova = cn;
}

void TxEditarProveidor::executar() {
	Sistema^ sist = Sistema::getInstance();
	
	Encriptacio e;
	if (e.VerificarContrasenya(sist->obteUsername(), _contrasenyaActual)) {
		PassarellaProveidor^ pprov = sist->obteProveidor();
		pprov->GenerarContrasenya(_contrasenyaNova);
		pprov->modifica();
	}
	else {
		gcnew Exception("La contrasenya no es correcta.");
	}
}

bool TxEditarProveidor::obteError() {
	return _error;
}