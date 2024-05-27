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

List<PassarellaSessio^>^ CercadoraSessio::cercaSessionsProximesDelEspai(String^ adrecaEspai) {
    List<PassarellaSessio^>^ result = gcnew List<PassarellaSessio^>();

    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    conn->Open();

    String^ sql = "SELECT * FROM sessio ";
    sql += "WHERE adreca = @adreca ";
    sql += "AND ((data > CURDATE()) OR (data = CURDATE() and hora_inici > CURTIME()));";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@adreca", adrecaEspai);

    
    // Ejecutamos la consulta
     MySqlDataReader^ reader = cmd->ExecuteReader();

    // Leemos los resultados
    while (reader->Read()) {
        String^ grup = reader->GetString("grup");
        String^ data = reader->GetDateTime("data").ToString("yyyy-MM-dd");
        String^ horaI = reader->GetTimeSpan("hora_inici").ToString("hh\\:mm");
        String^ horaF = reader->GetTimeSpan("hora_fi").ToString("hh\\:mm");
        int llocs_lliures = reader->GetInt32("llocs_lliures");
        
        // Creamos un nuevo objeto PassarellaPertany y lo agregamos al resultado
        PassarellaSessio^ passarella = gcnew PassarellaSessio(grup, data, horaI, horaF, adrecaEspai, llocs_lliures);
        result->Add(passarella);
    }
   
    conn->Close();
    
    return result;
}

PassarellaSessio^ CercadoraSessio::cercaHora(String^ data, String^ grup, String^ adreca) {
   
    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    // Suponiendo que el nombre de la tabla y los nombres de las columnas son correctos
    String^ sql = "SELECT * FROM sessio WHERE data = @data AND grup = @grup AND adreca = @adreca";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@data", data);
    cmd->Parameters->AddWithValue("@grup", grup);
    cmd->Parameters->AddWithValue("@adreca", adreca);

    MySqlDataReader^ dataReader = nullptr;


    String^ horaIni = "";
    String^ horaFi = "";
    int llocs;

    try {
        conn->Open();
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {
            // Suponiendo que las columnas se llaman "horaIni", "horaFi", "Data" y "llocs_lliures"
            horaIni = dataReader["hora_inici"]->ToString();
            horaFi = dataReader["hora_fi"]->ToString();
            data = dataReader->GetDateTime("data").ToString("yyyy-MM-dd");
            llocs = Convert::ToInt32(dataReader["llocs_lliures"]);
        }
    }
    catch (Exception^ ex) {
        Console::WriteLine("Ocurrió un error: " + ex->Message);
        // Registra el mensaje de error o manéjalo según sea necesario
    }
    finally {
        if (dataReader != nullptr) {
            dataReader->Close(); // Asegúrate de que dataReader esté cerrado
        }
        conn->Close();
    }
    PassarellaSessio^ pp = gcnew PassarellaSessio(grup, data, horaIni, horaFi, adreca, llocs);
    return pp;
}

PassarellaSessio^ CercadoraSessio::cercaAdreca(String^ data, String^ grup, String^ hora) {

    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    // Suponiendo que el nombre de la tabla y los nombres de las columnas son correctos
    String^ sql = "SELECT * FROM sessio WHERE data = @data AND grup = @grup AND hora = @hora";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@data", data);
    cmd->Parameters->AddWithValue("@grup", grup);
    cmd->Parameters->AddWithValue("@hora", hora);

    MySqlDataReader^ dataReader = nullptr;


    String^ adreca = "";
    String^ horaFi = "";
    int llocs;

    try {
        conn->Open();
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {
         
            adreca = dataReader["hora_inici"]->ToString();
            horaFi = dataReader["hora_fi"]->ToString();
            data = dataReader->GetDateTime("data").ToString("yyyy-MM-dd");
            llocs = Convert::ToInt32(dataReader["llocs_lliures"]);
        }
    }
    catch (Exception^ ex) {
        Console::WriteLine("Ocurrió un error: " + ex->Message);
        // Registra el mensaje de error o manéjalo según sea necesario
    }
    finally {
        if (dataReader != nullptr) {
            dataReader->Close(); // Asegúrate de que dataReader esté cerrado
        }
        conn->Close();
    }
    PassarellaSessio^ pp = gcnew PassarellaSessio(grup, data, hora, horaFi, adreca, llocs);
    return pp;
}

List<PassarellaSessio^>^ CercadoraSessio::cercaSessionsProximesNoConfirmadesDelEstudiant(String^ estudiant) {
    List<PassarellaSessio^>^ result = gcnew List<PassarellaSessio^>();

    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    conn->Open();

    String^ sql = "SELECT grup, data, adreca, hora_inici " +
        "FROM sessio " +
        "WHERE llocs_lliures > 0 AND " +
        "grup IN (SELECT grup FROM pertany WHERE estudiant = @username AND estat = 'Acceptat') AND " +
        "(grup, data, hora_inici) NOT IN (SELECT grup, data, hora_inici FROM participa WHERE estudiant = @username);";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@username", estudiant);


    // Ejecutamos la consulta
    MySqlDataReader^ reader = cmd->ExecuteReader();

    // Leemos los resultados
    while (reader->Read()) {
        String^ grup = reader->GetString("grup");
        String^ data = reader->GetDateTime("data").ToString("yyyy-MM-dd");
        String^ horaI = reader->GetTimeSpan("hora_inici").ToString("hh\\:mm");
        String^ horaF = reader->GetTimeSpan("hora_fi").ToString("hh\\:mm");
        int llocs_lliures = reader->GetInt32("llocs_lliures");

        // Creamos un nuevo objeto PassarellaPertany y lo agregamos al resultado
        PassarellaSessio^ passarella = gcnew PassarellaSessio(grup, data, horaI, horaF, estudiant, llocs_lliures);
        result->Add(passarella);
    }

    conn->Close();

    return result;
}

List<PassarellaSessio^>^ CercadoraSessio::cercaSessionsProximesConfirmadesDelEstudiant(String^ estudiant) {
    List<PassarellaSessio^>^ result = gcnew List<PassarellaSessio^>();

    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    conn->Open();

    String^ sql = "SELECT * FROM sessio " +
        "WHERE grup IN (SELECT grup FROM pertany WHERE estudiant = @username) AND (grup, data) IN (SELECT grup, data FROM participa WHERE estudiant = @username);";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@username", estudiant);


    // Ejecutamos la consulta
    MySqlDataReader^ reader = cmd->ExecuteReader();

    // Leemos los resultados
    while (reader->Read()) {
        String^ grup = reader->GetString("grup");
        String^ data = reader->GetDateTime("data").ToString("yyyy-MM-dd");
        String^ horaI = reader->GetTimeSpan("hora_inici").ToString("hh\\:mm");
        String^ horaF = reader->GetTimeSpan("hora_fi").ToString("hh\\:mm");
        int llocs_lliures = reader->GetInt32("llocs_lliures");

        // Creamos un nuevo objeto PassarellaPertany y lo agregamos al resultado
        PassarellaSessio^ passarella = gcnew PassarellaSessio(grup, data, horaI, horaF, estudiant, llocs_lliures);
        result->Add(passarella);
    }

    conn->Close();

    return result;
}