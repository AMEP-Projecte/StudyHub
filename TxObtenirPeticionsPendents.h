#pragma once

#include "CercadoraPertany.h"

ref class TxObtenirPeticionsPendents
{
private:
	String^ _usernameCreador;
	DataTable^ _resultat;

public:
	// Constructora
	TxObtenirPeticionsPendents(String^ nc);

	// Posa a _resultat una taula amb les columnes "estudiant" i "grup" de totes les files
	// de la taula "Pertany" que tinguin com "grup" qualsevol grup de l'estudiant amb
	// username == _usernameCreador
	void executar();

	// Retorna _resultat
	DataTable^ obteResultat();
};

