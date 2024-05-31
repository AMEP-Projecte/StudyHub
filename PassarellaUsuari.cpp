#include "pch.h"
#include "PassarellaUsuari.h"
#include "Encriptacio.h"
#include "Sistema.h"
using namespace MySql::Data::MySqlClient;

void PassarellaUsuari::GenerarContrasenya(String^ contrasenya)
{
	Encriptacio e;
	_contrasenya = e.EncriptarContrasenya(contrasenya);
	_salt = e.GenerarSalt(4);
	_contrasenya = e.ComputarHash(_contrasenya, _salt);

}

PassarellaUsuari::PassarellaUsuari()
{
	_username = "";
	_contrasenya = "";
	_tipus = "";
}
PassarellaUsuari::PassarellaUsuari(String^ username, String^ contrasenya, String^ tipus)
{
	_username = username;
	GenerarContrasenya(contrasenya); 
	_tipus = tipus;
}

PassarellaUsuari::PassarellaUsuari(String^ username, String^ contrasenya, String^ tipus, String^ salt)
{
	_username = username;
	_contrasenya = contrasenya;
	_tipus = tipus;
	_salt = salt;
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
void PassarellaUsuari::posaSalt(String^ salt)
{
	_salt = salt;
}

String^ PassarellaUsuari::obteSalt()
{
	return _salt;
}

void PassarellaUsuari::insereix() {
	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	String^ sql = "INSERT INTO usuari (username, contrasenya, tipus, salt) VALUES ('" + _username + "', '" + _contrasenya + "', '" + _tipus + "', '" + _salt + "')";


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
		MessageBox::Show("S'ha creat un usuari correctament");
		//Tanquem conexio
		conn->Close();
	}
}

void PassarellaUsuari::modifica() {
	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	String^ sql = "UPDATE usuari SET ";
	sql += "contrasenya = '" + _contrasenya + "', ";
	sql += "salt = '" + _salt + "' ";
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
		MessageBox::Show("S'ha editat l'usuari correctament.");
	}
}

void PassarellaUsuari::esborra()
{
	// Cadena de conexión a la base de datos
	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();

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