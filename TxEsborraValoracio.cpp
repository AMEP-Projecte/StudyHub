#include "pch.h"
#include "TxEsborraValoracio.h"
#include "PassarellaValoracio.h"
#include "CercadoraValoracio.h"

using namespace System;

TxEsborraValoracio::TxEsborraValoracio(String^ u, String^ g) {
	username = u;
	grup = g;
}

void TxEsborraValoracio::executar() {
	Int64 p = 0;
	PassarellaValoracio^ valoracio = gcnew PassarellaValoracio(username, grup, p, "");
	valoracio->esborra();

	PassarellaEstudiant^ estudiant = CercadoraEstudiant::cercaEstudiantPerNom(username);
	int numValoracionsActual = estudiant->obteNumValoracions() - 1;
	estudiant->posaNumValoracions(numValoracionsActual);
	estudiant->modifica();
}