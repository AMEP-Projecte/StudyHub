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
	if (_nom != " ") est->posaNom(_nom);
	if (_cognoms != " ") est->posaCognoms(_cognoms);
	if (_idioma != " ") est->posaIdioma(_idioma);
	if (_localitat != " ") est->posaLocalitat(_localitat);
	est->modifica();

	if (_contrasenya != " ") {
		String^ username = est->obteUsername();
		CercadoraUsuari cu;
		PassarellaUsuari^ usuari = cu.cercaUsuari(username);
		usuari->modifica();
	}
}
