#pragma once
#include "PassarellaPertany.h"
#include <vector>
using namespace System;
using namespace System::Data;
using namespace System::Collections::Generic;


 ref class CercadoraPertany
{

public:
	List<PassarellaPertany^>^ CercadoraPertany::cercaParticipants(String^ nomGrup);
	
	DataTable^ obtePeticionsPendents(String^ usernameCreador);

	static PassarellaPertany^ cercaEstudiantEnGrup(String^ usernameEstudiant, String^ nomGrup);
};


