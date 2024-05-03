#include "pch.h"
#include "CercadoraGrup.h"
#include "Sistema.h"


using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
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

List<PassarellaGrup^>^ CercadoraGrup::cercaPerCreador(String^ username)
{



	 List<PassarellaGrup^>^ result = gcnew List<PassarellaGrup^>();

    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    String^ sql = String::Format("SELECT * FROM grup WHERE creador = '{0}';", username);
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    

    MySqlDataReader^ reader = nullptr;
    Console::WriteLine("PassarellaGrup creada: ");
    try {
        // Abrimos la conexión
        conn->Open();

        // Ejecutamos la consulta
        reader = cmd->ExecuteReader();

        // Leemos los resultados
        while (reader->Read()) {
            String^ nomGrup = safe_cast<String^>(reader["nom"]);
            String^ tematica = safe_cast<String^>(reader["tematica"]);
            String^ creador = safe_cast<String^>(reader["creador"]);
            Console::WriteLine("PassarellaGrup creada: " + nomGrup + tematica+creador);
            // Creamos un nuevo objeto PassarellaPertany y lo agregamos al resultado
            PassarellaGrup^ passarella = gcnew PassarellaGrup( nomGrup, tematica, creador);
            result->Add(passarella);
        }
       
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error: " + ex->Message);
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
	

