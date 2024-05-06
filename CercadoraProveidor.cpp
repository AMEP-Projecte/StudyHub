/*#include "pch.h"
#include "CercadoraProveidor.h"


/*
PassarellaProveidor^ CercadoraProveidor::cercaProveidor(String^ username) {
	//PassarellaProveidor^ pp = gcnew PassarellaProveidor(); error
	//pp->posaNomUsuari(username);
	//return pp;
} */

#include "pch.h"
#include "CercadoraProveidor.h"

/*
PassarellaProveidor^ CercadoraProveidor::cercaProveidor(String^ username) {
	PassarellaProveidor^ pp = gcnew PassarellaProveidor();
	pp->posaNomUsuari(username);
	return pp;
}
*/

PassarellaProveidor^ CercadoraProveidor::cercaProveidor(String^ username) {
    PassarellaProveidor^ pp = nullptr;
    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;"; // TODO-> posar variable connectionString global
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

/*
PassarellaEstudiant^ CercadoraEstudiant::cercaEstudiantPerNom(String^ username) {
    PassarellaEstudiant^ pe = nullptr; // Inicializamos el puntero a nullptr
    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;"; // TODO-> posar variable connectionString global
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
            pe = gcnew PassarellaEstudiant(username, contrasenya, correu, nom, cognoms, idioma, localitat, numValoracions);

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
*/