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
	String^ _contrasenyaNova;
	String^ _contrasenyaAntiga;

public:

	// Constructora
	TxEditarEstudiant(String^ nom, String^ cognom, String^ idioma, String^ localitat, String^ contrasenyaNova, String^ contrasenyaAntiga);

	void executar();
};
