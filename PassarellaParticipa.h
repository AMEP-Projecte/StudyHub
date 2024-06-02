#pragma once
#include <string>
using namespace System;

ref class PassarellaParticipa
{
private:
	String^ _estudiant;
	// String^ _grup;
	// String^ _data;
	// String^ _horaInici;
	// int _id;
	String^ _id;

public:
	PassarellaParticipa();
	// PassarellaParticipa(String^ estudiant, String^ grup, String^ data, String^ horaInici);
	PassarellaParticipa(String^ estudiant, String^ id);

	void posaEstudiant(String^ estudiant);
	// void posaGrup(String^ grup);
	// void posaData(String^ data);
	// void posaHoraInici(String^ hora);
	void posaId(String^ id);

	String^ obteEstudiant();
	// String^ obteGrup();
	// String^ obteData();
	// String^ obteHoraInici();
	String^ obteId();

	void insereix();
	void esborra();
};

