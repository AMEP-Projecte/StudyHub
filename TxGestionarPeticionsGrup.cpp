#include "pch.h"
#include "TxGestionarPeticionsGrup.h"

TxGestionarPeticionsGrup::TxGestionarPeticionsGrup(String^ ne, String^ ng, bool a) {
	_usernameEstudiant = ne;
	_nomGrup = ng;
	_acceptat = a;
}

void TxGestionarPeticionsGrup::executar() {
	Sistema^ sist = Sistema::getInstance();
	String^ nomCreador = sist->obteUsername();
	PassarellaGrup^ pg = CercadoraGrup::cercaPerNomGrup(_nomGrup);
	if (pg->obtecreador() == nomCreador) {
	PassarellaPertany^ pp = CercadoraPertany::cercaEstudiantEnGrup(_usernameEstudiant, _nomGrup);
		if (pp != nullptr) {
			if (pp->obteEstat() == "Acceptat") {
				throw gcnew Exception("Aquest estudiant ja \u00e9s membre del grup seleccionat.");
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
			throw gcnew Exception("Aquest estudiant no ha demanat acc\u00e9s al grup seleccionat.");
		}
	}
	else {
		throw gcnew Exception("Bon intent. No intentis acceptar peticions d'acc\u00e9s de\ngrups que no s\u00f3n teus!");
	}
}
