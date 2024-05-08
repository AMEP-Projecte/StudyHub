#pragma once
#include "PassarellaUsuari.h"

ref class PassarellaProveidor : PassarellaUsuari
{
public:
	PassarellaProveidor(String^ username, String^ contrasenya, String^ tipus);

	void insereix() override;
};

