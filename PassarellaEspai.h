#pragma once
#include <string>
using namespace System;
ref class PassarellaEspai
{
private:
	String^ _adreca;
	String^ _nom;
	String^ _capacitat;
	String^ _userProveidor;
public:
	PassarellaEspai();
	PassarellaEspai(String^ adreca, String^ nom, String^ capacitat, String^ proveidor);

	void posarAdreca(String^ adreca);
	void posarNom(String^ nom);
	void posarCapacitat(String^ capacitat);
	void posarProveidor(String^ proveidor);

	String^ obteAdreca();
	String^ obteNom();
	String^ obteCapacitat();
	String^ obteProveidor();
};

