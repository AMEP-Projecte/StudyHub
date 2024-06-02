#include "pch.h"
#include "TxEnviarPeticioGrup.h"

TxEnviarPeticioGrup::TxEnviarPeticioGrup(String^ ue, String^ ng) {
	_usernameEstudiant = ue;
	_nomGrup = ng;
}

void TxEnviarPeticioGrup::executar() {
	// CercadoraPertany^ cercp = gcnew CercadoraPertany(); BORRAR
	// Comprovar que el grup existeixi
	PassarellaGrup^ pg = CercadoraGrup::cercaPerNomGrup(_nomGrup);
	if (pg->obteNom() == "") {
		throw gcnew Exception("El grup al qual vols unir-te no existeix.");
	}
	PassarellaPertany^ p = CercadoraPertany::cercaEstudiantEnGrup (_usernameEstudiant, _nomGrup);
	if (p != nullptr) {
		// L'estudiant ja és membre del grup o ja ha demanat unir-se a ell anteriorment
		if (p->obteEstat() == "Pendent") {
			throw gcnew Exception("Ja has demanat unir-te a aquest grup.\nEspera a que acceptin la teva sol·licitud.");
		}
		else { // l'estat és Acceptat
			throw gcnew Exception("Ja formes part d'aquest grup.");
		}
	}
	else {
		// L'estudiant no és membre del grup ni ha demanat unir-se al grup anteriorment
		p = gcnew PassarellaPertany(_usernameEstudiant, _nomGrup, "Pendent");
		p->insereix();
	}

	// throw gcnew Exception("Ja existeix un grup amb aquest nom.");
	/* catch (MySqlException^ ex) {
		MessageBox::Show(ex->Message);
		totcorrecte = false;
	}
	finally {
		// si tot va be es tanca la connexio
		if (totcorrecte) {
			MessageBox::Show("Grup Creat Correctament.");*/
}