/*#pragma once
#include <string>
#include "PassarellaUsuari.h"
#include "PassarellaEstudiant.h"
=======
#include "PassarellaAdmin.h"
#include "PassarellaProveidor.h"

using namespace System;


ref class Sistema
{
private:
	PassarellaEstudiant^ _est = nullptr;
	PassarellaProveidor^ _pro = nullptr;
	//PassarellaAdministrador* _adm = nullptr;
=======
	PassarellaAdmin^ _adm = nullptr;

	bool _sessioIniciada;
	String^ _username;
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
	void canviaContrasenya(String^ cNova);

	String^ obteUsername();

	String^ obteContrasenya();

	String^ obteTipusUsuari();

	PassarellaEstudiant^ obteEstudiant();
	PassarellaProveidor^ obteProveidor();
	//PassarelaAdministrador* obteAdministrador();
	PassarellaAdmin^ obteAdministrador();

	void iniciaSessio(PassarellaUsuari^ usu, PassarellaEstudiant^ estu, PassarellaAdmin^ admin, PassarellaProveidor^);
	void tancaSessio();
};
*/

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