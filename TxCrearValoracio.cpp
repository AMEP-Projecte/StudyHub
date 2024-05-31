#include "pch.h"
#include "TxCrearValoracio.h"
#include "PassarellaValoracio.h"
#include "CercadoraValoracio.h"
#include "CercadoraEstudiant.h"

using namespace System;

TxCrearValoracio::TxCrearValoracio(String^ estudiant, String^ grup, Int64^ valoracio, String^ comentari) {
	_estudiant = estudiant;
	_grup = grup;
	_valoracio = valoracio;
	_comentari = comentari;
}

void TxCrearValoracio::executar() {
	if ((_estudiant == "") || (_grup == "")) {
		System::Windows::Forms::MessageBox::Show("Camps sense omplir.");
	}
	else {
		CercadoraValoracio^ buscador = gcnew CercadoraValoracio();
		PassarellaValoracio^ p = buscador->cercaValoracio(_estudiant, _grup);
		if(p==nullptr){
			PassarellaValoracio^ NovaValoracio = gcnew PassarellaValoracio(_estudiant, _grup, _valoracio, _comentari);
			NovaValoracio->insereix();
			PassarellaEstudiant^ estudiant = CercadoraEstudiant::cercaEstudiantPerNom(_estudiant);
			estudiant->posaNumValoracions(estudiant->obteNumValoracions() + 1);
			estudiant->modifica();

		}
		else {
			System::Windows::Forms::MessageBox::Show("Ja tens una valoraci\u00F3 en aquest grup.");
		}
	}
}