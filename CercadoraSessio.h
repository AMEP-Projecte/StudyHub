#pragma once
#include "PassarellaSessio.h"
#include <vector>
using namespace System::Collections::Generic;
ref class CercadoraSessio
{
	List<PassarellaSessio^>^ cercaSessioGrup(String^ nom);

	List<PassarellaSessio^>^ cercaSessioAdreca(String^ adreca);
};
