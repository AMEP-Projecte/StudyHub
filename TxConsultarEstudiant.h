#pragma once
#include "PassarellaEstudiant.h"
#include"CercadoraEstudiant.h"


using namespace System;

value struct ConsultarEstudiant {
	String^ _nom;
	String^ _cognom;
	String^ _nomUsuari;
	String^ _correu;
	String^ _idioma;
	String^ _localitat;
	int _numValoracions;
};

ref class TxConsultarEstudiant
{

private:
	String^ nomEstudiant;
	ConsultarEstudiant _resultat;

public:

	TxConsultarEstudiant(String^ nomE);
	TxConsultarEstudiant();
	void executar();
	ConsultarEstudiant obteResultat();

};

