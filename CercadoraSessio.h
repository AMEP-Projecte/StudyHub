#pragma once
#include "PassarellaSessio.h"
#include <vector>
using namespace System::Collections::Generic;
ref class CercadoraSessio
{
public:
	List<PassarellaSessio^>^ cercaSessioGrup(String^ nom);


	static List<PassarellaSessio^>^ cercaSessioAdreca(String^ adreca);
	static List<PassarellaSessio^>^ cercaSessionsProximesDelEspai(String^ adrecaEspai);

	static List<PassarellaSessio^>^ cercaSessionsProximesNoConfirmadesDelEstudiant(String^ estudiant);
	static List<PassarellaSessio^>^ cercaSessionsProximesConfirmadesDelEstudiant(String^ estudiant);

	static PassarellaSessio^ cercaHora(String^ data, String^ grup, String^ adreca);
	static PassarellaSessio^ cercaAdreca(String^ grup, String^ data, String^ hora);
};

