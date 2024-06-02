#include "pch.h"
#include "PassarellaSessio.h"
#include "Sistema.h"

using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace std;

PassarellaSessio::PassarellaSessio(){}
PassarellaSessio::PassarellaSessio(String^ id, String^ grup, String^ data, String^ horaInici, String^ horaFi, String^ adreca, int llocs) {
	_id = id;
	_grup = grup;
	_data = data;
	_horaInici = horaInici;
	_horaFi = horaFi;
	_adreca = adreca;
	_llocsLliures = llocs;
}

void PassarellaSessio::posaGrup(String^ grup) {
	_grup = grup;
}
void PassarellaSessio::posaData(String^ data) {
	_data = data;
}
void PassarellaSessio::posaHoraInici(String^ hora) {
	_horaInici = hora;
}
void PassarellaSessio::posaHoraFi(String^ hora) {
	_horaFi = hora;
}
void PassarellaSessio::posaAdreca(String^ adreca) {
	_adreca = adreca;
}
void PassarellaSessio::posaLlocs(int llocs) {
	_llocsLliures = llocs;
}


String^ PassarellaSessio::obteGrup() {
	return _grup;
}
String^ PassarellaSessio::obteData() {
	return _data;
}
String^ PassarellaSessio::obteHoraInici() {
	return _horaInici;
}
String^ PassarellaSessio::obteHoraFi() {
	return _horaFi;
}
String^ PassarellaSessio::obteAdreca() {
	return _adreca;
}
int PassarellaSessio::obteLlocsLliures() {
    return _llocsLliures;
}
String^ PassarellaSessio::obteId() {
	return _id;
}

void PassarellaSessio::insereix()
    {
        String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        bool totcorrecte = true;

        String^ sql = "INSERT INTO sessio (id, grup, data, hora_inici, hora_fi, adreca, llocs_lliures) VALUES (NULL, @grup, @data, @horaInici, @horaFi, @adreca, @llocsLliures)";
        MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
       
        // Agregar parámetros
        cmd->Parameters->AddWithValue("@grup", _grup);
        cmd->Parameters->AddWithValue("@data", _data);
        cmd->Parameters->AddWithValue("@horaInici", _horaInici);
        cmd->Parameters->AddWithValue("@horaFi", _horaFi);
        cmd->Parameters->AddWithValue("@adreca", _adreca);
        cmd->Parameters->AddWithValue("@llocsLliures", _llocsLliures);

        try {
            // Comprobar si la hora de inicio es menor que la hora de fin
            if (TimeSpan::Parse(_horaInici) >= TimeSpan::Parse(_horaFi)) {
                throw gcnew Exception("Error de check");
            }

            conn->Open();
            cmd->ExecuteNonQuery();
            MessageBox::Show("Sessi\u00F3 creada correctament.");
        }
        catch (MySqlException^ ex) {
            if (ex->Number == 1062) {
                MessageBox::Show("Ja hi ha una sessi\u00F3 creada per aquest grup en aquesta data.");
            }
            else {
                MessageBox::Show(ex->Message);
            }
            totcorrecte = false;
        }
        catch (Exception^ ex) {
            if (ex->Message->Contains("check") ){
                MessageBox::Show("Error de check: L'hora d'inici ha de ser menor que l'hora de fi.");
            }
            else {
                MessageBox::Show(ex->Message);
            }
            totcorrecte = false;
        }
        finally {
            conn->Close();
        }
    }

void PassarellaSessio::modifica() {
	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	String^ sql = "UPDATE sessio SET ";
	sql += "hora_fi = '" + _horaFi + "' ";
	sql += "WHERE (grup = '" + _grup + "') ";
	sql += "and (data = '" + _data + "') ";
	sql += "and (hora_inici = '" + _horaInici + "');";


	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;

	try {
		conn->Open();
		dataReader = cmd->ExecuteReader();
	}
	catch (Exception^ ex) {
		// Errors
	}
	finally {
		conn->Close();
	}
}

void PassarellaSessio::modificaLlocs() {
	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	String^ sql = "UPDATE sessio SET ";
	sql += "llocs_lliures = '" + _llocsLliures + "' ";
	sql += "WHERE (grup = '" + _grup + "') ";
	sql += "and (data = '" + _data + "') ";
	sql += "and (hora_inici = '" + _horaInici + "');";


	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;

	try {
		conn->Open();
		dataReader = cmd->ExecuteReader();
	}
	catch (Exception^ ex) {
		// Errors
	}
	finally {
		conn->Close();
	}
}

void PassarellaSessio::esborra() {
	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	String^ sql = "DELETE FROM sessio WHERE grup=@g and data=@d and hora_inici=@hi ";

	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

	cmd->Parameters->AddWithValue("@g", _grup);
	cmd->Parameters->AddWithValue("@d", _data);
	cmd->Parameters->AddWithValue("@hi", _horaInici);
	

	try {
		conn->Open();
		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		//Errors
	}
	finally {
		conn->Close();
	}
}