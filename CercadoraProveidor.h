#pragma once
#include "PassarellaProveidor.h"
//using namespace System;


using namespace System::Collections::Generic;


ref class CercadoraProveidor
{
public:
	PassarellaProveidor^ cercaProveidor(String^ username);
};