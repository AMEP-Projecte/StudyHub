#include "pch.h"
#include "CercadoraEspai.h"
#include "Sistema.h"
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace std;

PassarellaEspai^ CercadoraEspai::cercaEspaiAdreca(String^ Adreca) {
	String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
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
			//capacitat = Int32::Parse(dataReader->GetString(2));  // Convierte String^ a int
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

    MySqlConnection^ conn = gcnew MySqlConnection(Sistema::getInstance()->obteCadenaDeConnexio());
    String^ sql = "SELECT nom, adreca, capacitat FROM espai WHERE proveidor= @username";
    MySqlCommand^ cmd = gcnew MySqlCommand();
    cmd->Connection = conn;
    cmd->CommandText = sql;
    cmd->Parameters->AddWithValue("@username", proveidor);

    conn->Open();
    MySqlDataReader^ reader = cmd->ExecuteReader();
    while (reader->Read()) {
        String^ adreca = reader->GetString("adreca");
        String^ nom = reader->GetString("nom");
        //String^ capacitat = reader->GetString("capacitat");
        int capacitat = reader->GetInt64("capacitat");

        PassarellaEspai^ passarella = gcnew PassarellaEspai(adreca, nom, capacitat, proveidor);
        result->Add(passarella);
    }
    conn->Close();

	return result;
}

List<PassarellaEspai^>^ CercadoraEspai::totsEspai()
{
    List<PassarellaEspai^>^ result = gcnew List<PassarellaEspai^>();

    String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
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
