#include "pch.h"
#include "TxEsborrarProveidor.h"
#include "CercadoraUsuari.h"

using namespace System;

TxEsborrarProveidor::TxEsborrarProveidor(String^ username) {
	_username = username;
}

void TxEsborrarProveidor::executar() {
	CercadoraUsuari^ cu;
	PassarellaUsuari^ u = cu->cercaUsuari(_username);
	u->esborra();
}