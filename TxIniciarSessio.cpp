/*#include "pch.h"
#include "TxIniciarSessio.h"
#include "CercadoraUsuari.h"
#include "CercadoraEstudiant.h"
#include "Sistema.h"

TxIniciarSessio::TxIniciarSessio(String^ username, String^ contrasenya) {
	_username = username;
	_contrasenya = contrasenya;
}

bool TxIniciarSessio::executar(/*string amb si te error??) {
	CercadoraUsuari cu;
	PassarellaUsuari^ user = cu.cercaUsuari(_username);
	CercadoraEstudiant ce;
	PassarellaEstudiant^ est = ce.cercaEstudiantPerNom(_username);
	Sistema^ sist = Sistema::getInstance();
	//fer comprovacions de si ha trobat l'estudiant o no
	//si no l'ha trobat, user hauria d'estar buit
	// si user esta ple pero est esta buit, es que user.tipus != estudiant
	if (user != nullptr) {
		sist->iniciaSessio(user, est);
		return false;
	}
	// return true si hi ha error i no fer el sist->iniciaSessio();
	return true;
} 

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
	else if (user->obteTipus() == "proveidor") {
		//CercadoraAdmin ca;
		CercadoraProveidor ca;
		pro = ca.cercaProveidor(_username);
	}
	else if (user->obteTipus() == "administrador") {
		//CercadoraProveidor cp;
		CercadoraAdmin cp;
		admin = cp.cercaAdmin(_username);
	}
	else {
		// retorna true si hi ha algun error amb el tipus d'usuari
		return true;
	}
	sist->iniciaSessio(user, est, admin, pro);
	//retorna fals si no hi ha error
	return false;
}
*/
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