#pragma once
#include "CercadoraEspai.h"

using namespace System;

ref class TxEliminarEspai {
private:
	String^ _nomAdreca;
	String^ _nomProveidor;

public:
	TxEliminarEspai(String^ nomEspai, String^ nomProveidor);

	void executar();
};

