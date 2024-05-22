#include "pch.h"
#include "CercadoraPertany.h"

using namespace MySql::Data::MySqlClient;
using namespace System::Data;
using namespace System::Windows::Forms;
List<PassarellaPertany^>^ CercadoraPertany::cercaParticipants(String^ nomGrup) {
    List<PassarellaPertany^>^ result = gcnew List<PassarellaPertany^>();

    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    String^ sql = "SELECT estudiant FROM pertany WHERE grup = @nomGrup and estat = 'Acceptat'";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@nomGrup", nomGrup);

    MySqlDataReader^ reader = nullptr;

    try {
        // Abrimos la conexi�n
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

        // Cerramos la conexi�n
        conn->Close();
    }

    return result;
}

PassarellaPertany^ CercadoraPertany::cercaEstudiantEnGrup(String^ usernameEstudiant, String^ nomGrup) {
    PassarellaPertany^ result = nullptr;
    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    String^ sql = "SELECT * FROM pertany WHERE estudiant = '" + usernameEstudiant + "' AND grup = '" + nomGrup + "'";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;
    try {
        // Abrimos la conexi�n
        conn->Open();
        // Ejecutamos la consulta
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {
            // Creem una inst�ncia de PassarellaPertany y li assignem els valors recuperats de la base de dades
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
        // Cerramos la conexi�n
        conn->Close();
    }
    return result; // Retornem l'objecte PassarellaUsuari
}