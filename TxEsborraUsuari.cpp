#include "pch.h"
#include "TxEsborraUsuari.h"
#include "CercadoraUsuari.h"
TxEsborraUsuari::TxEsborraUsuari(String^ contraU) {
	//creadora
	_contraU = contraU;
}

void TxEsborraUsuari::executar() {
	Sistema^ StudyHub = Sistema::getInstance();
	String^ contrasenyacerta = StudyHub->obteContrasenya();

	if (contrasenyacerta != _contraU) {
		throw gcnew Exception("Error: Contrasenya incorrecta.");
	} else {
		PassarellaEstudiant^ est = StudyHub->obteEstudiant();
		CercadoraUsuari^ cu;
		PassarellaUsuari^ u = cu->cercaUsuari(est->obteUsername());
		u->esborra();
		StudyHub->tancaSessio();
	}
}
