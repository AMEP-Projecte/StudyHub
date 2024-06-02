#include "pch.h"
#include "TxConsultarEspaisProveidor.h"

using namespace MySql::Data::MySqlClient;
using namespace System::Data;
using namespace System::Windows::Forms;

TxConsultarEspaisProveidor::TxConsultarEspaisProveidor(String^ proveidor) {
	_proveidor = proveidor;
}

void TxConsultarEspaisProveidor::executar() {
	_resultat = CercadoraEspai::cercaEspaiProveidor(_proveidor);
}

List<PassarellaEspai^>^ TxConsultarEspaisProveidor::obteResultat() {
	return _resultat;
}