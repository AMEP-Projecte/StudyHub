#include "pch.h"
#include "PassarellaUsuari.h"

using namespace MySql::Data::MySqlClient;

PassarellaUsuari::PassarellaUsuari()
{
	_username = "";
	_contrasenya = "";
	_tipus = "";
}
PassarellaUsuari::PassarellaUsuari(String^ username, String^ contrasenya, String^ tipus)
{
	_username = username;
	_contrasenya = contrasenya;
	_tipus = tipus;
}

void PassarellaUsuari::posaNomUsuari(String^ username)
{
	_username = username;
}

String^ PassarellaUsuari::obteNomUsuari()
{
	return _username;
}

void PassarellaUsuari::posaContrasenya(String^ contrasenya)
{
	_contrasenya = contrasenya;
}

String^ PassarellaUsuari::obteContrasenya()
{
	return _contrasenya;
}

void PassarellaUsuari::posaTipus(String^ tipus)
{
	_tipus = tipus;
}

String^ PassarellaUsuari::obteTipus()
{
	return _tipus;
}

void PassarellaUsuari::insereix() {
	String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	String^ sql = "INSERT INTO usuari (username, contrasenya, tipus) VALUES ('" + _username + "', '" + _contrasenya + "', '" + _tipus + "')";

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

void PassarellaUsuari::modifica() {
	String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	String^ sql = "UPDATE usuari SET ";
	sql += "contrasenya = '" + _contrasenya + "' ";
	sql += "WHERE username = '" + _username + "'";

	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;


	try {
		conn->Open();
		dataReader = cmd->ExecuteReader();
	}
	catch (Exception^ ex) {
		//Errors
	}
	finally {
		conn->Close();
	}
}

void PassarellaUsuari::esborra()
{
	// Cadena de conexión a la base de datos
	String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";

	// Crear una conexión a la base de datos
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	// Comando SQL para eliminar un usuario
	String^ sql = "DELETE FROM usuari WHERE username = @username";

	// Crear un comando y asignar la conexión y el comando SQL
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

	// Asignar parámetros a la consulta SQL
	cmd->Parameters->AddWithValue("@username", _username);

	try {
		// Abrir la conexión
		conn->Open();

		// Ejecutar la consulta SQL
		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		//Errors
	}
	finally {
		// Cerrar la conexión
		conn->Close();
	}
}