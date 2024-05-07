#include "pch.h"
#include "PassarellaSessio.h"
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace std;
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


    void PassarellaSessio::insereix()
    {
        String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        bool totcorrecte = true;

        String^ sql = "INSERT INTO sessio (grup, data, hora_inici, hora_fi, adreca, llocs_lliures) VALUES (@grup, @data, @horaInici, @horaFi, @adreca, @llocsLliures)";
        MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
       
        // Agregar parámetros
        cmd->Parameters->AddWithValue("@grup", _grup);
        cmd->Parameters->AddWithValue("@data", _data);
        cmd->Parameters->AddWithValue("@horaInici", _horaInici);
        cmd->Parameters->AddWithValue("@horaFi", _horaFi);
        cmd->Parameters->AddWithValue("@adreca", _adreca);
        cmd->Parameters->AddWithValue("@llocsLliures", _llocsLliures);

        try {
            // Comprobar si la hora de inicio es menor que la hora de fin
            if (TimeSpan::Parse(_horaInici) >= TimeSpan::Parse(_horaFi)) {
                throw gcnew Exception("Error de check");
            }

            conn->Open();
            cmd->ExecuteNonQuery();
            MessageBox::Show("Sesión creada correctamente.");
        }
        catch (MySqlException^ ex) {
            if (ex->Number == 1062) {
                MessageBox::Show("Ya hay una sesion creada para este grupo en esta fecha.");
            }
            else {
                MessageBox::Show(ex->Message);
            }
            totcorrecte = false;
        }
        catch (Exception^ ex) {
            if (ex->Message->Contains("check") ){
                MessageBox::Show("Error de check: La hora de inicio debe ser menor que la hora de fin.");
            }
            else {
                MessageBox::Show(ex->Message);
            }
            totcorrecte = false;
        }
        finally {
            conn->Close();
        }
    }

