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
			throw gcnew Exception("Aquest estudiant ja �s membre del grup seleccionat.");
		}
		else {
			if (_acceptat) {
				// Acceptar petici� d'acc�s
				pp->posaEstat("Acceptat");
				pp->modifica();
			}
			else {
				// Rebutjar petici� d'acc�s
				pp->elimina();
			}
		}
	}
	else {
		throw gcnew Exception("Aquest estudiant no ha demanat acc�s al grup seleccionat.");
	}

}
