#include "pch.h"
#include "TxCreaEspai.h"
#include "Sistema.h"
//#include "PassarellaPertany.h

using namespace System::Windows::Forms;

TxCreaEspai::TxCreaEspai(String^ AdrecaEspai, String^ NomEspai, int Capacitat, String^ UProveidor) {
	_adrecaEspai = AdrecaEspai;
	_nomEspai = NomEspai;
	_capacitat = Capacitat;
	_uproveidor = UProveidor;
}

void TxCreaEspai::executa() {
	PassarellaEspai^ Espai = CercadoraEspai::cercaEspaiAdreca(_adrecaEspai);
	if (Espai->obteAdreca() == "") {
		PassarellaEspai^ nouEspai = gcnew PassarellaEspai(_adrecaEspai, _nomEspai, _capacitat, _uproveidor);
		nouEspai->insereix();
	}



}
/*
void TxCrearNouGrupEstudi::executa() {
	PassarellaGrup^ Grup = CercadoraGrup::cercaPerNomGrup(_nomGrup);
	if (Grup->obteNom() == "") {
		PassarellaGrup^ NouGrup = gcnew PassarellaGrup(_nomGrup, _tematica, _estudiant);
		NouGrup->insereix();

		PassarellaPertany^ Pertany = gcnew PassarellaPertany(_estudiant, _nomGrup);
		Pertany->insereix();
	}
	else {
		throw gcnew Exception("Ja existeix un grup amb aquest nom.");
		//MessageBox::Show("Ja existeix un grup amb aquest nom.");
	}
}
*/