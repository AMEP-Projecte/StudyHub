#pragma once
#include <string>

using namespace System;

ref class PassarellaPertany
{
private:
	String^ _estudiant;
	String^ _grup;
	
public:
    //creadora
	PassarellaPertany(String^ estudiant, String^ grup); 
	
	// getters
	String^ obteEstudiant();
	String^ obteGrup();
	
	// setters
	void posaEstudiant(String^ estudiant);
	void posaGrup(String^ grup);

	void insereix();
};

