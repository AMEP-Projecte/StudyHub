#include "pch.h"
#include "PassarellaSessio.h"
#include "PassarellaParticipa.h"
#include "CercadoraParticipa.h"

using namespace MySql::Data::MySqlClient;

PassarellaSessio::PassarellaSessio(){}
PassarellaSessio::PassarellaSessio(String^ grup, String^ data, String^ horaInici, String^ horaFi, String^ adreca, int llocs) {
	_grup = grup;
	_data = data;
	_horaInici = horaInici;
	_horaFi = horaFi;
	_adreca = adreca;
	_llocsLliures = llocs;
}

void PassarellaSessio::posaGrup(String^ grup) {
	_grup = grup;
}
void PassarellaSessio::posaData(String^ data) {
	_data = data;
}
void PassarellaSessio::posaHoraInici(String^ hora) {
	_horaInici = hora;
}
void PassarellaSessio::posaHoraFi(String^ hora) {
	_horaFi = hora;
}
void PassarellaSessio::posaAdreca(String^ adreca) {
	_adreca = adreca;
}
void PassarellaSessio::posaLlocs(int llocs) {
	_llocsLliures = llocs;
}

String^ PassarellaSessio::obteGrup() {
	return _grup;
}
String^ PassarellaSessio::obteData() {
	return _data;
}
String^ PassarellaSessio::obteHoraInici() {
	return _horaInici;
}
String^ PassarellaSessio::obteHoraFi() {
	return _horaFi;
}
String^ PassarellaSessio::obteAdreca() {
	return _adreca;
}
int PassarellaSessio::obteLlocsLliures() {
	return _llocsLliures;
}

void PassarellaSessio::esborra() {
	String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	String^ sql = "DELETE FROM sessio WHERE grup=@g and data=@d and hora_inici=@hi and hora_fi=@hf and adreca=@a";

	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

	cmd->Parameters->AddWithValue("@g", _grup);
	cmd->Parameters->AddWithValue("@d", _data);
	cmd->Parameters->AddWithValue("@hi", _horaInici);
	cmd->Parameters->AddWithValue("@hf", _horaFi);
	cmd->Parameters->AddWithValue("@a", _adreca);

	try {
		conn->Open();
		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		//Errors
	}
	finally {
		conn->Close();
	}
}