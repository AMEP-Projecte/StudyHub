#include "pch.h"
#include "CercadoraGrup.h"
#include "Sistema.h"


using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
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
		MessageBox::Show(ex->Message);
	}
	PassarellaGrup^ Grup = gcnew PassarellaGrup(nomGrup, tematica, creador);
	conn->Close();
	return Grup;
}

List<PassarellaGrup^>^ CercadoraGrup::cercaPerCreador(String^ nomCreador)
{
    List<PassarellaGrup^>^ result = gcnew List<PassarellaGrup^>();

    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    String^ sql = "SELECT * FROM grup WHERE creador = @nomCreador";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@nomCreador", nomCreador);

    MySqlDataReader^ reader = nullptr;

    try {
        // Abrimos la conexión
        conn->Open();

        // Ejecutamos la consulta
        reader = cmd->ExecuteReader();

        // Leemos los resultados
        while (reader->Read()) {
            String^nom = reader->GetString("nom");
            String^ tematica = reader->GetString("tematica");
            String^ creador = reader->GetString("creador");
            // Creamos un nuevo objeto PassarellaPertany y lo agregamos al resultado
            PassarellaGrup^ passarella = gcnew PassarellaGrup(nom, tematica, creador);
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

List<PassarellaGrup^>^ CercadoraGrup::totsGrups() {
    List<PassarellaGrup^>^ result = gcnew List<PassarellaGrup^>();

    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    String^ sql = "SELECT * FROM grup;";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    MySqlDataReader^ reader = nullptr;

    try {
        // Abrimos la conexión
        conn->Open();

        // Ejecutamos la consulta
        reader = cmd->ExecuteReader();

        // Leemos los resultados
        while (reader->Read()) {
            String^ nom = reader->GetString("nom");
            String^ tematica = reader->GetString("tematica");
            String^ creador = reader->GetString("creador");
            // Creamos un nuevo objeto PassarellaPertany y lo agregamos al resultado
            PassarellaGrup^ passarella = gcnew PassarellaGrup(nom, tematica, creador);
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

List<PassarellaGrup^>^ CercadoraGrup::cercaGrupsPerEstudiant(String^ estudiant) {
    List<PassarellaGrup^>^ result = gcnew List<PassarellaGrup^>();

    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    String^ sql = "SELECT * FROM grup WHERE nom IN (SELECT grup FROM pertany WHERE estudiant = @username AND estat = 'Acceptat');";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@username", estudiant);

    MySqlDataReader^ reader = nullptr;

    try {
        // Abrimos la conexión
        conn->Open();

        // Ejecutamos la consulta
        reader = cmd->ExecuteReader();

        // Leemos los resultados
        while (reader->Read()) {
            String^ nom = reader->GetString("nom");
            String^ tematica = reader->GetString("tematica");
            String^ creador = reader->GetString("creador");
            // Creamos un nuevo objeto PassarellaPertany y lo agregamos al resultado
            PassarellaGrup^ passarella = gcnew PassarellaGrup(nom, tematica, creador);
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