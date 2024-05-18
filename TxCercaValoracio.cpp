#include "pch.h"
#include "TxCercaValoracio.h"
//#include "PassarellaValoracio.h"
#include "CercadoraValoracio.h"

using namespace System;

TxCercaValoracio::TxCercaValoracio(String^ estudiant, String^ grup) {
	_estudiant = estudiant;
	_grup = grup;
}

PassarellaValoracio^ TxCercaValoracio::executar() {
	PassarellaValoracio^ p = nullptr;
	if ((_estudiant == "") || (_grup == "")) {
		System::Windows::Forms::MessageBox::Show("Camps sense omplir.");
	}
	else {
		CercadoraValoracio^ buscador = gcnew CercadoraValoracio();
		p = buscador->cercaValoracio(_estudiant, _grup);
		if (p == nullptr) {
			System::Windows::Forms::MessageBox::Show("No existeix valoració.");
		}
	}
	return p;
}
