#include "pch.h"
#include "PassarellaProveidor.h"

using namespace System::Windows::Forms;

PassarellaProveidor::PassarellaProveidor(String^ username, String^ contrasenya, String^ tipus)
{
	_username = username;
	_contrasenya = contrasenya;
	_tipus = tipus;
}

void PassarellaProveidor::insereix() 
{
	PassarellaUsuari::insereix();
	String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	String^ sql = "INSERT INTO proveidor (username) VALUES ('" + _username + "')";

	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

	try {
		// Obrim connexio
		conn->Open();

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		//Tanquem conexio
		conn->Close();
	}
}

