#include "pch.h"
#include "TxCrearNouGrupEstudi.h"
#include "PassarellaPertany.h"

using namespace System::Windows::Forms;


TxCrearNouGrupEstudi::TxCrearNouGrupEstudi(String^ NomGrup, String^ Tematica, String^ Estudiant){
	_nomGrup = NomGrup;
	_tematica = Tematica;
	_estudiant = Estudiant;
}

void TxCrearNouGrupEstudi::executa(){
	PassarellaGrup^ Grup = CercadoraGrup::cercaPerNomGrup(_nomGrup);
	if (Grup->obteNom()=="") {
		PassarellaGrup^ NouGrup = gcnew PassarellaGrup(_nomGrup, _tematica, _estudiant);
		NouGrup->insereix();

		PassarellaPertany^ Pertany = gcnew PassarellaPertany(_estudiant, _nomGrup);
		Pertany->insereix();
	} else {
		throw gcnew Exception("Ja existeix un grup amb aquest nom.");
		//MessageBox::Show("Ja existeix un grup amb aquest nom.");
	}
}
