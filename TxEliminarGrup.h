#pragma once
#include "CercadoraGrup.h"

using namespace System;

ref class TxEliminarGrup {
	private:
		String^ _nomGrup;
		String^ _estudiant;

	public:
		TxEliminarGrup(String^ NomGrup, String^ Estudiant);

		void executar();
};

