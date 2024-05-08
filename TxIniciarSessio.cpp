#include "pch.h"
#include "TxIniciarSessio.h"
#include "CercadoraUsuari.h"
#include "CercadoraEstudiant.h"
#include "Sistema.h"

TxIniciarSessio::TxIniciarSessio(String^ username, String^ contrasenya) {
	_username = username;
	_contrasenya = contrasenya;
}

bool TxIniciarSessio::executar(/*string amb si te error??*/) {
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