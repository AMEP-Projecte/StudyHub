#include "pch.h"
#include "CercadoraParticipa.h"
#include "Sistema.h"
using namespace MySql::Data::MySqlClient;
using namespace System::Data;
using namespace System::Windows::Forms;

List<PassarellaParticipa^>^ CercadoraParticipa::cercaParticipaSessio(String^ nom) {
    List<PassarellaParticipa^>^ result = gcnew List<PassarellaParticipa^>();
    return result;
}



List<PassarellaParticipa^>^ CercadoraParticipa::cercaParticipaEstudiant(String^ nom) {
    List<PassarellaParticipa^>^ result = gcnew List<PassarellaParticipa^>();

    String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
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
            // String^ grup= reader->GetString("grup");
            // String^ data = reader->GetString("data");
            // String^ hora = reader->GetString("hora");
            int id = reader->GetInt32("id_sessio");

            // Creamos un nuevo objeto PassarellaPartany y lo agregamos al resultado
            // PassarellaParticipa^ passarella = gcnew PassarellaParticipa(nom,grup,data,hora);
            PassarellaParticipa^ passarella = gcnew PassarellaParticipa(nom, id);
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


/*

PassarellaParticipa^ CercadoraParticipa::cercaParticipa(String^ data, String^ grup, String^ hora, String^ estudiant, int id) {



    String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    // Suponiendo que el nombre de la tabla y los nombres de las columnas son correctos
    // String^ sql = "SELECT * FROM participa WHERE data = @data AND grup = @grup AND estudiant = @estudiant AND hora_inici=@hora ";
    String^ sql = "SELECT * FROM participa WHERE id_sessio = @id AND estudiant = @estudiant ";

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    // cmd->Parameters->AddWithValue("@data", data);
    // cmd->Parameters->AddWithValue("@grup", grup);
    cmd->Parameters->AddWithValue("@estudiant", estudiant);
    // cmd->Parameters->AddWithValue("@hora", hora);
    cmd->Parameters->AddWithValue("@id", id);
    

    MySqlDataReader^ dataReader = nullptr;


    String^ horaIni = "";
    

    try {
        conn->Open();
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {
            // Suponiendo que las columnas se llaman "horaIni", "horaFi", "Data" y "llocs_lliures"
            horaIni = dataReader["hora_inici"]->ToString();
            data = dataReader->GetDateTime("data").ToString("yyyy-MM-dd");
        
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
    PassarellaParticipa^ pp = gcnew PassarellaParticipa(estudiant,grup, data, horaIni);
    return pp;
}
*/