#pragma once
#include <string>
#include "PassarellaUsuari.h"
using namespace System;

ref class CercadoraUsuari
{
public:
	PassarellaUsuari^ cercaUsuari(String^ username);
};