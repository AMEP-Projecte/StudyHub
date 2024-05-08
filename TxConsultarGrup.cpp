#include "pch.h"
#include "TxConsultarGrup.h"

using namespace MySql::Data::MySqlClient;
using namespace System::Data;
using namespace System::Windows::Forms;

TxConsultaGrup::TxConsultaGrup(String^ n) {
	_nom = n;
}

void TxConsultaGrup::executar() {
	PassarellaGrup^ p = CercadoraGrup::cercaPerNomGrup(_nom);
	if (_nom == "") {
		throw gcnew Exception("Aquest grup no existeix.");
	}
	else {
		_tematica = p->obteTematica();
		CercadoraPertany aux;
		List<PassarellaPertany^>^ l = aux.cercaParticipants(_nom);
		_nombreParticipants = l->Count;
	}
}
