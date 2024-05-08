#include "pch.h"
#include "CercadoraSessio.h"
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace std;
List<PassarellaSessio^>^ CercadoraSessio::cercaSessioGrup(String^ nom) {
	List<PassarellaSessio^>^ result = gcnew List<PassarellaSessio^>();
	return result;
}

List<PassarellaSessio^>^ CercadoraSessio::cercaSessioAdreca(String^ adreca) {

    List<PassarellaSessio^>^ result = gcnew List<PassarellaSessio^>();

    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    String^ sql = "SELECT * FROM sessio WHERE adreca = @adreca";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@adreca", adreca);

    MySqlDataReader^ reader = nullptr;

    try {
        // Abrimos la conexión
        conn->Open();

        // Ejecutamos la consulta
        reader = cmd->ExecuteReader();

        // Leemos los resultados
        while (reader->Read()) {
            String^ grup = reader->GetString("grup");
            String^ data = reader->GetDateTime("data").ToString("yyyy-MM-dd");
            String^ horaI = reader->GetTimeSpan("hora_inici").ToString("hh\\:mm");
            String^ horaF = reader->GetTimeSpan("hora_fi").ToString("hh\\:mm");
            int llocs_lliures = reader->GetInt32("llocs_lliures");


            // Creamos un nuevo objeto PassarellaPertany y lo agregamos al resultado
            PassarellaSessio^ passarella = gcnew PassarellaSessio(grup, data, horaI, horaF, adreca, llocs_lliures);
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