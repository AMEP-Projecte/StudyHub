#pragma once
#include <string>
using namespace System;

ref class PassarellaParticipa
{
private:
	String^ _estudiant;
	String^ _grup;
	String^ _data;
	String^ _horaInici;

public:
	PassarellaParticipa();
	PassarellaParticipa(String^ estudiant, String^ grup, String^ data, String^ horaInici);

	void posaEstudiant(String^ estudiant);
	void posaGrup(String^ grup);
	void posaData(String^ data);
	void posaHoraInici(String^ hora);

	String^ obteEstudiant();
	String^ obteGrup();
	String^ obteData();
	String^ obteHoraInici();

	void insereix();
};

