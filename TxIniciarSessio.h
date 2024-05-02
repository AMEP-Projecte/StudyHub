#pragma once
using namespace System;

ref class TxIniciarSessio
{
private:
	String^ _username;
	String^ _contrasenya;
public:
	TxIniciarSessio(String^ username, String^ contrasenya);

	bool executar();
};

