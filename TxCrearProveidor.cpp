#include "pch.h"
#include "TxCrearProveidor.h"
#include "PassarellaUsuari.h"
#include "PassarellaProveidor.h"
#include "CercadoraProveidor.h"
using namespace System;

TxCrearProveidor::TxCrearProveidor(String^ username, String^ contra) {
	_username = username;
	_contra = contra;
}

void TxCrearProveidor::executar() {
	PassarellaProveidor^ existeix = CercadoraProveidor::cercaProveidor(_username);
	if (existeix == nullptr) {
		PassarellaProveidor^ pp = gcnew PassarellaProveidor(_username, _contra);
		pp->insereix();
	}
	else throw gcnew Exception("Ja existeix un proveidor amb aquest nom d'usuari.");
}