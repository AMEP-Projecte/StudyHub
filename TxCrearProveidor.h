#pragma once
using namespace System;
ref class TxCrearProveidor
{
private:
	String^ _username; 
	String^ _contra;
public:
	TxCrearProveidor(String^ username, String^ contra);

	void executar();
};

