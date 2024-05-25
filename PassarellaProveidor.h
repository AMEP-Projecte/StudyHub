#pragma once
#include "PassarellaUsuari.h"

ref class PassarellaProveidor : PassarellaUsuari
{
public:
	PassarellaProveidor(String^ username, String^ contrasenya);
	PassarellaProveidor(String^ username, String^ contrasenya, String^ salt);

	void insereix() override;
};

