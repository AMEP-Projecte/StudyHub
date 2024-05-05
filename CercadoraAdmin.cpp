#include "pch.h"
#include "CercadoraAdmin.h"

PassarellaAdmin^ CercadoraAdmin::cercaAdmin(String^ username) {
	PassarellaAdmin^ pa = nullptr;
    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;"; // TODO-> posar variable connectionString global
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    String^ sql = "SELECT * FROM administrador WHERE username = '" + username + "'";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;
    try {
        conn->Open();
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {
            String^ username = dataReader->GetString(0);
            pa = gcnew PassarellaAdmin(username);
        }
    }
    catch (Exception^ ex) {
        // Manejamos el error
    }
    finally {
        // Cerramos la conexión
        conn->Close();
    }
	return pa;
}
