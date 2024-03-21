#pragma once
#include "CercadoraGrup.h"

using namespace System;

ref class TxCrearNouGrupEstudi {
	private:
		String^ _nomGrup;
		String^ _tematica;
		String^ _estudiant;
	public:
		TxCrearNouGrupEstudi(String^ NomGrup, String^ Tematica, String^ Estudiant);

		void executa();

};

