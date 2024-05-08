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
	String^ res = "";

	//buscar si l'estudiant esta dins el grup/sessio
	for each (PassarellaParticipa ^ participes in participa) {
		if (participes->obteGrup() == _grup) res = _grup;
		
	}

	//si no està l'afegim a participa
	if (res == "") {
		PassarellaParticipa^ NouParticipa = gcnew PassarellaParticipa(_estudiant,_grup, _data,_horaInici);
		NouParticipa->insereix();

	}
	else {
		throw gcnew Exception("Ja estàs en aquesta sessió.");
		
	}
}
