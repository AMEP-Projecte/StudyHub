#include "pch.h"
#include "TxEliminarGrup.h"

using namespace System::Windows::Forms;


TxEliminarGrup::TxEliminarGrup(String^ NomGrup, String^ Estudiant) {
	_nomGrup = NomGrup;
	_estudiant = Estudiant;
}

void TxEliminarGrup::executar() {
	PassarellaGrup^ EliminarGrup = CercadoraGrup::cercaPerNomGrup(_nomGrup);
	if (EliminarGrup->obteNom() != "") {
		if (EliminarGrup->obtecreador()==_estudiant) {
			EliminarGrup->esborra();
		} else {
			throw gcnew Exception("El grup seleccionat no et pertany.");
		}
	}
	else {
		throw gcnew Exception("No existeix un grup amb aquest nom.");
		//MessageBox::Show("Ja existeix un grup amb aquest nom.");
	}
}