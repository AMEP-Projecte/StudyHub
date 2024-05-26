#pragma once
using namespace System;
#include "PassarellaValoracio.h"
#include "CercadoraEstudiant.h"

ref class TxEsborraValoracio
{
private:
	String^ username;
	String^ grup;
	
public:
	TxEsborraValoracio(String^ u, String^ g);
	void executar();
};

