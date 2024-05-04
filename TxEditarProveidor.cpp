#include "pch.h"
#include "TxEditarProveidor.h"
#include "Sistema.h"
#include "Alert.h"
#include "CercadoraUsuari.h"

TxEditarProveidor::TxEditarProveidor(String^ ca, String^ cn) {
	_contrasenyaActual = ca;
	_contrasenyaNova = cn;
}

void TxEditarProveidor::executar() {
	Sistema^ sist = Sistema::getInstance();
	String^ ccorrecta = sist->obteContrasenya();
	if (ccorrecta == _contrasenyaActual) {
		PassarellaProveidor^ pprov = sist->obteProveidor();
		String^ usernameProveidor = pprov->obteNomUsuari();
		// Com que només modifiquem la contrasenya, no necessitarem fer
		// "modifica()" amb la PassarellaProveidor
		CercadoraUsuari cu;
		PassarellaUsuari^ pu = cu.cercaUsuari(usernameProveidor);
		pu->posaContrasenya(_contrasenyaNova);
		pu->modifica();
		sist->canviaContrasenya(_contrasenyaNova);
	}
	else {
		throw gcnew Exception("Error: Contrasenya actual incorrecta.");
	}
}

bool TxEditarProveidor::obteError() {
	return _error;
}