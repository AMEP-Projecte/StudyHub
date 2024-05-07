#include "pch.h"
#include "CercadoraEspai.h"
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace std;
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

List<PassarellaEspai^>^ CercadoraEspai::totsEspai()
{
    List<PassarellaEspai^>^ result = gcnew List<PassarellaEspai^>();

    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    String^ sql = "SELECT * FROM espai";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    

    MySqlDataReader^ reader = nullptr;

    try {
        // Abrimos la conexión
        conn->Open();

        // Ejecutamos la consulta
        reader = cmd->ExecuteReader();

        // Leemos los resultados
        while (reader->Read()) {
            String^ adreca = reader->GetString("adreca");
            String^ nom = reader->GetString("nom");
            String^ proveidor = reader->GetString("proveidor");
            int capacitat = reader->GetInt32("capacitat");
            // Creamos un nuevo objeto PassarellaPertany y lo agregamos al resultado
            PassarellaEspai^ passarella = gcnew PassarellaEspai(adreca,nom,capacitat, proveidor);
            result->Add(passarella);
        }
    }

    finally {
        // Cerramos el lector
        if (reader != nullptr) {
            reader->Close();
        }

        // Cerramos la conexión
        conn->Close();
    }

    return result;
}
