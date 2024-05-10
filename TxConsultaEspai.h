#pragma once
#include "CercadoraEspai.h"
#include "CercadoraProveidor.h"

value struct ConsultaEspai {
	String^ _adreca;
	String^ _nom;
	int _capacitat;
	String^ _uproveidor;
};

ref class TxConsultaEspai
{
	private:
		ConsultaEspai _resultat;
		String^ _adreca;
	public:
	
	TxConsultaEspai(String^ a);
	void executar();
	ConsultaEspai obteResultat();
};