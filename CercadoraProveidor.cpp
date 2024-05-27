
#include "pch.h"
#include "CercadoraProveidor.h"
#include "CercadoraUsuari.h"
using namespace System::Windows::Forms;

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
            CercadoraUsuari cu;
            String^ contrasenya = cu.cercaUsuari(username)->obteContrasenya();
            String^ salt = cu.cercaUsuari(username)->obteSalt();

            pp = gcnew PassarellaProveidor(username,contrasenya, salt);
        }
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message);
    }
    finally {
        // Cerramos la conexi�n
        conn->Close();
    }
    return pp;
}
