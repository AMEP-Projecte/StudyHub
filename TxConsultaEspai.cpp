#include "pch.h"
#include "TxConsultaEspai.h"

using namespace MySql::Data::MySqlClient;
using namespace System::Data;
using namespace System::Windows::Forms;

TxConsultaEspai::TxConsultaEspai(String^ a) {
	_adreca = a;
}

void TxConsultaEspai::executar() {
	PassarellaEspai^ e = CercadoraEspai::cercaEspaiAdreca(_adreca);
	if (_adreca == "") {
		throw gcnew Exception("Aquesta adreça no existeix.");
	}
	else {
		_resultat._nom = e->obteNom();
		_resultat._capacitat = e->obteCapacitat();
		_resultat._uproveidor = e->obteProveidor();
	}
}

Resultat TxConsultaEspai::obteResultat(){
	return _resultat;
}
