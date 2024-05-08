#include "pch.h"
#include "TxIniciarSessio.h"
#include "CercadoraUsuari.h"
#include "CercadoraEstudiant.h"
#include "CercadoraAdmin.h"
#include "CercadoraProveidor.h"
#include "Sistema.h"

TxIniciarSessio::TxIniciarSessio(String^ username, String^ contrasenya) {
	_username = username;
	_contrasenya = contrasenya;
}

bool TxIniciarSessio::executar() {
	Sistema^ sist = Sistema::getInstance();
	CercadoraUsuari cu;
	PassarellaUsuari^ user = cu.cercaUsuari(_username);
	if (user == nullptr || user->obteContrasenya() != _contrasenya) {
		return true;
	}

	PassarellaEstudiant^ est;
	PassarellaAdmin^ admin;
	PassarellaProveidor^ pro;

	if (user->obteTipus() == "estudiant") {
		CercadoraEstudiant ce;
		est = ce.cercaEstudiantPerNom(_username);
	}
	else if (user->obteTipus() == "administrador") {
		CercadoraAdmin ca;
		admin = ca.cercaAdmin(_username);
	}
	else if (user->obteTipus() == "proveidor") {
		CercadoraProveidor cp;
		pro = cp.cercaProveidor(_username);
	}
	else {
		// retorna true si hi ha algun error amb el tipus d'usuari
		return true;
	}
	sist->iniciaSessio(user, est, admin, pro);
	//retorna fals si no hi ha error
	return false;
}