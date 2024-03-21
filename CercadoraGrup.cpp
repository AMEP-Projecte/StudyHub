#include "pch.h"
#include "CercadoraGrup.h"

using namespace MySql::Data::MySqlClient;
using namespace System;

PassarellaGrup^ CercadoraGrup::cercaPerNomGrup(String^ NomGrup) {
	String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	String^ sql = String::Format("SELECT * FROM grup WHERE nom = '{0}';", NomGrup);
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	String^ nomGrup = "";
	String^ tematica = "";
	String^ creador = "";
	try {
		// obrim la connexio
		conn->Open();
		// executem la comanda (cmd) que s'ha creat abans del try
		dataReader = cmd->ExecuteReader();
		if (dataReader->Read()) {
			// Es llegeix la informacio per crear un objecte de tipus Professor
			// Agafarem les columnes per index, la primera es la 0
			nomGrup = dataReader->GetString(0);
			tematica = dataReader->GetString(1);
			creador = dataReader->GetString(2);
		}
	}
	catch (MySqlException^ ex) {
		//MessageBox::Show(ex->Message);
	}
	PassarellaGrup^ Grup = gcnew PassarellaGrup(nomGrup, tematica, creador);
	conn->Close();
	return Grup;
}