#pragma once
#include "CercadoraValoracio.h"

using namespace System;
using namespace System::Collections::Generic;

value struct ConsultaValoracions {
	List<String^>^ grup;
	List<String^>^ valoracio;
	List<String^>^ comentari;
};

ref class TxValoracionsEstudiant
{
private:
	ConsultaValoracions^ resultat;
	String^ username;

public:
	TxValoracionsEstudiant(String^ u);
	void executar();
	ConsultaValoracions^ obteResultat();
};

