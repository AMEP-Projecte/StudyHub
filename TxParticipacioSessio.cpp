#include "pch.h"
#include "TxParticipacioSessio.h"

TxParticipacioSessio::TxParticipacioSessio(String^ n, String^ g, String^ d, String^ h) {
	_estudiant = n;
	_grup = g;
	_data = d;
	_horaInici = h;
}

void TxParticipacioSessio::executar() {
	List<PassarellaParticipa^>^participa = CercadoraParticipa::cercaParticipaEstudiant(_estudiant);
	if (participa->obteNomUsuari() == " "  ) {
		PassarellaParticipa^ NouParticipa = gcnew PassarellaParticipa(_estudiant,_grup, _data,_horaInici);
		NouParticipa->insereix();

	}
	else {
		throw gcnew Exception("Ja estàs en aquesta sessió.");
		
	}
}
