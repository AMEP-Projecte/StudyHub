#pragma once
#include "TxProgramarSessioEstudi.h"
#include "Sistema.h"
#include "CercadoraGrup.h"
#include "PassarellaGrup.h"
#include "PassarellaSessio.h"
#include "CercadoraSessio.h"
#include "PassarellaEspai.h"
#include "CercadoraEspai.h"
using namespace System;
using namespace std;
using namespace System::Collections::Generic;
ref class TxProgramarSessioEstudi
{
private:
	List<PassarellaGrup^>^ grups;
	List<PassarellaEspai^>^ espais;
	List<PassarellaSessio^>^ sessions;

public:
	TxProgramarSessioEstudi();
	List<PassarellaGrup^>^ obteGrups();
	List<PassarellaEspai^>^ obteEspais();
	List<PassarellaSessio^>^ obteSessionsPerAdreca(String^ adreca);
	void ProgramarSessio(String^ grup, String^ data, String^ horaI, String^ horaF, String^ adreca);
};

