#include "pch.h"
#include "TxEliminarEspai.h"

using namespace System::Windows::Forms;


TxEliminarEspai::TxEliminarEspai(String^ nomAdreca, String^ nomProveidor) {
	_nomAdreca = nomAdreca;
	_nomProveidor = nomProveidor;
}

void TxEliminarEspai::executar() {
	PassarellaEspai^ EliminarEspai = CercadoraEspai::cercaEspaiAdreca(_nomAdreca);
	if (EliminarEspai->obteAdreca() != "") {
		if (EliminarEspai->obteProveidor() == _nomProveidor) {
			EliminarEspai->esborra();
		}
		else {
			throw gcnew Exception("L'espai seleccionat no et pertany.");
		}
	}
	else {
		throw gcnew Exception("No existeix un espai amb aquesta adrec\u00E7a.");

	}
}
