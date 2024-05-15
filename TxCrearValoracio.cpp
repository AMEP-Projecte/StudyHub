#include "pch.h"
#include "TxCrearValoracio.h"
#include "PassarellaValoracio.h"
#include "CercadoraValoracio.h"

using namespace System;

TxCrearValoracio::TxCrearValoracio(String^ estudiant, String^ grup, Int64^ valoracio, String^ comentari) {
	_estudiant = estudiant;
	_grup = grup;
	_valoracio = valoracio;
	_comentari = comentari;
}

void TxCrearValoracio::executar() {
	if ((_estudiant == "") || (_grup = "")) {
		System::Windows::Forms::MessageBox::Show("Camps sense omplir.");
	}
	else {
		CercadoraValoracio^ buscador = gcnew CercadoraValoracio();
		PassarellaValoracio^ p = buscador->cercaValoracio(_estudiant, _grup);
		if (p->obteEstudiant() == "" && p->obteGrup() == "") {
			PassarellaValoracio^ NovaValoracio = gcnew PassarellaValoracio(_estudiant, _grup, _valoracio, _comentari);
			NovaValoracio->insereix();
		}
		else {
			System::Windows::Forms::MessageBox::Show("Ya tens una valoracio en aquest grup.");
		}
	}
}