#pragma once
#include "PassarellaValoracio.h"

using namespace System;
using namespace System::Collections::Generic;

ref class TxCercaValoracioGrup
{
private:
	String^ _grup;

public:
	TxCercaValoracioGrup(String^ grup); // constructora

	List<PassarellaValoracio^>^ executar();
};

