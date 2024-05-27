#pragma once
#include "PassarellaParticipa.h"
#include <vector>
using namespace System::Collections::Generic;
ref class CercadoraParticipa
{

public:
	List<PassarellaParticipa^>^ cercaParticipaSessio(String^ grup);

	//List<PassarellaParticipa^>^ cercaParticipaGrup(String^ nom);

	static List<PassarellaParticipa^>^ cercaParticipaEstudiant(String^ nom);
	static PassarellaParticipa^ CercadoraParticipa::cercaParticipa(String^ data, String^ grup, String^ hora, String^ estudiant);
};

