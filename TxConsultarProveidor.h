#pragma once
#include "PassarellaProveidor.h"
#include "CercadoraProveidor.h"


using namespace System;
ref class TxConsultarProveidor
{
private:
	String^ _usernameProveidor;

public:
	// Constructora
	TxConsultarProveidor();

	// Posa als atributs de la classe la informaci� del perfil del prove�dor que ha
	// iniciat sessi� (excepte la contrasenya)
	void executar();

	// Retorna _usernameProveidor
	String^ obteUsername();

};