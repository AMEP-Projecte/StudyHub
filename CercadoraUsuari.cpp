#include "pch.h"
#include "CercadoraUsuari.h"


using namespace MySql::Data::MySqlClient;
PassarellaUsuari^ CercadoraUsuari::cercaUsuari(String^ username) {
    PassarellaUsuari^ pu = nullptr; // Inicializamos el puntero a nullptr
    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;"; // TODO-> posar variable connectionString global
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    String^ sql = "SELECT * FROM usuari WHERE username = '" + username + "'";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;
    try {
        // Abrimos la conexi�n
        conn->Open();
        // Ejecutamos la consulta
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {
            // Creamos una instancia de PassarellaUsuari y le asignamos los valores recuperados de la base de datos
            String^ username = dataReader->GetString(0);
            String^ pass = dataReader->GetString(1);
            String^ tipus = dataReader->GetString(2);
            pu = gcnew PassarellaUsuari(username, pass, tipus);
        }
    }
    catch (Exception^ ex) {
        // Manejamos el error
    }
    finally {
        // Cerramos la conexi�n
        conn->Close();
    }
    return pu; // Devolvemos el objeto PassarellaUsuari
}