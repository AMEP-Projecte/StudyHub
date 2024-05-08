#pragma once
#include "CercadoraGrup.h"
#include "CercadoraPertany.h"

 ref class TxConsultaGrup
{
private:
	String^ _nom;
	List<String^>^ resultat;
	// resultat[0] és el nom
	// resultat[1] té el nombre de participants
public:
	TxConsultaGrup(String^ n); // constructora

	void executar();
	
	List<String^>^ obteResultat();

};
