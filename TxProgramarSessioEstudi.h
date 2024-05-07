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
value struct Resultat {
	List<PassarellaGrup^>^ grups;
	List<PassarellaEspai^>^ espais;
	List<PassarellaSessio^>^ sessions;
};
ref class TxProgramarSessioEstudi
{
private:
	Resultat _resultat;
	String^ _grup;
	String^ _data;
	String^ _horaI;
	String^ _horaF;
	String^ _adreca;
public:
	TxProgramarSessioEstudi();
	TxProgramarSessioEstudi(String^ grup, String^ data, String^ horaI, String^ horaF, String^ adreca);
	void executar();
	Resultat obteResultat();
	List<PassarellaSessio^>^ TxProgramarSessioEstudi::obteSessionsPerAdreca(String^ adreca);

};

