#include "pch.h"
#include "CercadoraAdmin.h"
#include "Sistema.h"
PassarellaAdmin^ CercadoraAdmin::cercaAdmin(String^ username) {
	PassarellaAdmin^ pa = nullptr;
    String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio(); // TODO-> posar variable connectionString global
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
        // Cerramos la conexi�n
        conn->Close();
    }
	return pa;
}

/*
PassarellaProveidor^ CercadoraProveidor::cercaProveidor(String^ username) {
    PassarellaProveidor^ pp = nullptr;
    String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio(); // TODO-> posar variable connectionString global
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    String^ sql = "SELECT * FROM proveidor WHERE username = '" + username + "'";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;
    try {
        conn->Open();
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {
            String^ username = dataReader->GetString(0);
            pp = gcnew PassarellaProveidor(username);
        }
    }
    catch (Exception^ ex) {
        // Manejamos el error
    }
    finally {
        // Cerramos la conexi�n
        conn->Close();
    }
    return pp;
}
*/

