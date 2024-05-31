#include "pch.h"
#include "CercadoraPertany.h"
#include "Sistema.h"
using namespace MySql::Data::MySqlClient;
using namespace System::Data;
using namespace System::Windows::Forms;
List<PassarellaPertany^>^ CercadoraPertany::cercaParticipants(String^ nomGrup) {
    List<PassarellaPertany^>^ result = gcnew List<PassarellaPertany^>();

    String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    String^ sql = "SELECT estudiant FROM pertany WHERE grup = @nomGrup AND estat = 'Acceptat';";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@nomGrup", nomGrup);

    MySqlDataReader^ reader = nullptr;

    try {
        // Abrimos la conexión
        conn->Open();

        // Ejecutamos la consulta
        reader = cmd->ExecuteReader();

        // Leemos los resultados
        while (reader->Read()) {
            String^ estudiant = reader->GetString("estudiant");

            // Creamos un nuevo objeto PassarellaPertany y lo agregamos al resultado
            PassarellaPertany^ passarella = gcnew PassarellaPertany(estudiant, nomGrup, "Acceptat");
            result->Add(passarella);
        }
    }
    catch (Exception^ ex) {
        // Manejo de errores
        // Por ejemplo, puedes mostrar un mensaje de error
        Console::WriteLine("Error: " + ex->Message);
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

DataTable^ CercadoraPertany::obtePeticionsPendents(String^ usernameCreador) {
    // List<PassarellaPertany^>^ result = gcnew List<PassarellaPertany^>();

    String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    String^ sql = "SELECT estudiant, grup FROM pertany WHERE estat = 'Pendent' AND grup IN (SELECT nom FROM grup WHERE creador = @usernameCreador);";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@usernameCreador", usernameCreador);

    MySqlDataReader^ reader = nullptr;
    DataTable^ tabla = gcnew DataTable();

    try {
        // Abrimos la conexión
        conn->Open();

        // Ejecutamos la consulta
        MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cmd);
        data->Fill(tabla);
        
    }
    catch (Exception^ ex) {
        // Manejo de errores
        // Por ejemplo, puedes mostrar un mensaje de error
        Console::WriteLine("Error: " + ex->Message);
    }
    finally {
        // Cerramos la conexión
        conn->Close();
    }

    return tabla;

}

PassarellaPertany^ CercadoraPertany::cercaEstudiantEnGrup(String^ usernameEstudiant, String^ nomGrup) {
    PassarellaPertany^ result = nullptr;
    String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    String^ sql = "SELECT * FROM pertany WHERE estudiant = '" + usernameEstudiant + "' AND grup = '" + nomGrup + "'";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;
    try {
        // Abrimos la conexión
        conn->Open();
        // Ejecutamos la consulta
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {
            // Creem una instància de PassarellaPertany y li assignem els valors recuperats de la base de dades
            String^ estudiant = dataReader->GetString(0);
            String^ grup = dataReader->GetString(1);
            String^ estat = dataReader->GetString(2);
            result = gcnew PassarellaPertany(estudiant, grup, estat);
        }
    }
    catch (Exception^ ex) {
        // Manejamos el error
    }
    finally {
        // Cerramos la conexión
        conn->Close();
    }
    return result; // Retornem l'objecte PassarellaUsuari
}