#pragma once
#include "PassarellaValoracio.h"

using namespace System;

ref class TxCercaValoracio{
private:
	String^ _estudiant;
	String^ _grup;

public:
	TxCercaValoracio(String^ estudiant, String^ grup); // constructora

	PassarellaValoracio^ executar();
};

