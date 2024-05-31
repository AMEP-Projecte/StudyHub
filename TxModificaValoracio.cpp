#include "pch.h"
#include "TxModificaValoracio.h"
#include "PassarellaValoracio.h"
#include "CercadoraValoracio.h"

using namespace System;

TxModificaValoracio::TxModificaValoracio(String^ estudiant, String^ grup, Int64^ valoracio, String^ comentari) {
	_estudiant = estudiant;
	_grup = grup;
	_valoracio = valoracio;
	_comentari = comentari;
}

void TxModificaValoracio::executar() {
	PassarellaValoracio^ p = nullptr;
	if ((_estudiant == "") || (_grup = "")) {
		System::Windows::Forms::MessageBox::Show("Camps sense omplir.");
	}
	else {
		CercadoraValoracio^ buscador = gcnew CercadoraValoracio();
		p = buscador->cercaValoracio(_estudiant, _grup);
		if (p == nullptr) {
			System::Windows::Forms::MessageBox::Show("No existeix valoraci\u00F3.");
		}
		else {
			p->esborra();
			System::Windows::Forms::MessageBox::Show("Valoraci\u00F3 eliminada.");
		}
	}
}