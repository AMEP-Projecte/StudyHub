#include "pch.h"
#include "PassarellaProveidor.h"

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
	String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
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

