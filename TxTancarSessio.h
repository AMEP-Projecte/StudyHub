#pragma once

ref class TxTancarSessio
{
public:
	// Constructora
	TxTancarSessio();

	// Post: S'enregistra que l'usuari ha tancat la seva sessió
	void executar();
};

