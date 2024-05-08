/*
#pragma once
#include "PassarellaProveidor.h"
ref class CercadoraProveidor
{
public:

	//PassarellaProveidor^ cercaProveidor(String^ username);

	PassarellaProveidor^ cercaProveidor(String^ username);

};

*/

#pragma once
#include "PassarellaProveidor.h"
//using namespace System;


ref class CercadoraProveidor
{
public:
	PassarellaProveidor^ cercaProveidor(String^ username);
};