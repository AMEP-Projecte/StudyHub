#include "pch.h"
#include "CercadoraUsuari.h"
#include "Sistema.h"
using namespace System::Windows::Forms;


using namespace MySql::Data::MySqlClient;
PassarellaUsuari^ CercadoraUsuari::cercaUsuari(String^ username) {
    PassarellaUsuari^ pu = nullptr; // Inicializamos el puntero a nullptr
    String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio();
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    String^ sql = "SELECT * FROM usuari WHERE username = '" + username + "'";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;
    try {
        // Abrimos la conexión
        conn->Open();
        // Ejecutamos la consulta
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {
            // Creamos una instancia de PassarellaUsuari y le asignamos los valores recuperados de la base de datos
            String^ username = dataReader->GetString(0);
            String^ pass = dataReader->GetString(1);
            String^ tipus = dataReader->GetString(2);

            String^ salt;
            if (dataReader->IsDBNull(3)) {
                salt = "";
            }
            else {
                salt = dataReader->GetString(3);
            }
          
            pu = gcnew PassarellaUsuari(username, pass, tipus, salt);
        }
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message);
        // Manejamos el error
    }
    finally {
        // Cerramos la conexión
        conn->Close();
    }
    return pu; // Devolvemos el objeto PassarellaUsuari
}