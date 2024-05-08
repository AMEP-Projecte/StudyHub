#pragma once
#include "PassarellaGrup.h"

using namespace System::Collections::Generic;
using namespace System;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
class CercadoraGrup {
public:
	static PassarellaGrup^ cercaPerNomGrup(String^ NomGrup);
	List<PassarellaGrup^>^ cercaPerCreador(String^ NomCreador);
};

