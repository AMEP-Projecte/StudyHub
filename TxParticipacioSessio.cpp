#include "pch.h"
#include "TxParticipacioSessio.h"

TxParticipacioSessio::TxParticipacioSessio(String^ n, String^ g, String^ d, String^ h) {
	_estudiant = n;
	_grup = g;
	_data = d;
	_horaInici = h;
}

void TxParticipacioSessio::executar() {

		PassarellaParticipa^ NouParticipa = gcnew PassarellaParticipa(_estudiant,_grup, _data,_horaInici);
		NouParticipa->insereix();
	
	
}
