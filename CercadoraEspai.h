#pragma once
#include "PassarellaEspai.h"
#include "PassarellaProveidor.h"

using namespace System;
using namespace System::Collections::Generic;

ref class CercadoraEspai
{
public:
	static PassarellaEspai^ cercaEspaiAdreca(String^ Adreca);
	static List<PassarellaEspai^>^ cercaEspaiProveidor(String^ proveidor);

	static List<PassarellaEspai^>^ totsEspai();
};
