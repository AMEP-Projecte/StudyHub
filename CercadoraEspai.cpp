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
		conn->Open();
		dataReader = cmd->ExecuteReader();
		if (dataReader->Read()) {
			adreca = dataReader->GetString(0);
			nom = dataReader->GetString(1);
			capacitat = dataReader->GetInt32(2);
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
