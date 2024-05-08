#pragma once
#include <string>
#include "PassarellaUsuari.h"
#include "PassarellaEstudiant.h"

using namespace System;


ref class Sistema
{
private:
	PassarellaEstudiant^ _est = nullptr;
	//PassarellaProveidor* _pro = nullptr;
	//PassarellaAdministrador* _adm = nullptr;

	bool _sessioIniciada;
	String^ _tipusUsuari;
	String^ _contrasenya;

	static Sistema^ instance = nullptr;

	Sistema() {
		_sessioIniciada = false;
	}

public:
	//static StudyHub::MenuPrincipal^ MenuPrincipalInstance = nullptr;
	//MenuPrincipal^ MenuPrincipalInstance;
	static Sistema^ getInstance() {
		if (instance == nullptr) {
			instance = gcnew Sistema();
		}
		return instance;
	}

	bool obteEstatSessio();
	void canviaEstatSessio(bool estat);

	String^ obteContrasenya();

	String^ obteTipusUsuari();

	PassarellaEstudiant^ obteEstudiant();
	//PassarellaProveidor* obteProveidor();
	//PassarelaAdministrador* obteAdministrador();

	void iniciaSessio(PassarellaUsuari^ usu, PassarellaEstudiant^ estu);
	void tancaSessio();
};
