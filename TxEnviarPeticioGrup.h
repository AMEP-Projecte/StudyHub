#pragma once

#include "PassarellaPertany.h"
#include "CercadoraPertany.h"
#include "PassarellaGrup.h"
#include "CercadoraGrup.h"
#include "Sistema.h"

using namespace System;
ref class TxEnviarPeticioGrup
{
private:
	String^ _usernameEstudiant;
	String^ _nomGrup;

public:
	// Constructora
	TxEnviarPeticioGrup(String^ ue, String^ ng);

	// Si no existeix a la base de dades cap fila de la taula "Pertany" que tingui com a 
	// "estudiant" _usernameEstudiant i com a "grup" _nomGrup,
	// es crea una nova fila a aquesta taula amb "estudiant"= _usernameEstudiant,
	// "grup"=_nomGrup i "estat"= "Pendent".
	void executar();


};

