#include "pch.h"
#include "CercadoraSessio.h"
#include "Sistema.h"
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


PassarellaSessio^ CercadoraSessio::cercaHora(String^ data, String^ grup, String^ adreca) {
    PassarellaSessio^ pp = gcnew PassarellaSessio();
    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    String^ sql = "SELECT * FROM sessio WHERE Data = @data AND Hora = @hora AND Adreca = @adreca";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@data", data);
    cmd->Parameters->AddWithValue("@adreca", adreca);
    cmd->Parameters->AddWithValue("@grup", grup);

    MySqlDataReader^ dataReader;

    try {
        conn->Open();
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {
     
            String^ horaIni = dataReader->GetString(3);
            String^ horaFi = dataReader->GetString(4);
            String^ dataf = dataReader->GetDateTime("data").ToString("yyyy-MM-dd");
            int llocs = dataReader->GetInt32("llocs_lliures");

            pp = gcnew PassarellaSessio (grup, dataf, horaIni, horaFi,adreca,llocs);
        }
    }
    catch (Exception^ ex) {
        Console::WriteLine("An error occurred: " + ex->Message);
        // Log the error message or handle accordingly
    }
    finally {
        if (dataReader != nullptr) {
            dataReader->Close(); // Ensure dataReader is closed
        }
        conn->Close();
    }
    return pp;
}

PassarellaSessio^ CercadoraSessio::cercaAdreca(String^ grup, String^ data, String^ hora) {
    PassarellaSessio^ pp = gcnew PassarellaSessio();
    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    String^ sql = "SELECT * FROM sessio WHERE grup= @grup AND data = @data AND hora = @hora ";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@grup", grup);
    cmd->Parameters->AddWithValue("@data", data);
    cmd->Parameters->AddWithValue("@hora", hora);
    

    MySqlDataReader^ dataReader;

    try {
        conn->Open();
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {

            String^ adreca= dataReader->GetString(4);
            String^ horaFi = dataReader->GetString(3);
            int llocs = dataReader->GetInt32("llocs_lliures");

            pp = gcnew PassarellaSessio(grup, data, hora, horaFi, adreca, llocs);
        }
    }
    catch (Exception^ ex) {
        Console::WriteLine("An error occurred: " + ex->Message);
        // Log the error message or handle accordingly
    }
    finally {
        if (dataReader != nullptr) {
            dataReader->Close(); // Ensure dataReader is closed
        }
        conn->Close();
    }
    return pp;
}