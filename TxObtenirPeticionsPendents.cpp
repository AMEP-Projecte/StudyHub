#include "pch.h"
#include "TxObtenirPeticionsPendents.h"

TxObtenirPeticionsPendents::TxObtenirPeticionsPendents(String^ nc) {
	_usernameCreador = nc;
}

void TxObtenirPeticionsPendents::executar() {
	CercadoraPertany^ cercp = gcnew CercadoraPertany();
	_resultat = cercp->obtePeticionsPendents(_usernameCreador);
}

DataTable^ TxObtenirPeticionsPendents::obteResultat() {
	return _resultat;
}