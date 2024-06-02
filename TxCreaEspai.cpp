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
	else throw gcnew Exception("Ja existeix un espai amb aquest nom.");
}