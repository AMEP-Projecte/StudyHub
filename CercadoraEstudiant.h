#pragma once
#include "PassarellaEstudiant.h"
using namespace System;
using namespace System::Collections::Generic;

ref class CercadoraEstudiant
{
public:
	static PassarellaEstudiant^ cercaEstudiantPerNom(String^ username);
	PassarellaEstudiant^ cercaEstudiantPerCorreu(String^ correu);

	static List<PassarellaEstudiant^>^ totsEstudiants();
};

