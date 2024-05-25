#include "pch.h"
#include "TxEditarEspai.h"
#include "CercadoraSessio.h"

TxEditarEspai::TxEditarEspai(String^ adr, int capacitat) {
	_adr = adr;
	_capacitat = capacitat;
}

void TxEditarEspai::executar() {
	List<PassarellaSessio^>^ sessionsProximes = CercadoraSessio::cercaSessionsProximesDelEspai(_adr);

	if (sessionsProximes->Count == 0) {
		PassarellaEspai^ espai = gcnew PassarellaEspai();
		espai->posarAdreca(_adr);
		espai->posarCapacitat(_capacitat);

		espai->modifica();
	}
	else throw gcnew Exception("No pots modificar un espai que té sessions programades.");
}