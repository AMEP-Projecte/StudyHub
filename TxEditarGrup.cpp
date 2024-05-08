#include "pch.h"
#include "TxEditarGrup.h"

TxEditarGrup::TxEditarGrup(String^ n, String^ t) {
	_nom = n;
	_tematica = t;
}

void TxEditarGrup::executar() {
	Sistema^ sistema = Sistema::getInstance();
	
	CercadoraGrup cg;
	PassarellaGrup^ grup = cg.cercaPerNomGrup(_nom);
	
	if (grup->obtecreador() != sistema->obteEstudiant()->obteNomUsuari()) throw gcnew Exception("No pots modificar un grup que no has creat tu.");
	else if (grup->obteNom() != "") {
		grup->posaTematica(_tematica);
		grup->modifica();
	}
	else throw gcnew Exception("No existeix aquest grup.");
}
