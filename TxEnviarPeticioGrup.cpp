#include "pch.h"
#include "TxEnviarPeticioGrup.h"

TxEnviarPeticioGrup::TxEnviarPeticioGrup(String^ ng) {
	_nomGrup = ng;
}

void TxEnviarPeticioGrup::executar() {
	// Comprovar que l'estudiant no hagi enviat anteriorment una petició d'accés al grup o que no
	// estigui ja al grup. Si l'estudiant no es troba en cap d'aquests casos, crear una nova fila
	// a la taula Pertany
}