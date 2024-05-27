#pragma once
#include "CercadoraParticipa.h"
#include "Sistema.h"

using namespace System;

ref class TxParticipacioSessio
{
private:
	String^ _estudiant;
	String^ _grup;
	String^ _data;
	String^ _horaInici;
	String^ _adreca;

public:
	TxParticipacioSessio(String^ n, String^ g, String^ d, String^ h, String^ a); // Constructora
	void executar();

};