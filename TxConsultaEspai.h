#pragma once
#include "CercadoraEspai.h"
#include "CercadoraProveidor.h"

value struct Resultat{
	String^ _adreca;
	String^ _nom;
	int _capacitat;
	String^ _uproveidor;
};

ref class TxConsultaEspai
{
	private:
		Resultat _resultat;
		String^ _adreca;
	public:
	
	TxConsultaEspai(String^ a);
	void executar();
	Resultat obteResultat();
};