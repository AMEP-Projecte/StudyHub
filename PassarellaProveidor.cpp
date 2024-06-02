#include "pch.h"
#include "PassarellaProveidor.h"
#include "Sistema.h"
PassarellaProveidor::PassarellaProveidor(String^ username, String^ contrasenya)
{
	_username = username;
	GenerarContrasenya(contrasenya);
	_tipus = "proveidor";
}
PassarellaProveidor::PassarellaProveidor(String^ username, String^ contrasenya, String^ salt)
{
	_username = username;
	_contrasenya = contrasenya;
	_salt = salt;
	_tipus = "proveidor";
}

void PassarellaProveidor::insereix() {
	PassarellaUsuari::insereix();
	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	String^ sql = "INSERT INTO proveidor (username) VALUES ('" + _username + "')";

	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

	try {
		// Obrim connexio
		conn->Open();

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		//Errors;


	}
	finally {
		//Tanquem conexio
		conn->Close();
	}
}

