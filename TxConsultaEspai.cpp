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
		_nom = e->obteNom();
		_capacitat = e->obteCapacitat();
		_uproveidor = e->obteProveidor();

		//CercadoraPertany aux;
		//List<PassarellaPertany^>^ l = aux.cercaParticipants(_nom);
		//_nombreParticipants = l->Count;
	}
}


String^ TxConsultaEspai::obteAdreca() {
	return _adreca;
}
String^ TxConsultaEspai::obteNom() {
	return _nom;
}
int TxConsultaEspai::obteCapacitat() {
	return _capacitat;
}
String^ TxConsultaEspai::obteUproveidor() {
	return _uproveidor;
}
