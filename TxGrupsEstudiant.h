#pragma once
#include "CercadoraGrup.h"

using namespace System;
using namespace System::Collections::Generic;

value struct ConsultaGrupEstudiant {
	List<String^>^ grup;
	List<String^>^ tematica;
};

ref class TxGrupsEstudiant
{
private:
	ConsultaGrupEstudiant^ resultat;
	String^ estudiant;

public:
	TxGrupsEstudiant(String^ e);
	void executar();
	ConsultaGrupEstudiant^ obteResultat();
};

