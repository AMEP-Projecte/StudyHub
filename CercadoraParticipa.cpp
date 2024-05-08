#include "pch.h"
#include "CercadoraParticipa.h"

using namespace MySql::Data::MySqlClient;
using namespace System::Data;
using namespace System::Windows::Forms;

List<PassarellaParticipa^>^ CercadoraParticipa::cercaParticipaSessio(String^ nom) {
    List<PassarellaParticipa^>^ result = gcnew List<PassarellaParticipa^>();
    return result;
}



List<PassarellaParticipa^>^ CercadoraParticipa::cercaParticipaEstudiant(String^ nom) {
    List<PassarellaParticipa^>^ result = gcnew List<PassarellaParticipa^>();

    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    String^ sql = "SELECT * FROM participa WHERE estudiant = @nomestudiant";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@nomestudiant", nom);

    MySqlDataReader^ reader = nullptr;

    try {
        // Abrimos la conexión
        conn->Open();

        // Ejecutamos la consulta
        reader = cmd->ExecuteReader();

        // Leemos los resultados
        while (reader->Read()) {
            String^ grup= reader->GetString("grup");
            String^ data = reader->GetString("data");
            String^ hora = reader->GetString("hora");


            // Creamos un nuevo objeto PassarellaPartany y lo agregamos al resultado
            PassarellaParticipa^ passarella = gcnew PassarellaParticipa(nom,grup,data,hora);
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



