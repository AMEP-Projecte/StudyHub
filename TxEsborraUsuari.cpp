#include "pch.h"
#include "TxEsborraUsuari.h"

TxEsborraUsuari::TxEsborraUsuari(String^ contraU) {
	//creadora
	_contraU = contraU;
}

void TxEsborraUsuari::executar() {
	PassarellaUsuari^ u;
	Sistema^ StudyHub = Sistema::getInstance();
	u = StudyHub->obteUsuari();
	String^ contrasenyacerta = u->obteContrasenya();
	/*if (contrasenyacerta != _contraU) {
		throw std::runtime_error("Error: Contrasenya incorrecta.")
	} */

	if (contrasenyacerta == _contraU) {
		u->esborra();
		//StudyHub->tancaSessio();
	}

}
