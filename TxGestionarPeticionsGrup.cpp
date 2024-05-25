#include "pch.h"
#include "TxGestionarPeticionsGrup.h"

TxGestionarPeticionsGrup::TxGestionarPeticionsGrup(String^ ne, String^ ng, bool a) {
	_usernameEstudiant = ne;
	_nomGrup = ng;
	_acceptat = a;
}

void TxGestionarPeticionsGrup::executar() {
	PassarellaPertany^ pp = CercadoraPertany::cercaEstudiantEnGrup(_usernameEstudiant, _nomGrup);
	if (pp != nullptr) {
		if (pp->obteEstat() == "Acceptat") {
			throw gcnew Exception("Aquest estudiant ja és membre del grup seleccionat.");
		}
		else {
			if (_acceptat) {
				// Acceptar petició d'accés
				pp->posaEstat("Acceptat");
				pp->modifica();
			}
			else {
				// Rebutjar petició d'accés
				pp->elimina();
			}
		}
	}
	else {
		throw gcnew Exception("Aquest estudiant no ha demanat accés al grup seleccionat.");
	}

}
