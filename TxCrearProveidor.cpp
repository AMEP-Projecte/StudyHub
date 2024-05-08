#include "pch.h"
#include "TxCrearProveidor.h"
#include "PassarellaUsuari.h"
#include "PassarellaProveidor.h"
using namespace System;

TxCrearProveidor::TxCrearProveidor(String^ username, String^ contra) {
	_username = username;
	_contra = contra;
}

void TxCrearProveidor::executar() {
	PassarellaProveidor^ pp = gcnew PassarellaProveidor(_username, _contra, "proveidor");
	pp->insereix();
}