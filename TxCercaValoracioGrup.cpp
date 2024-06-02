#include "pch.h"
#include "TxCercaValoracioGrup.h"
#include "CercadoraValoracio.h"

TxCercaValoracioGrup::TxCercaValoracioGrup(String^ grup) {
	_grup = grup;
}

List<PassarellaValoracio^>^ TxCercaValoracioGrup::executar() {
	CercadoraValoracio cv;
	return cv.cercaValoracioGrup(_grup);
}