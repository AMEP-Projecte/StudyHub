#include "pch.h"
#include "PassarellaParticipa.h"
#include "Sistema.h"
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace std;

PassarellaParticipa::PassarellaParticipa(){}
/*
PassarellaParticipa::PassarellaParticipa(String^ estudiant, String^ grup, String^ data, String^ horaInici) {
	_estudiant = estudiant;
	_grup = grup;
	_data = data;
	_horaInici = horaInici;
}
*/
PassarellaParticipa::PassarellaParticipa(String^ estudiant, int id) {
	_estudiant = estudiant;
	_id = id;
}

void PassarellaParticipa::posaEstudiant(String^ estudiant) {
	_estudiant = estudiant;
}
/*
void PassarellaParticipa::posaGrup(String^ grup) {
	_grup = grup;
}
void PassarellaParticipa::posaData(String^ data) {
	_data = data;
}
void PassarellaParticipa::posaHoraInici(String^ hora) {
	_horaInici = hora;
}
*/
void PassarellaParticipa::posaId(int id) {
	_id = id;
}


String^ PassarellaParticipa::obteEstudiant() {
	return _estudiant;
}
/*
String^ PassarellaParticipa::obteGrup() {
	return _grup;
}
String^ PassarellaParticipa::obteData() {
	return _data;
}
String^ PassarellaParticipa::obteHoraInici() {
	return _horaInici;
}
*/
int PassarellaParticipa::obteId() {
	return _id;
}


void PassarellaParticipa::insereix() {

	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	// String^ sql = "INSERT INTO participa(estudiant, grup,data,hora_inici) VALUES('" + _estudiant + "', '" + _grup + "', '" + _data + "', '" + _horaInici + "')";
	String^ sql = "INSERT INTO participa(estudiant, id_sessio) VALUES(@estudiant, @id)";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	cmd->Parameters->AddWithValue("@estudiant", _estudiant);
	cmd->Parameters->AddWithValue("@id", _id);

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
		
		conn->Close();
	}
}

void PassarellaParticipa::esborra() {
	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	// String^ sql = "DELETE FROM participa WHERE grup=@g and data=@d and hora_inici=@hi and estudiant=@e";
	String^ sql = "DELETE FROM participa WHERE id_sessio=@id and estudiant=@e";

	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

	// cmd->Parameters->AddWithValue("@g", _grup);
	// cmd->Parameters->AddWithValue("@d", _data);
	// cmd->Parameters->AddWithValue("@hi", _horaInici);
	cmd->Parameters->AddWithValue("@e", _estudiant);
	cmd->Parameters->AddWithValue("@id", _id);
	
	try {
		conn->Open();
		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		//Errors
	}
}