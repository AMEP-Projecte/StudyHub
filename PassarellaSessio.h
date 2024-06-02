#pragma once
#include <string>
using namespace System;
ref class PassarellaSessio
{
private:
	String^ _grup;
	String^ _data;
	String^ _horaInici;
	String^ _horaFi;
	String^ _adreca;
	int _llocsLliures;
	// int _id;
	String^ _id;

public:
	PassarellaSessio();
	PassarellaSessio(String^ id, String^ grup, String^ data, String^ horaInici, String^ horaFi,	String^ adreca, int llocs);

	void posaGrup(String^ grup);
	void posaData(String^ data);
	void posaHoraInici(String^ hora);
	void posaHoraFi(String^ hora);
	void posaAdreca(String^ adreca);
	void posaLlocs(int llocs);
	

	String^ obteGrup();
	String^ obteData();
	String^ obteHoraInici();
	String^ obteHoraFi();
	String^ obteAdreca();
	int obteLlocsLliures();
	String^ obteId();
		
	void insereix();
	void modifica();
	void modificaLlocs();
	void esborra();
};

