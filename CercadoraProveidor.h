#pragma once
#include "PassarellaProveidor.h"
using namespace System;
using namespace System::Collections::Generic;


using namespace System::Collections::Generic;


ref class CercadoraProveidor
{
public:
	static PassarellaProveidor^ cercaProveidor(String^ username);

	static List<PassarellaProveidor^>^ totsProveidors();
};