#include "pch.h"
#include "CercadoraEspai.h"
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace std;
PassarellaEspai^ CercadoraEspai::cercaEspaiAdreca(String^ Adreca) {
	PassarellaEspai^ pe;
	return pe;
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
