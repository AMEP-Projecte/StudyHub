#include "pch.h"
#include "TxEsborraValoracio.h"
#include "PassarellaValoracio.h"
#include "CercadoraValoracio.h"

using namespace System;

TxEsborraValoracio::TxEsborraValoracio(String^ estudiant, String^ grup, Int64^ valoracio, String^ comentari) {
	_estudiant = estudiant;
	_grup = grup;
	_valoracio = valoracio;
	_comentari = comentari;
}

void TxEsborraValoracio::executar() {
	PassarellaValoracio^ p = nullptr;
	if ((_estudiant == "") || (_grup = "")) {
		System::Windows::Forms::MessageBox::Show("Camps sense omplir.");
	}
	else {
		CercadoraValoracio^ buscador = gcnew CercadoraValoracio();
		p = buscador->cercaValoracio(_estudiant, _grup);
		if (p->obteEstudiant() != "" || p->obteGrup() != "") {
			System::Windows::Forms::MessageBox::Show("No existeix valoració.");
		}
		else {
			p->esborra();
			System::Windows::Forms::MessageBox::Show("Valoració eliminada.");
		}
	}
}