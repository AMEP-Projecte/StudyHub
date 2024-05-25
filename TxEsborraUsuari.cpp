#include "pch.h"
#include "TxEsborraUsuari.h"
#include "CercadoraUsuari.h"
#include "Encriptacio.h"
TxEsborraUsuari::TxEsborraUsuari(String^ contraU) {
	//creadora
	_contraU = contraU;
}

void TxEsborraUsuari::executar() {
	Sistema^ sistema = Sistema::getInstance();
	Encriptacio e;
	if (!e.VerificarContrasenya(sistema->obteUsername(),_contraU)) {
		throw gcnew Exception("Error: Contrasenya incorrecta.");
	} else {
		PassarellaEstudiant^ est = sistema->obteEstudiant();
		CercadoraUsuari^ cu;
		PassarellaUsuari^ u = cu->cercaUsuari(est->obteUsername());
		u->esborra();
		sistema->tancaSessio();
	}
}
