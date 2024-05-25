#pragma once
#include "PassarellaValoracio.h"
using namespace System;
using namespace System::Collections::Generic;

ref class CercadoraValoracio
{
public:
	PassarellaValoracio^ cercaValoracio(String^ estudiant, String^ grup);

	List<PassarellaValoracio^>^ cercaValoracioGrup(String^ grup);
};