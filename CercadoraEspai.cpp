#include "pch.h"
#include "CercadoraEspai.h"


using namespace MySql::Data::MySqlClient;
using namespace System;

PassarellaEspai^ CercadoraEspai::cercaEspaiAdreca(String^ Adreca) {
	String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	String^ sql = String::Format("SELECT * FROM espai WHERE adreca = '{0}';", Adreca);
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	String^ adreca = "";
	String^ nom = "";
	int capacitat = 0;
	String^ proveidor = "";
	try {
		// obrim la connexio
		conn->Open();
		// executem la comanda (cmd) que s'ha creat abans del try
		dataReader = cmd->ExecuteReader();
		if (dataReader->Read()) {
			// Es llegeix la informacio per crear un objecte de tipus Professor
			// Agafarem les columnes per index, la primera es la 0
			adreca = dataReader->GetString(0);
			nom = dataReader->GetString(1);
			//capacitat = dataReader->GetString(2);
			capacitat = Int32::Parse(dataReader->GetString(2));  // Convierte String^ a int
			proveidor = dataReader->GetString(3);

		}
	}
	catch (MySqlException^ ex) {
		//MessageBox::Show(ex->Message);
	}
	PassarellaEspai^ Espai = gcnew PassarellaEspai(adreca, nom, capacitat, proveidor);
	conn->Close();
	return Espai;
}

List<PassarellaEspai^>^ CercadoraEspai::cercaEspaiProveidor(String^ proveidor) {
	List<PassarellaEspai^>^ result = gcnew List<PassarellaEspai^>();
	return result;
}