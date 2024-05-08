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
		resultat[0] = p->obteTematica();
		CercadoraPertany aux;
		List<PassarellaPertany^>^ l = aux.cercaParticipants(_nom);
		int p = l->Count;
		resultat[1] = p.ToString();
	}
}

List<String^>^ TxConsultaGrup::obteResultat() {
	return resultat;
}
