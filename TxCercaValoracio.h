#pragma once
#include "PassarellaValoracio.h"

using namespace System;

ref class TxCercaValoracio{
private:
	String^ _estudiant;
	String^ _grup;
	Int64^ _valoracio;
	String^ _comentari;
public:
	TxCercaValoracio(String^ estudiant, String^ grup, Int64^ valoracio, String^ comentari); // constructora

	PassarellaValoracio^ executar();
};

