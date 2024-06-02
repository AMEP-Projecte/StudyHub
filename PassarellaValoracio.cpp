#include "pch.h"
#include "PassarellaValoracio.h"
#include "Sistema.h"
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace std;

PassarellaValoracio::PassarellaValoracio() {
    _estudiant = "";
    _grup = "";
    _puntuacio = gcnew Int64(0);
    _comentari = "";
}

PassarellaValoracio::PassarellaValoracio(String^ estudiant, String^ grup, Int64^ puntuacio, String^ comentari) {
    _estudiant = estudiant;
    _grup = grup;
    _puntuacio = puntuacio;
    _comentari = comentari;
}

void PassarellaValoracio::posaValoracio(Int64^ valoracio) {
    _puntuacio = valoracio;
}

void PassarellaValoracio::posaComentari(String^ comentari) {
	_comentari = comentari;
}

Int64^ PassarellaValoracio::obteValoracio() {
	if (this==nullptr) {
		return Int64(0);
	}
	else {
		return _puntuacio;
	}
}

String^ PassarellaValoracio::obteComentari() {
	if (this == nullptr) {
		return "";
	} else {
		return _comentari;
	}
}

String^ PassarellaValoracio::obteEstudiant() {
	if (this == nullptr) {
		return "";
	}
	else {
		return _estudiant;
	}
}

String^ PassarellaValoracio::obteGrup() {
	if (this == nullptr) {
		return "";
	}
	else {
		return _grup;
	}
}

void PassarellaValoracio::insereix() {
	bool totcorrecte = true;
	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	String^ sql = "INSERT INTO valoracioGrup(estudiant, grup, puntuacio, comentari) VALUES('" + _estudiant + "', '" + _grup + "', '" + _puntuacio + "', '" +  _comentari + "')";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	try {
		// obrim la connexio
		conn->Open();
		// executem la comanda (cmd) que s'ha creat abans del try
		dataReader = cmd->ExecuteReader();
	}
	catch (MySqlException^ ex) {
		//MessageBox::Show(ex->Message);
		if (ex->Number == 1062) {
			// Código de error 1062: entrada duplicada
			MessageBox::Show("Ja has fet una valoració a aquest grup.");
		}
		totcorrecte = false;
	}
	finally {
		// si tot va be es tanca la connexio
		if (totcorrecte) {
			MessageBox::Show("Valoració Registrada.");
		}
		conn->Close();
	}
}
void PassarellaValoracio::modifica() {
	bool totcorrecte = true;
	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	String^ sql = "UPDATE valoracioGrup SET puntuacio=@puntuacio, comentari=@comentari WHERE estudiant=@estudiant AND grup=@grup";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

	// Usar parámetros para evitar la inyección SQL
	cmd->Parameters->AddWithValue("@estudiant", _estudiant);
	cmd->Parameters->AddWithValue("@grup", _grup);
	cmd->Parameters->AddWithValue("@puntuacio", _puntuacio);
	cmd->Parameters->AddWithValue("@comentari", _comentari);
	MySqlDataReader^ dataReader;
	try {
		// obrim la connexio
		conn->Open();
		// executem la comanda (cmd) que s'ha creat abans del try
		dataReader = cmd->ExecuteReader();
	}
	catch (MySqlException^ ex) {
		//MessageBox::Show(ex->Message);
		if (ex->Number == 1451) {
			MessageBox::Show("El comentari que intentes modificar no existeix.");
		}
		totcorrecte = false;
	}
	finally {
		// si tot va be es tanca la connexio
		if (totcorrecte) {
			MessageBox::Show("Modificació Registrada.");
		}
		conn->Close();
	}
}
void PassarellaValoracio::esborra() {
	bool totcorrecte = true;
	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	String^ sql = "DELETE FROM valoracioGrup WHERE estudiant=@estudiant AND grup=@grup";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

	// Usar parámetros para evitar la inyección SQL
	cmd->Parameters->AddWithValue("@estudiant", _estudiant);
	cmd->Parameters->AddWithValue("@grup", _grup);
	MySqlDataReader^ dataReader;
	try {
		// obrim la connexio
		conn->Open();
		// executem la comanda (cmd) que s'ha creat abans del try
		dataReader = cmd->ExecuteReader();
	}
	catch (MySqlException^ ex) {
		//MessageBox::Show(ex->Message);
		if (ex->Number == 1451) {
			MessageBox::Show("El comentari que intentes esborrar no existeix.");
		}
		totcorrecte = false;
	}
	finally {
		// si tot va be es tanca la connexio
		if (totcorrecte) {
			MessageBox::Show("Modificació Registrada.");
		}
		conn->Close();
	}
}