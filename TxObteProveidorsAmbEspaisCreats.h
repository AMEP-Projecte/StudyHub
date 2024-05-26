#pragma once
#include "CercadoraProveidor.h"
#include "CercadoraEspai.h"

using namespace System::Collections::Generic;

value struct ConsultaEspaisDelProveidor {
	List<PassarellaEspai^>^ espais;
};

value struct ConsultaProveidors {
	List<PassarellaProveidor^>^ proveidors;
	List<ConsultaEspaisDelProveidor>^ espais;
};

ref class TxObteProveidorsAmbEspaisCreats
{
private:
	ConsultaProveidors^ resultat;

public:
	TxObteProveidorsAmbEspaisCreats();
	void executar();
	ConsultaProveidors^ obteResultat();
};

