#include "pch.h"
#include "TxConsultarProveidor.h"
#include "Sistema.h"
#include "Alert.h"

TxConsultarProveidor::TxConsultarProveidor() {
}

void TxConsultarProveidor::executar() {
	Sistema^ sist = Sistema::getInstance();
	PassarellaProveidor^ pprov = sist->obteProveidor();
	_usernameProveidor = pprov->obteNomUsuari();
}

String^ TxConsultarProveidor::obteUsername() {
	return _usernameProveidor;
}