#pragma once
#include "pch.h"
#include "PassarellaUsuari.h"
#include "CercadoraEstudiant.h"
#include "CercadoraUsuari.h"

using namespace System;

ref class TxEsborraEstudiantAdmin
{
private:
	String^ _userestudiant;

public:
	TxEsborraEstudiantAdmin(String^ n); // Constructora
	void executa();

};
