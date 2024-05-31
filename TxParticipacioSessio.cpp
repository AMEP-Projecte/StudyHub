#include "pch.h"
#include "TxParticipacioSessio.h"
#include "CercadoraSessio.h"

TxParticipacioSessio::TxParticipacioSessio(String^ n, String^ g, String^ d, String^ h, String^ a, int id) {
	_estudiant = n;
	_grup = g;
	_data = d;
	_horaInici = h;
	_adreca = a;
	_id = id;
}

void TxParticipacioSessio::executar() {
	
		// PassarellaParticipa^ NouParticipa = gcnew PassarellaParticipa(_estudiant,_grup, _data,_horaInici);
		PassarellaParticipa^ NouParticipa = gcnew PassarellaParticipa(_estudiant, _id);
		NouParticipa->insereix();

		PassarellaSessio^ modify = CercadoraSessio::cercaHora( _data, _grup,_adreca);
		int llocs = modify->obteLlocsLliures() - 1;
		modify->posaLlocs(llocs);
		modify->modificaLlocs();
	
}
