#pragma once
#include "PassarellaSessio.h"

ref class TxEditarSessio
{
	String^ grup;
	String^ data;
	String^ hora_inici;
	String^ hora_fi;
	String^ nova_hora_fi;

public:
	TxEditarSessio(String^ g, String^ d, String^ hi, String^ hf);

	void posaNovaHoraFi(String^ nhf);
	void executar();
};

