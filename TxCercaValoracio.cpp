#include "pch.h"
#include "TxCercaValoracio.h"
//#include "PassarellaValoracio.h"
#include "CercadoraValoracio.h"

using namespace System;

TxCercaValoracio::TxCercaValoracio(String^ estudiant, String^ grup, Int64^ valoracio, String^ comentari) {
	_estudiant = estudiant;
	_grup = grup;
	_valoracio = valoracio;
	_comentari = comentari;
}

PassarellaValoracio^ TxCercaValoracio::executar() {
	PassarellaValoracio^ p = nullptr;
	if ((_estudiant == "") || (_grup = "")) {
		System::Windows::Forms::MessageBox::Show("Camps sense omplir.");
	}
	else {
		CercadoraValoracio^ buscador = gcnew CercadoraValoracio();
		p = buscador->cercaValoracio(_estudiant, _grup);
		if (p->obteEstudiant() == "" || p->obteGrup() == "") {
			System::Windows::Forms::MessageBox::Show("No existeix valoració.");
		}
	}
	return p;
}
