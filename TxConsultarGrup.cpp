#include "TxConsultarGrup.h"
#include<vector>
using namespace MySql::Data::MySqlClient;
using namespace System::Data;
using namespace System::Windows::Forms;

TxConsultaGrup::TxConsultaGrup(String^ n) {
	_nom = n;
}

void TxConsultaGrup::executar() {
	CercadoraGrup aux;
	CercadoraPertany aux1;
	try {
		PassarellaGrup p;
		if (_nom == "") grupExisteix = false;
		else {
			p = aux.cercaPerNomGrup(_nom);
			DataTable^ v = aux1.cercaParticipants(_nom);
			_tematica = p.getTematica();
			_nombreParticipants = v->Rows->Count;
	
		}
	}
	catch (Exception^ ex) {
		// codi per mostrar l’error en una finestra
		MessageBox::Show(ex->Message);
	}
}