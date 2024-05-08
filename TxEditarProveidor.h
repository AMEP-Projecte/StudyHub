#pragma once
#include "PassarellaProveidor.h"
#include "CercadoraProveidor.h"


using namespace System;
ref class TxEditarProveidor
{
private:
	String^ _contrasenyaActual;
	String^ _contrasenyaNova;
	bool _error;

public:
	// Constructora
	TxEditarProveidor(String^ ca, String^ cn);

	// Si _contrasenyaActual != _contrasenyaNova, error serà false i es substituirà, tant
	// a la fila corresponent de la base de dades com a la classe Sistema, la contrasenya
	// de l'usuari per _contrasenyaNova
	void executar();

	// Retorna _error
	bool obteError();



};

