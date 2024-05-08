#pragma once
#include "CercadoraGrup.h"
#include "Sistema.h"

using namespace System;

ref class TxEditarGrup
{
private:
	String^ _nom;
	String^ _tematica;

public:
	TxEditarGrup(String^ n, String^ t);
	void executar();

};