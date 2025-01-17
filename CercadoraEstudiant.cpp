#include "pch.h"
#include "CercadoraEstudiant.h"
#include "CercadoraUsuari.h"
#include "Sistema.h"
using namespace System::Windows::Forms;

PassarellaEstudiant^ CercadoraEstudiant::cercaEstudiantPerNom(String^ username) {
    PassarellaEstudiant^ pe = nullptr; // Inicializamos el puntero a nullptr
    String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio(); // TODO-> posar variable connectionString global
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    String^ sql = "SELECT * FROM estudiant WHERE username = '" + username + "'";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;
    try {
        // Abrimos la conexi�n
        conn->Open();
        // Ejecutamos la consulta
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {
            // Creamos una instancia de PassarellaEstudiant y le asignamos los valores recuperados de la base de datos
            String^ username = dataReader->GetString(0);
            String^ correu = dataReader->GetString(1);
            String^ nom = dataReader->GetString(2);
            String^ cognoms = dataReader->GetString(3);
            String^ idioma = dataReader->GetString(4);
            String^ localitat = dataReader->GetString(5);
            int numValoracions = dataReader->GetInt32(6);
            CercadoraUsuari cu;
            String^ contrasenya = cu.cercaUsuari(username)->obteContrasenya();
            String^ salt = cu.cercaUsuari(username)->obteSalt();
            pe = gcnew PassarellaEstudiant(username,contrasenya, salt, correu, nom, cognoms, idioma, localitat, numValoracions);
            
        }
    }
    catch (Exception^ ex) {
        // Manejamos el error
    }
    finally {
        // Cerramos la conexi�n
        conn->Close();
    }
    return pe; // Devolvemos el objeto PassarellaEstudiant
}
PassarellaEstudiant^ CercadoraEstudiant::cercaEstudiantPerCorreu(String^ correu) {
    PassarellaEstudiant^ pe = nullptr; // Inicializamos el puntero a nullptr
    String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio(); // TODO-> posar variable connectionString global
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    String^ sql = "SELECT * FROM estudiant WHERE correu_electronic = '" + correu + "'";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;
    try {
        // Abrimos la conexi�n
        conn->Open();
        // Ejecutamos la consulta
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {
            // Creamos una instancia de PassarellaEstudiant y le asignamos los valores recuperados de la base de datos
            String^ username = dataReader->GetString(0);
            String^ correu = dataReader->GetString(1);
            String^ nom = dataReader->GetString(2);
            String^ cognoms = dataReader->GetString(3);
            String^ idioma = dataReader->GetString(4);
            String^ localitat = dataReader->GetString(5);
            int numValoracions = dataReader->GetInt32(6);
            CercadoraUsuari cu;
            String^ contrasenya = cu.cercaUsuari(username)->obteContrasenya();
            String^ salt = cu.cercaUsuari(username)->obteSalt();
            pe = gcnew PassarellaEstudiant(username, contrasenya, salt, correu, nom, cognoms, idioma, localitat, numValoracions);

        }
    }
    catch (Exception^ ex) {
        // Manejamos el error
    }
    finally {
        // Cerramos la conexi�n
        conn->Close();
    }
    return pe; // Devolvemos el objeto PassarellaEstudiant
}

List<PassarellaEstudiant^>^ CercadoraEstudiant::totsEstudiants() {

    String^ connectionString = Sistema::getInstance()->obteCadenaDeConnexio(); // TODO-> posar variable connectionString global
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    String^ sql = "SELECT * FROM estudiant";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader = nullptr;

    List<PassarellaEstudiant^>^ result = gcnew List<PassarellaEstudiant^>();
    try {
        // Abrimos la conexi�n
        conn->Open();
        // Ejecutamos la consulta
        dataReader = cmd->ExecuteReader();
        while (dataReader->Read()) {
            // Creamos una instancia de PassarellaEstudiant y le asignamos los valores recuperados de la base de datos
            String^ username = dataReader->GetString("username");
            String^ correu = dataReader->GetString("correu_electronic");
            String^ nom = dataReader->GetString("nom");
            String^ cognoms = dataReader->GetString("cognoms");
            String^ idioma = dataReader->GetString("idioma");
            String^ localitat = dataReader->GetString("localitat");
            int numValoracions = dataReader->GetInt32("numValoracions");
            CercadoraUsuari cu;
            String^ contrasenya = cu.cercaUsuari(username)->obteContrasenya();
            PassarellaEstudiant^ pe = gcnew PassarellaEstudiant(username, contrasenya, correu, nom, cognoms, idioma, localitat, numValoracions);

            result->Add(pe);
        }
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message);
    }
    finally {
        // Cerramos la conexi�n
        conn->Close();
    }

    return result; // Devolvemos el objeto PassarellaEstudiant
}