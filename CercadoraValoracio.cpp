#include "pch.h"
#include "CercadoraValoracio.h"

using namespace System;
using namespace MySql::Data::MySqlClient;

PassarellaValoracio^ CercadoraValoracio::cercaValoracio(String^ estudiant, String^ grup) {
    PassarellaValoracio^ pu = nullptr; // Inicializamos el puntero a nullptr
    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;"; // TODO-> posar variable connectionString global
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    String^ sql = "SELECT * FROM valoracioGrup WHERE estudiant = '" + estudiant + "' AND grupo = '" + grup + "';";
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
            int puntuacio = dataReader->GetInt64(2);
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
}