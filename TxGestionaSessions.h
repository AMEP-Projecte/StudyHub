#pragma once
#include "CercadoraSessio.h"

using namespace System;
using namespace System::Collections::Generic;

value struct ConsultaSessio {
	List<String^>^ grup;
	List<String^>^ data;
	List<String^>^ horaInici;
	List<String^>^ horaFi;
	List<String^>^ adreca;
	List<String^>^ llocsLliures;
};

ref class TxGestionaSessions
{
private:
	ConsultaSessio^ resultat;
	String^ tipusSessions;
	String^ estudiant;

public:
	TxGestionaSessions(String^ e, String^ t);
	void executar();
	ConsultaSessio^ obteResultat();
};

