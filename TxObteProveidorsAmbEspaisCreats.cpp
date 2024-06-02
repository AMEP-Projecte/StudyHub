#include "pch.h"
#include "TxObteProveidorsAmbEspaisCreats.h"

TxObteProveidorsAmbEspaisCreats::TxObteProveidorsAmbEspaisCreats() {

}

void TxObteProveidorsAmbEspaisCreats::executar() {
	resultat = gcnew ConsultaProveidors();

	resultat->proveidors = gcnew List<PassarellaProveidor^>();
	resultat->proveidors = CercadoraProveidor::totsProveidors();

	resultat->espais = gcnew List<ConsultaEspaisDelProveidor>();
	for each (PassarellaProveidor ^ proveidor in resultat->proveidors)
	{
		ConsultaEspaisDelProveidor consultaEspais = ConsultaEspaisDelProveidor();
		consultaEspais.espais = gcnew List<PassarellaEspai^>();
		consultaEspais.espais = CercadoraEspai::cercaEspaiProveidor(proveidor->obteNomUsuari());

		resultat->espais->Add(consultaEspais);
	}
}

ConsultaProveidors^ TxObteProveidorsAmbEspaisCreats::obteResultat() {
	return resultat;
}