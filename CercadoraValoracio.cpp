#include "pch.h"
#include "CercadoraValoracio.h"

using namespace System;
using namespace MySql::Data::MySqlClient;

PassarellaValoracio^ CercadoraValoracio::cercaValoracio(String^ estudiant, String^ grup) {
    PassarellaValoracio^ pu = nullptr; // Inicializamos el puntero a nullptr
    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;"; // TODO-> posar variable connectionString global
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    String^ sql = "SELECT * FROM valoracioGrup WHERE estudiant = '" + estudiant + "' AND grup = '" + grup + "';";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;
    try {
        // Abrimos la conexión
        conn->Open();
        // Ejecutamos la consulta
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {
            // Creamos una instancia de PassarellaUsuari y le asignamos los valores recuperados de la base de datos
            String^ estudiant = dataReader->GetString(0);
            String^ grup = dataReader->GetString(1);
            Int64^ puntuacio = dataReader->GetInt64(2);
            String^ comentari = dataReader->GetString(3);
            pu = gcnew PassarellaValoracio(estudiant, grup, puntuacio, comentari);
        }
    }
    catch (Exception^ ex) {
        // Manejamos el error
    }
    finally {
        // Cerramos la conexión
        conn->Close();
    }
    return pu;
}

List<PassarellaValoracio^>^ CercadoraValoracio::cercaValoracioGrup(String^ grup) {
    List<PassarellaValoracio^>^ result = gcnew List<PassarellaValoracio^>();

    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    String^ sql = "SELECT * FROM valoracioGrup WHERE grup = @nomGrup";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@nomGrup", grup);

    MySqlDataReader^ reader = nullptr;

    try {
        // Abrimos la conexión
        conn->Open();

        // Ejecutamos la consulta
        reader = cmd->ExecuteReader();

        // Leemos los resultados
        while (reader->Read()) {
            String^ estudiant = reader->GetString("estudiant");
            String^ comenetari = reader->GetString("comentari");
            Int64^ puntuacio = reader->GetInt64("puntuacio");

            // Creamos un nuevo objeto PassarellaPertany y lo agregamos al resultado
            PassarellaValoracio^ passarella = gcnew PassarellaValoracio(estudiant, grup, puntuacio, comenetari);
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