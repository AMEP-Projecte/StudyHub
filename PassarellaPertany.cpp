#include "pch.h"
#include "PassarellaPertany.h"
#include "Sistema.h"
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace std;

PassarellaPertany::PassarellaPertany(String^ estudiant, String^ grup, String^ estat) {
	_estudiant = estudiant;
	_grup = grup;
	_estat = estat;
}

String^ PassarellaPertany::obteEstudiant() {
	return _estudiant;
}

String^ PassarellaPertany::obteGrup() {
	return _grup;
}

String^ PassarellaPertany::obteEstat() {
	return _estat;
}

void PassarellaPertany::posaEstudiant(String^ estudiant) {
	_estudiant = estudiant;
}

void PassarellaPertany::posaGrup(String^ grup) {
	_grup = grup;
}
void PassarellaPertany::posaEstat(String^ estat) {
	_estat = estat;
}
void PassarellaPertany::insereix() {
	bool totcorrecte = true;
	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	String^ sql = "INSERT INTO pertany(estudiant, grup, estat) VALUES('" + _estudiant + "', '" + _grup + "', '" + _estat + "')";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	try {
		// obrim la connexio
		conn->Open();
		// executem la comanda (cmd) que s'ha creat abans del try
		dataReader = cmd->ExecuteReader();
	}
	
	finally {
		// si tot va be es tanca la connexio
		/*if (totcorrecte) {
			MessageBox::Show("Grup Creat Correctament.");
		}*/
		conn->Close();
	}
}

void PassarellaPertany::modifica() {
	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	String^ sql = "UPDATE pertany SET estudiant = @estudiant, grup = @grup, estat = @estat WHERE estudiant = @usernameEstudiant AND grup = @nomGrup";

	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

	cmd->Parameters->AddWithValue("@estudiant", _estudiant);
	cmd->Parameters->AddWithValue("@grup", _grup);
	cmd->Parameters->AddWithValue("@estat", _estat);
	cmd->Parameters->AddWithValue("@usernameEstudiant", _estudiant);
	cmd->Parameters->AddWithValue("@nomGrup", _grup);


	try {
		conn->Open();
		cmd->ExecuteNonQuery();
	}
	catch (MySqlException^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		conn->Close();
	}
}

void PassarellaPertany::elimina() {
	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	String^ sql = "DELETE FROM pertany WHERE estudiant = @usernameEstudiant AND grup = @nomGrup;";

	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	cmd->Parameters->AddWithValue("@usernameEstudiant", _estudiant);
	cmd->Parameters->AddWithValue("@nomGrup", _grup);
	MySqlDataReader^ dataReader;
	try {
		// obrim la connexio
		conn->Open();
		// executem la comanda (cmd) que s'ha creat abans del try
		cmd->ExecuteNonQuery();
	}
	catch (MySqlException^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		// si tot va be es tanca la connexio
		conn->Close();
	}
}
