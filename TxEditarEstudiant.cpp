#include "pch.h"
#include "TxEditarEstudiant.h"

TxEditarEstudiant::TxEditarEstudiant(String^ n, String^ cn, String^ i, String^ l, String^ c) {
	_nom = n;
	_cognoms = cn;
	_idioma = i;
	_localitat = l;
	_contrasenya = c;
}

void TxEditarEstudiant::executar() {
	Sistema^ sistema = Sistema::getInstance();
	PassarellaEstudiant^ est = sistema->obteEstudiant();

	est->posaNom(_nom);
	est->posaCognoms(_cognoms);
	est->posaIdioma(_idioma);
	est->posaLocalitat(_localitat);

	est->modifica();

	PassarellaUsuari^ usuari = gcnew PassarellaUsuari(est->obteUsername(), _contrasenya, "estudiant");
	usuari->modifica();

	sistema->canviaContrasenya(_contrasenya);
}
