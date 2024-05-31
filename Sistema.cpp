#include "pch.h"
#include "Sistema.h"
#include <fstream>
#include <string>
using namespace System::IO;
using namespace System::Windows::Forms;
bool Sistema::obteEstatSessio() {
	return _sessioIniciada;
}

void Sistema::canviaEstatSessio(bool estat) {
	_sessioIniciada = estat;
}

void Sistema::canviaContrasenya(String^ cNova) {
	_contrasenya = cNova;
}

String^ Sistema::obteUsername() {
	return _username;
}

String^ Sistema::obteContrasenya() {
	return _contrasenya;
}

String^ Sistema::obteTipusUsuari() {
	return _tipusUsuari;
}

String^ Sistema::obteCadenaDeConnexio()
{
	String^ connectionString = nullptr;
	try {
		StreamReader^ sr = gcnew StreamReader("connection.txt");
		connectionString = sr->ReadLine();
		sr->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show("Error: " + e);
	}
	return connectionString;
}

PassarellaEstudiant^ Sistema::obteEstudiant() {
	return _est;
}

PassarellaProveidor^ Sistema::obteProveidor() {
	return _pro;
}


PassarellaAdmin^ Sistema::obteAdministrador() {
	return _adm;
}


void Sistema::iniciaSessio(PassarellaUsuari^ usu, PassarellaEstudiant^ estu, PassarellaAdmin^ admin, PassarellaProveidor^ pro) {
	_sessioIniciada = true;
	_username = usu->obteNomUsuari();
	_tipusUsuari = usu->obteTipus();
	_contrasenya = usu->obteContrasenya();
	if (_tipusUsuari == "estudiant" && estu != nullptr) {
		_est = estu;
	}
	else if (_tipusUsuari == "proveidor" && pro != nullptr) {
		_pro = pro;
	}
	else if (_tipusUsuari == "administrador" && admin != nullptr) {
		_adm = admin;
	}
	else {
		_sessioIniciada = false;
		_tipusUsuari = "";
		_contrasenya = "";
	}
}

void Sistema::tancaSessio() {
	if (_est != nullptr) delete _est;
	if (_pro != nullptr) delete _pro;
	if (_adm != nullptr) delete _adm;
	_sessioIniciada = false;
	_tipusUsuari = "";
	_contrasenya = "";
}