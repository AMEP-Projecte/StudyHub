#pragma once
#include "CercadoraEstudiant.h"
#include "CercadoraGrup.h"
#include "CercadoraEspai.h"

using namespace System::Collections::Generic;

value struct ConsultaEstudiantsGrupsEspais {
	List<PassarellaEstudiant^>^ estudiants;
	List<PassarellaGrup^>^ grups;
	List<PassarellaEspai^>^ espais;
};

ref class TxObteEstudiantsGrupsEspais
{
private:
	ConsultaEstudiantsGrupsEspais^ resultat;
	String^ tipusResultat;


public:
	TxObteEstudiantsGrupsEspais(String^ tr); // Constructora
	void executar();
	ConsultaEstudiantsGrupsEspais^ obteResultat();
};

