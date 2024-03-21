#pragma once
#include "PassarellaEstudiant.h"
using namespace System;
ref class CercadoraEstudiant
{
	PassarellaEstudiant^ cercaEstudiantPerNom(String^ username);
	PassarellaEstudiant^ cercaEstudiantPerCorreu(String^ correu);
};

