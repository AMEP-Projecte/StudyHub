#pragma once
#include "PassarellaSessio.h"
ref class TxEsborrarSessio
{
private:
	PassarellaSessio^ _ps;
public:
	TxEsborrarSessio(PassarellaSessio^ ps);

	void executar();
};

