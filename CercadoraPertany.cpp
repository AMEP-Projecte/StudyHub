#include "pch.h"
#include "CercadoraPertany.h"

using namespace MySql::Data::MySqlClient;
using namespace System::Data;
using namespace System::Windows::Forms;
List<PassarellaPertany^>^ CercadoraPertany::cercaParticipants(String^ nomGrup) {
    List<PassarellaPertany^>^ result = gcnew List<PassarellaPertany^>();

    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    String^ sql = "SELECT estudiant FROM pertany WHERE grup = @nomGrup";
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
            PassarellaPertany^ passarella = gcnew PassarellaPertany(estudiant, nomGrup);
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
    List<PassarellaPertany^>^ result = gcnew List<PassarellaPertany^>();

    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
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