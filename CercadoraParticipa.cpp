#include "pch.h"
#include "CercadoraParticipa.h"

using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace std;

PassarellaParticipa^ CercadoraParticipa::cercaParticipaSessio(String^ nom) {
	
String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
String^ sql = String::Format("SELECT * FROM participa WHERE grup = '{0}';", nom);
MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
MySqlDataReader^ dataReader;
String^ _estudiant = "";
String^ data = "";
String^ hora = "";
try {
	conn->Open();
	dataReader = cmd->ExecuteReader();
	if (dataReader->Read()) {
		_estudiant = dataReader->GetString(0);
		data = dataReader->GetString(2);
		hora = dataReader->GetString(3);

	}
}
catch (MySqlException^ ex) {
	//MessageBox::Show(ex->Message);
}
PassarellaParticipa^ participa = gcnew PassarellaParticipa(_estudiant, nom, data, hora);
conn->Close();
return participa;
}











List<PassarellaParticipa^>^ CercadoraParticipa::cercaParticipaEstudiant(String^ username) {
	List<PassarellaParticipa^>^ result = gcnew List<PassarellaParticipa^>();
	return result;
}