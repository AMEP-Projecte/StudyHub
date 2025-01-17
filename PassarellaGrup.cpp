#include "pch.h"
#include "PassarellaGrup.h"
#include "Sistema.h"
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace std;

//Constructors:
PassarellaGrup::PassarellaGrup() {
	_nomGrup = "";
	_tematica = "";
	_creador = "";
}

PassarellaGrup::PassarellaGrup(String^ NomGrup, String^ Tematica, String^ Creador) {
	_nomGrup = NomGrup;
	_tematica = Tematica;
	_creador = Creador;
}

PassarellaGrup::PassarellaGrup(const PassarellaGrup% P) {
	_nomGrup = P._nomGrup;
	_tematica = P._tematica;
	_creador = P._creador;
}

String^ PassarellaGrup::obteNom() {
	return _nomGrup;
}

String^ PassarellaGrup::obteTematica() {
	return _tematica;
}

String^ PassarellaGrup::obtecreador() {
	return _creador;
}

void PassarellaGrup::posaNom(String^ n) {
    _nomGrup = n;
}

void PassarellaGrup::posaTematica(String^ t) {
    _tematica = t;
}

void PassarellaGrup::posaCreador(String^ c) {
    _creador = c;
}

void PassarellaGrup::insereix() {
	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	String^ sql = String::Format("INSERT INTO grup VALUES ('{0}', '{1}', '{2}');", _nomGrup, _tematica, _creador);
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	try {
		// obrim la connexio
		conn->Open();
		// executem la comanda (cmd) que s'ha creat abans del try
		dataReader = cmd->ExecuteReader();
	}
	catch (MySqlException^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		// si tot va be es tanca la connexio
		conn->Close();
	}
}

void PassarellaGrup::modifica() {
	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);


	String^ sql = "UPDATE grup SET ";
	sql += "tematica = '" + _tematica + "' ";
	sql += "WHERE nom = '" + _nomGrup + "' ";

	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;


	try {
		// obrim la connexio
		conn->Open();
		// executem la comanda creada abans del try
		dataReader = cmd->ExecuteReader();
	}
	catch (Exception^ ex) {
		// codi per mostrar l'error en una finestra
		//MessageBox::WriteLine(ex->Message);
	}
	finally {
		// si tot va be es tanca la connexio
		conn->Close();
	}
}

void PassarellaGrup::esborra() {
	bool totcorrecte = true;
	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	String^ sql = String::Format("DELETE FROM grup WHERE nom = '{0}';", _nomGrup);
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	try {
		// obrim la connexio
		conn->Open();
		// executem la comanda (cmd) que s'ha creat abans del try
		dataReader = cmd->ExecuteReader();
	}
	catch (MySqlException^ ex) {
		MessageBox::Show(ex->Message);
		totcorrecte = false;
	}
	finally {
		// si tot va be es tanca la connexio
		if (totcorrecte) {
			MessageBox::Show("Grup Esborrat Correctament.");
		}
		conn->Close();
	}
}
