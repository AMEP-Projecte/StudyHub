#pragma once
#include "PassarellaEspai.h"
using namespace System;
using namespace System::Collections::Generic;

ref class CercadoraEspai
{
public:
	static PassarellaEspai^ cercaEspaiAdreca(String^ Adreca);
	List<PassarellaEspai^>^ cercaEspaiProveidor(String^ proveidor);
};

