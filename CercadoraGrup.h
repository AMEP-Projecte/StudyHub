#pragma once
#include "PassarellaGrup.h"

using namespace System::Collections::Generic;
using namespace System;

class CercadoraGrup {
	public:
		static PassarellaGrup^ cercaPerNomGrup(String^ NomGrup);
		static List<PassarellaGrup^>^ CercadoraGrup::cercaPerCreador(String^ username);
};

