#pragma once
#include "CercadoraEspai.h"
#include "CercadoraProveidor.h"

ref class TxConsultarEspaisProveidor
{
private:
	List<PassarellaEspai^>^ _resultat;
	String^ _proveidor;

public:
	TxConsultarEspaisProveidor(String^ proveidor);
	void executar();
	List<PassarellaEspai^>^ obteResultat();
};

