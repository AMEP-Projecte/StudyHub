#include "pch.h"
#include "TxTancarSessio.h"
#include "Sistema.h"

TxTancarSessio::TxTancarSessio() {

}

void TxTancarSessio::executar() {
	Sistema^ sist = Sistema::getInstance();
	sist->tancaSessio();
}