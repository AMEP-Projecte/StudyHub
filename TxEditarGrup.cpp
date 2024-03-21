#include "pch.h"
#include "TxEditarGrup.h"

TxEditarGrup::TxEditarGrup(String^ n, String^ t) {
	_nom = n;
	_tematica = t;
	grupExisteix = true;
}

void TxEditarGrup::executar() {
	PassarellaGrup^ grup = CercadoraGrup::cercaGrup(_nom);
	if (grup.obteNom() != " ") {
		grup.posaTematica(_tematica);
		grup.modifica();
	}
	else grupExisteix = false;
}
