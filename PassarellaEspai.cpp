#include "pch.h"
#include "PassarellaEspai.h"

using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace std;


PassarellaEspai::PassarellaEspai() {}
PassarellaEspai::PassarellaEspai(String^ adreca, String^ nom, int capacitat, String^ proveidor) {
	_adreca = adreca;
	_nom = nom;
	_capacitat = capacitat;
	_userProveidor = proveidor;
}

PassarellaEspai::PassarellaEspai(const PassarellaEspai% P) {
	_adreca = P._adreca;
	_nom = P._nom;
	_capacitat = P._capacitat;
	_userProveidor = P._userProveidor;
}
void PassarellaEspai::posarAdreca(String^ adreca) {
	_adreca = adreca;
}
void PassarellaEspai::posarNom(String^ nom) {
	_nom = nom;
}
void PassarellaEspai::posarCapacitat(int capacitat) {
	_capacitat = capacitat;
}
void PassarellaEspai::posarProveidor(String^ proveidor) {
	_userProveidor = proveidor;
}

String^ PassarellaEspai::obteAdreca() {
	return _adreca;
}
String^ PassarellaEspai::obteNom() {
	return _nom;
}
int PassarellaEspai::obteCapacitat() {
	return _capacitat;
}
String^ PassarellaEspai::obteProveidor() {
	return _userProveidor;
}

void PassarellaEspai::insereix() {
	bool totperfe = true;
	String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	String^ sql = String::Format("INSERT INTO espai VALUES ('{0}', '{1}', '{2}', '{3}');", _adreca, _nom, _capacitat, _userProveidor);
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	try {
		conn->Open();
		dataReader = cmd->ExecuteReader();
	}
	catch (MySqlException^ ex) {
		MessageBox::Show(ex->Message);
		totperfe = false;
	}
	finally {
		if (totperfe) {
			MessageBox::Show("Nou espai creat perfectament.");
		}
		conn->Close();
	}

}

void PassarellaEspai::modifica() {
	String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	String^ sql = "UPDATE espai SET ";
	sql += "capacitat = '" + _capacitat + "' ";
	sql += "WHERE adreca = '" + _adreca + "' ";

	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	try {
		// obrim la connexio
		conn->Open();
		dataReader = cmd->ExecuteReader();
	}
	catch (Exception^ ex) {
		// codi per mostrar l'error en una finestra
		//MessageBox::WriteLine(ex->Message);
	}
	finally {
		conn->Close();
	}
}

void PassarellaEspai::esborra() {
	String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	String^ sql = "DELETE FROM espai WHERE adreca=@a";

	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

	cmd->Parameters->AddWithValue("@a", _adreca);

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
