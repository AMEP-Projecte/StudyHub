#include "pch.h"
#include "PassarellaParticipa.h"

using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace std;

PassarellaParticipa::PassarellaParticipa(){}
PassarellaParticipa::PassarellaParticipa(String^ estudiant, String^ grup, String^ data, String^ horaInici) {
	_estudiant = estudiant;
	_grup = grup;
	_data = data;
	_horaInici = horaInici;
}

void PassarellaParticipa::posaEstudiant(String^ estudiant) {
	_estudiant = estudiant;
}
void PassarellaParticipa::posaGrup(String^ grup) {
	_grup = grup;
}
void PassarellaParticipa::posaData(String^ data) {
	_data = data;
}
void PassarellaParticipa::posaHoraInici(String^ hora) {
	_horaInici = hora;
}


String^ PassarellaParticipa::obteEstudiant() {
	return _estudiant;
}
String^ PassarellaParticipa::obteGrup() {
	return _grup;
}
String^ PassarellaParticipa::obteData() {
	return _data;
}
String^ PassarellaParticipa::obteHoraInici() {
	return _horaInici;
}


void PassarellaParticipa::insereix() {

	String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	String^ sql = "INSERT INTO participa(estudiant, grup,data,hora_inici) VALUES('" + _estudiant + "', '" + _grup + "', '" + _data + "', '" + _horaInici + "')";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

	try {
		// obrim la connexio
		conn->Open();
		// executem la comanda (cmd) que s'ha creat abans del try
		cmd->ExecuteNonQuery();
	}
	catch (MySqlException^ ex) {
		MessageBox::Show("Ja estàs a la sessió");
	
	}
	finally {
		
		conn->Close();
	}
}
