#include "pch.h"
#include "TxEditarSessio.h"

TxEditarSessio::TxEditarSessio(String^ g, String^ d, String^ hi, String^ hf) {
	grup = g;
	data = d;
	hora_inici = hi;
	hora_fi = hf;
	nova_hora_fi = "";
}

void TxEditarSessio::executar() {
	PassarellaSessio^ sessio = gcnew PassarellaSessio();
	sessio->posaGrup(grup);
	sessio->posaData(data);
	sessio->posaHoraInici(hora_inici);
	sessio->posaHoraFi(nova_hora_fi);
	sessio->modifica();
}

void TxEditarSessio::posaNovaHoraFi(String^ nhf) {
	nova_hora_fi = nhf;
}
