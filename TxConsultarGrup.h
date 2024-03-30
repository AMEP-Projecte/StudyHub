#pragma once
#include "CercadoraGrup.h"
#include "CercadoraPertany.h"

 ref class TxConsultaGrup
{
public:
	//cosntructora
	
	TxConsultaGrup(String^ n);

	void executar();

	String^ _nom;
	String^ _tematica;
	int _nombreParticipants;

};
