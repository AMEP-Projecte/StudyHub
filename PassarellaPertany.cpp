#include "pch.h"
#include "PassarellaPertany.h"

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

void PassarellaPertany::insereix() {
	bool totcorrecte = true;
	String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
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
