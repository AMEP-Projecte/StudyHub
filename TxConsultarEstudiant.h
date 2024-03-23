#pragma once
#include "PassarellaEstudiant.h"
#include"CercadoraEstudiant.h"


using namespace System;
ref class TxConsultarEstudiant
{
	
	
		

	
	private:
		String^ nomEstudiant;
	
	public:
		String^ nom;
		String^ cognom;
		String^ nomUsuari;
		String^ correu;
		String^ idioma;
		String^ localitat;
		int numValoracions;
		TxConsultarEstudiant(String^ nomE);
		void executar() ;
		
};

