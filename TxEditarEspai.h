#pragma once
#include "CercadoraEspai.h"
#include "Sistema.h"

using namespace System;

ref class TxEditarEspai
{
private:
	String^ _adr;
	int _capacitat;

public:
	TxEditarEspai(String^ adr, int capacitat); // Constructora
	void executar();

};