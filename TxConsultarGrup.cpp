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
	if (p->obteNom() == "") {
		throw gcnew Exception("Aquest grup no existeix.");
	}
	else {
		String^ t = p->obteTematica();

		CercadoraPertany aux;
		List<PassarellaPertany^>^ l = aux.cercaParticipants(_nom);
		int p = l->Count;
		String^ np = p.ToString();

		resultat._tematica = t;
		resultat._nombreParticipants = np;
	}
}

ConsultaGrup TxConsultaGrup::obteResultat() {
	return resultat;
}
