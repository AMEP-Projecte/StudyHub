#pragma once
#include "PassarellaParticipa.h"
#include <vector>
using namespace System::Collections::Generic;
ref class CercadoraParticipa
{
public:
	List<PassarellaParticipa^>^ cercaParticipaSessio(String^ grup);

	static List<PassarellaParticipa^>^ cercaParticipaEstudiant(String^ nom);
};

