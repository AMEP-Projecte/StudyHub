#include "pch.h"
#include "TxEditarEspai.h"

TxEditarEspai::TxEditarEspai(String^ adr, int capacitat) {
	_adr = adr;
	_capacitat = capacitat;
}

void TxEditarEspai::executar() {
	Sistema^ sistema = Sistema::getInstance();

	CercadoraEspai ce;
	PassarellaEspai^ espai = ce.cercaEspaiAdreca(_adr);

	if (espai->obteProveidor() != sistema->obteProveidor()->obteUsername()) throw gcnew Exception("No pots modificar un grup que no has creat tu.");
	else if (espai->obteNom() != "") {
		espai->posarCapacitat(_capacitat);
		espai->modifica();
	}
	else throw gcnew Exception("No existeix aquest grup.");
}