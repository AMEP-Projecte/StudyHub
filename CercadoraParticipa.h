#pragma once
#include "PassarellaParticipa.h"
#include <vector>
using namespace System::Collections::Generic;
ref class CercadoraParticipa
{
	List<PassarellaParticipa^>^ cercaParticipaGrup(String^ nom);

	List<PassarellaParticipa^>^ cercaParticipaEstudiant(String^ username);
};

