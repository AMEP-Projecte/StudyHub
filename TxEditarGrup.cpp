#include "pch.h"
#include "TxEditarGrup.h"

TxEditarGrup::TxEditarGrup(String^ n, String^ t) {
	_nom = n;
	_tematica = t;
}

void TxEditarGrup::executar() {
	CercadoraGrup cg;
	PassarellaGrup^ grup = cg.cercaPerNomGrup(_nom);
	if (grup->obteNom() != " ") {
		grup->posaTematica(_tematica);
		grup->modifica();
	}
	else throw gcnew Exception("No existeix aquest grup.");
}
