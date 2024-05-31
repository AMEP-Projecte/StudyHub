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
	int _id;

public:
	PassarellaParticipa();
	// PassarellaParticipa(String^ estudiant, String^ grup, String^ data, String^ horaInici);
	PassarellaParticipa(String^ estudiant, int id);

	void posaEstudiant(String^ estudiant);
	// void posaGrup(String^ grup);
	// void posaData(String^ data);
	// void posaHoraInici(String^ hora);
	void posaId(int id);

	String^ obteEstudiant();
	// String^ obteGrup();
	// String^ obteData();
	// String^ obteHoraInici();
	int obteId();

	void insereix();
	void esborra();
};

