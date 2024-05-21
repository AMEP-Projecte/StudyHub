#include "pch.h"
#include "TxEditarEstudiant.h"
#include "Encriptacio.h"
TxEditarEstudiant::TxEditarEstudiant(String^ nom, String^ cognom, String^ idioma, String^ localitat, String^ contrasenyaNova, String^ contrasenyaAntiga) {
	_nom = nom;
	_cognoms = cognom;
	_idioma = idioma;
	_localitat = localitat;
	_contrasenyaNova = contrasenyaNova;
	_contrasenyaAntiga= contrasenyaAntiga;

}

void TxEditarEstudiant::executar() {
	Sistema^ sistema = Sistema::getInstance();
	PassarellaEstudiant^ est = sistema->obteEstudiant();
	Encriptacio e;
	if (e.VerificarContrasenya(est->obteUsername(), _contrasenyaAntiga)) {
		if (e.VerificarContrasenya(est->obteUsername(), _contrasenyaNova)) {
			throw gcnew Exception("La contrasenya nova i la antiga no poden ser la mateixa.");
		}
		else {
			if (_nom != "")est->posaNom(_nom);
			if (_cognoms != "")est->posaCognoms(_cognoms);
			if (_idioma != "")est->posaIdioma(_idioma);
			if (_localitat != "")est->posaLocalitat(_localitat);
			if (_contrasenyaNova != "")est->GenerarContrasenya(_contrasenyaNova);
			est->modifica();


			sistema->canviaContrasenya(_contrasenyaNova);
		}
		
	}
	else {
		throw gcnew Exception("La contrasenya no coincideix.");
	}
	
}
