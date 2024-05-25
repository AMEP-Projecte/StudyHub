#include "pch.h"
#include "TxValoracioMitjana.h"
#include "CercadoraValoracioMitjana.h"

using namespace System;

TxValoracioMitjana::TxValoracioMitjana(String^ grup) {
	_grup = grup;
}

float TxValoracioMitjana::executar() {
	float valoracioMitjana = 0.0;
	if (_grup == "") {
		System::Windows::Forms::MessageBox::Show("Camps sense omplir.");
	}
	else {
		CercadoraValoracioMitjana^ CercaVal = gcnew CercadoraValoracioMitjana();
		valoracioMitjana = CercaVal->cercaValoracioMitjana(_grup);
	}
	return valoracioMitjana;
}
