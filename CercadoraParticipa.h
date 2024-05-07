#pragma once
#include "PassarellaParticipa.h"
#include <vector>
using namespace System::Collections::Generic;
ref class CercadoraParticipa
{
public:
	static PassarellaParticipa^ cercaParticipaSessio(String^ nom);

	List<PassarellaParticipa^>^ cercaParticipaEstudiant(String^ username);
};

