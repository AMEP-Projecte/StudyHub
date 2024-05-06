#pragma once
#include "CercadoraEspai.h"
#include "CercadoraProveidor.h"

ref class TxConsultaEspai
{
	private:
		String^ _adreca;
		String^ _nom;
		int _capacitat;
		String^ _uproveidor;
	public:
	
	TxConsultaEspai(String^ a);

	void executar();

	String^ obteAdreca();
	String^ obteNom();
	int obteCapacitat();
	String^ obteUproveidor();

};