#pragma once
#include <string>

using namespace System;

ref class PassarellaPertany
{
private:
	String^ _estudiant;
	String^ _grup;
	String^ _estat;

public:
	//creadora
	PassarellaPertany(String^ estudiant, String^ grup, String^ estat);

	// getters
	String^ obteEstudiant();
	String^ obteGrup();
	String^ obteEstat();

	// setters
	void posaEstudiant(String^ estudiant);
	void posaGrup(String^ grup);
	void posaEstat(String^ estat);

	void insereix();
	void modifica();
	void elimina();
};