#include "pch.h"
#include "TxEsborrarProveidor.h"
#include "CercadoraUsuari.h"
#include "CercadoraEspai.h"
#include "CercadoraSessio.h"

using namespace System;

TxEsborrarProveidor::TxEsborrarProveidor(String^ username) {
	_username = username;
}

void TxEsborrarProveidor::executar() {
	int sessionsProgramades = 0;

	List<PassarellaEspai^>^ espais = CercadoraEspai::cercaEspaiProveidor(_username);
	for each (PassarellaEspai ^ espai in espais)
	{
		List<PassarellaSessio^>^ sessions = CercadoraSessio::cercaSessionsProximesDelEspai(espai->obteAdreca());
		sessionsProgramades += sessions->Count;
	}

	if (sessionsProgramades == 0) {
		PassarellaUsuari^ u = gcnew PassarellaUsuari();
		u->posaNomUsuari(_username);
		u->esborra();
	}
	else throw gcnew Exception("No es pot eliminar aquest proveïdor ja que ha creat espais on hi ha sessions programades.");
}