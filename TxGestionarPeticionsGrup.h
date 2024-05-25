#pragma once
#include "CercadoraPertany.h"


ref class TxGestionarPeticionsGrup
{
private:
	String^ _usernameEstudiant;
	String^ _nomGrup;
	bool _acceptat;

public:
	// Constructora
	TxGestionarPeticionsGrup(String^ ne, String^ ng, bool a);

	// Si _acceptat == true, la columna "estat" de fila de la taula "Pertany" de
	// la base de dades amb "estudiant" == _usernameEstudiant i "grup" == _nomGrup
	// passa a tenir el valor "Acceptat". Altrament, aquesta fila s'elimina de la
	// base de dades
	void executar();

};

