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

public:
	TxParticipacioSessio(String^ n, String^ g, String^ d, String^ h); // Constructora
	void executar();

};