#include "pch.h"
#include "TxEditarSessio.h"
#include "CercadoraGrup.h"
#include "Sistema.h"

TxEditarSessio::TxEditarSessio(String^ g, String^ d, String^ hi, String^ hf) {
	grup = g;
	data = d;
	hora_inici = hi;
	hora_fi = hf;
	nova_hora_fi = "";
}

void TxEditarSessio::executar() {
	Sistema^ sistema = Sistema::getInstance();
	PassarellaGrup^ grupSessio = CercadoraGrup::cercaPerNomGrup(grup);

	if (grupSessio->obtecreador() == sistema->obteUsername()) {
		PassarellaSessio^ sessio = gcnew PassarellaSessio();
		sessio->posaGrup(grup);
		sessio->posaData(data);
		sessio->posaHoraInici(hora_inici);
		sessio->posaHoraFi(nova_hora_fi);
		sessio->modifica();
	}
	else throw gcnew Exception("No pots modificar una sessió que no has programat.");
}

void TxEditarSessio::posaNovaHoraFi(String^ nhf) {
	nova_hora_fi = nhf;
}
