#pragma once

#include "PassarellaPertany.h"
#include "CercadoraPertany.h"
#include "Sistema.h"

using namespace System;
ref class TxEnviarPeticioGrup
{
private:
	String^ _nomGrup;

public:
	// Constructora
	TxEnviarPeticioGrup(String^ ng);

	// Si no existeix a la base de dades cap fila de la taula "Pertany" que tingui com a 
	// "estudiant" el username de l'estudiant que ha iniciat sessió i com a "grup" _nomGrup,
	// es crea una nova fila a aquesta taula amb "estudiant"= username de l'estudiant que ha
	// iniciat sessió, "grup"=_nomGrup i "estat"=Pendent.
	void executar();


};

