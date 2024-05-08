#pragma once
using namespace System;
ref class TxEsborrarProveidor
{
private: 
	String^ _username;

public:
	TxEsborrarProveidor(String^ username);

	void executar();
};

