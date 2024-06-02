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
	//int _id;
	String^ _id;

public:
	TxParticipacioSessio(String^ n, String^ g, String^ d, String^ h, String^ a, String^ id); // Constructora
	void executar();

};