#include "pch.h"
#include "TxEsborrarSessio.h"

TxEsborrarSessio::TxEsborrarSessio(PassarellaSessio^ ps) {
	_ps = ps;
}

void TxEsborrarSessio::executar() {
	_ps->esborra();
}