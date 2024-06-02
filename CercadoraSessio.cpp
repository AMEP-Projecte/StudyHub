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

    String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
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
            String^ id = reader["id"]->ToString();
            String^ grup = reader->GetString("grup");
            String^ data = reader->GetDateTime("data").ToString("yyyy-MM-dd");
            String^ horaI = reader->GetTimeSpan("hora_inici").ToString("hh\\:mm");
            String^ horaF = reader->GetTimeSpan("hora_fi").ToString("hh\\:mm");
            int llocs_lliures = reader->GetInt32("llocs_lliures");


            // Creamos un nuevo objeto PassarellaPertany y lo agregamos al resultado
            PassarellaSessio^ passarella = gcnew PassarellaSessio(id, grup, data, horaI, horaF, adreca, llocs_lliures);
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

    String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
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
        String^ id = reader->GetString("id");
        String^ grup = reader->GetString("grup");
        String^ data = reader->GetDateTime("data").ToString("yyyy-MM-dd");
        String^ horaI = reader->GetTimeSpan("hora_inici").ToString("hh\\:mm");
        String^ horaF = reader->GetTimeSpan("hora_fi").ToString("hh\\:mm");
        int llocs_lliures = reader->GetInt32("llocs_lliures");
        
        // Creamos un nuevo objeto PassarellaPertany y lo agregamos al resultado
        PassarellaSessio^ passarella = gcnew PassarellaSessio(id, grup, data, horaI, horaF, adrecaEspai, llocs_lliures);
        result->Add(passarella);
    }
   
    conn->Close();
    
    return result;
}

PassarellaSessio^ CercadoraSessio::cercaHora(String^ data, String^ grup, String^ adreca) {
   
    String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
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
    String^ id;

    try {
        conn->Open();
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {
            id = dataReader["id"]->ToString();
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
    PassarellaSessio^ pp = gcnew PassarellaSessio(id, grup, data, horaIni, horaFi, adreca, llocs);
    return pp;
}

PassarellaSessio^ CercadoraSessio::cercaAdreca(String^ data, String^ grup, String^ hora) {

    String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    // Suponiendo que el nombre de la tabla y los nombres de las columnas son correctos
    String^ sql = "SELECT * FROM sessio WHERE data = @data AND grup = @grup AND hora_inici = @hora";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@data", data);
    cmd->Parameters->AddWithValue("@grup", grup);
    cmd->Parameters->AddWithValue("@hora", hora);

    // String^ sql2 = "SELECT * FROM sessio ";
    // sql2 += "WHERE (grup = '" + grup + "') ";
    // sql2 += "and (data = '" + data + "') ";
    // sql2 += "and (hora_inici = '" + hora + "');";
    // MySqlCommand^ cmd2 = gcnew MySqlCommand(sql2, conn);

    // MySqlDataReader^ dataReader = nullptr;

    PassarellaSessio^ pp = nullptr;

    // String^ adreca = "";
    // String^ horaFi = "";
    // int llocs;
    // String^ id = "";

    conn->Open();
    MySqlDataReader^ dataReader = cmd->ExecuteReader();

    if (dataReader->Read()) {
        String^ id = dataReader["id"]->ToString();
        String^ horaFi = dataReader["hora_fi"]->ToString();
        // data = dataReader->GetDateTime("data").ToString("yyyy-MM-dd");
        String^ adreca = dataReader["adreca"]->ToString();
        int llocs = Convert::ToInt32(dataReader["llocs_lliures"]);
        pp = gcnew PassarellaSessio(id, grup, data, hora, horaFi, adreca, llocs);
    }
    
    conn->Close();

    /*
    try {
        conn->Open();
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {
            //String^ getIdQuery = "SELECT SCOPE_IDENTITY()";
            //MySqlCommand^ getIdCommand = gcnew MySqlCommand(getIdQuery, conn);
            //id = Convert::ToInt32(getIdCommand->ExecuteScalar());
            //id = Convert::ToInt32(dataReader[0]);
            // id = Convert::ToInt64(dataReader[0]);
            // id = Convert::ToInt32(dataReader["id"]);
            String^ id = dataReader["id"]->ToString();
            String^ horaFi = dataReader["hora_fi"]->ToString();
            // data = dataReader->GetDateTime("data").ToString("yyyy-MM-dd");
            String^ adreca = dataReader["adreca"]->ToString();
            int llocs = Convert::ToInt32(dataReader["llocs_lliures"]);
            pp = gcnew PassarellaSessio(id, grup, data, hora, horaFi, adreca, llocs);
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
    */
    // PassarellaSessio^ pp = gcnew PassarellaSessio(id, grup, data, hora, horaFi, adreca, llocs);
    return pp;
}

List<PassarellaSessio^>^ CercadoraSessio::cercaSessionsProximesNoConfirmadesDelEstudiant(String^ estudiant) {
    List<PassarellaSessio^>^ result = gcnew List<PassarellaSessio^>();

    String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    conn->Open();

    String^ sql = "SELECT * " +
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
        // int id = reader->GetInt32("id");
        String^ id = reader["id"]->ToString();
        String^ grup = reader->GetString("grup");
        String^ data = reader->GetDateTime("data").ToString("yyyy-MM-dd");
        String^ horaI = reader->GetTimeSpan("hora_inici").ToString("hh\\:mm");
        String^ horaF = reader->GetTimeSpan("hora_fi").ToString("hh\\:mm");
        String^ adreca = reader["adreca"]->ToString();
        int llocs_lliures = reader->GetInt32("llocs_lliures");

        // Creamos un nuevo objeto PassarellaPertany y lo agregamos al resultado
        PassarellaSessio^ passarella = gcnew PassarellaSessio(id, grup, data, horaI, horaF, adreca, llocs_lliures);
        result->Add(passarella);
    }

    conn->Close();

    return result;
}

List<PassarellaSessio^>^ CercadoraSessio::cercaSessionsProximesConfirmadesDelEstudiant(String^ estudiant) {
    List<PassarellaSessio^>^ result = gcnew List<PassarellaSessio^>();

    String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
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
        String^ id = reader["id"]->ToString();
        // int id = reader->GetInt32("id");
        String^ grup = reader->GetString("grup");
        String^ data = reader->GetDateTime("data").ToString("yyyy-MM-dd");
        String^ horaI = reader->GetTimeSpan("hora_inici").ToString("hh\\:mm");
        String^ horaF = reader->GetTimeSpan("hora_fi").ToString("hh\\:mm");
        String^ adreca = reader["adreca"]->ToString();
        int llocs_lliures = reader->GetInt32("llocs_lliures");

        // Creamos un nuevo objeto PassarellaPertany y lo agregamos al resultado
        PassarellaSessio^ passarella = gcnew PassarellaSessio(id, grup, data, horaI, horaF, adreca, llocs_lliures);
        result->Add(passarella);
    }

    conn->Close();

    return result;
}