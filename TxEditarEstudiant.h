#pragma once
#include "Sistema.h"
#include "PassarellaEstudiant.h"
#include "CercadoraUsuari.h"

using namespace System;

ref class TxEditarEstudiant
{
private:
	String^ _nom;
	String^ _cognoms;
	String^ _idioma;
	String^ _localitat;
	String^ _contrasenya;

public:

	// Constructora
	TxEditarEstudiant(String^ n, String^ cn, String^ i, String^ l, String^ c);

	void executar();
};
