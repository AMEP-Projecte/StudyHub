#pragma once
#include "CercadoraGrup.h"
#include "CercadoraPertany.h"

 class TxConsultaGrup
{
public:
	//cosntructora
	
	TxConsultaGrup(String^ n);

	void executar();



private:
	String^ _nom;
	String^ _tematica;
	int _nombreParticipants;
	bool grupExisteix = true;

};