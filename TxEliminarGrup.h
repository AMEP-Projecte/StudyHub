#pragma once
#include "CercadoraGrup.h"
#include "TxCercarGrups.h"

using namespace System;

ref class TxEliminarGrup {
	private:
		String^ _nomGrup;
		String^ _estudiant;

	public:
		TxEliminarGrup(String^ NomGrup, String^ Estudiant);

		List<Grup>^ obteGrupsEstudiant(String^ est);

		void executar();
};

