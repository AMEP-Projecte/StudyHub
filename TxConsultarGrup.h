#pragma once
#include "CercadoraGrup.h"
#include "CercadoraPertany.h"

value struct ConsultaGrup {
	String^ _tematica;
	String^ _nombreParticipants;
};

 ref class TxConsultaGrup
{
private:
	String^ _nom;
	ConsultaGrup resultat;
	
public:
	TxConsultaGrup(String^ n); // constructora

	void executar();
	
	ConsultaGrup obteResultat();

};
