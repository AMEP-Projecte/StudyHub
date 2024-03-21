#pragma once
#include "Transaccio.h"
#include "CercadoraGrup.h"

using namespace System;

ref class TxEditarGrup
{
private:
	String^ _nom;
	String^ _tematica;

public:

	// Constructora
	TxEditarGrup(String^ n, String^ t);

	bool grupExisteix;

	void executar();
};
