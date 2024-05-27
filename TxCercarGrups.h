#pragma once
#include "PassarellaGrup.h"
#include <vector>

using namespace System;
using namespace System::Collections::Generic;

value struct Grup {
	PassarellaGrup^ _grup;
	int _nombreParticipants;
	float _valMitja;
};

ref class TxCercarGrups
{
private:
	List<Grup>^ resultat;

public:
	TxCercarGrups();
	void executar();
	List<Grup>^ obteResultat();
};

