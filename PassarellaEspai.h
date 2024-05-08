#pragma once
#include <string>
using namespace System;

ref class PassarellaEspai
{
private:
	String^ _adreca;
	String^ _nom;
	int _capacitat;
	String^ _userProveidor;
public:
	PassarellaEspai();
	PassarellaEspai(String^ adreca, String^ nom, int capacitat, String^ proveidor);
	PassarellaEspai(const PassarellaEspai% P);

	void posarAdreca(String^ adreca);
	void posarNom(String^ nom);
	void posarCapacitat(int capacitat);
	void posarProveidor(String^ proveidor);

	String^ obteAdreca();
	String^ obteNom();
	int obteCapacitat();
	String^ obteProveidor();

	void insereix(); 
	void modifica();
	void esborra();

};

