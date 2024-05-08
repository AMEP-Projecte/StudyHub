#include "pch.h"
#include "EsborraSessioUI.h"
#include "PassarellaSessio.h"
#include "TxEsborrarSessio.h"
#include "Sistema.h"

using namespace StudyHub;

void EsborraSessioUI::omplir() {
	Sistema^ sist = Sistema::getInstance();
	MySqlConnection^ cn = gcnew MySqlConnection("Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;");
	DataTable^ dt = gcnew DataTable();
    DataTable^ sessions = gcnew DataTable();
	String^ sql = String::Format("SELECT * FROM grup WHERE creador = '{0}';", sist->obteEstudiant()->obteUsername());
	MySqlDataAdapter^ da = gcnew MySqlDataAdapter(sql, cn);
    da->Fill(dt);

    IEnumerator^ enumerator = dt->Rows->GetEnumerator();
    int rowIndex = 0;

    while (enumerator->MoveNext()) {
        DataRow^ row = safe_cast<DataRow^>(enumerator->Current);

        // Obtener el nombre del grupo
        String^ nomGrup = safe_cast<String^>(row["nom"]);

        // Consulta SQL para obtener las sesiones del grupo actual
        String^ sqlSesiones = String::Format("SELECT * FROM sessio WHERE grup = '{0}';", nomGrup);
        MySqlDataAdapter^ daSesiones = gcnew MySqlDataAdapter(sqlSesiones, cn);
        daSesiones->Fill(sessions);
    }
    this->dataGridView1->DataSource = sessions;
}

System::Void EsborraSessioUI::ButtonTornar_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}

System::Void EsborraSessioUI::button3_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->textBox1->Text != "") {
        Sistema^ sist = Sistema::getInstance();
        String^ sqlGrupos = String::Format("SELECT * FROM grup WHERE creador = '{0}';", sist->obteEstudiant()->obteUsername());
        bool trobat = false;
        MySqlConnection^ cn = gcnew MySqlConnection("Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;");
        MySqlCommand^ cmdGrupos = gcnew MySqlCommand(sqlGrupos, cn);
        cn->Open();
        MySqlDataReader^ readerGrupos = cmdGrupos->ExecuteReader();

        // Almacenar resultados de grupos en un ArrayList
        ArrayList^ nombresGrupos = gcnew ArrayList();

        if (readerGrupos->HasRows) {
            while (readerGrupos->Read()) {
                String^ nomGrup = readerGrupos->GetString("nom");
                nombresGrupos->Add(nomGrup); // Almacenar el nombre del grupo
            }
        }
        else {
            System::Windows::Forms::MessageBox::Show("No tens grups.");
            trobat = true;
        }

        readerGrupos->Close(); // Cerrar el DataReader de grupos

        // Trabajar con los nombres de grupos almacenados en el ArrayList
        for each (String ^ nomGrup in nombresGrupos) {
            String^ sqlSesiones = String::Format("SELECT * FROM sessio WHERE grup = '{0}' AND hora_inici = '{1}';", nomGrup, this->textBox1->Text);
            MySqlCommand^ cmdSesiones = gcnew MySqlCommand(sqlSesiones, cn);
            MySqlDataReader^ readerSesiones = cmdSesiones->ExecuteReader();

            if (readerSesiones->HasRows) {
                while (readerSesiones->Read()) {
                    String^ sessioId = readerSesiones->GetString("grup");
                    String^ data = readerSesiones->GetDateTime("data").ToString("yyyy-MM-dd");
                    String^ hi = readerSesiones->GetTimeSpan("hora_inici").ToString();
                    String^ hf = readerSesiones->GetTimeSpan("hora_fi").ToString();
                    String^ adr = readerSesiones->GetString("adreca");
                    int ll = readerSesiones->GetInt32("llocs_lliures");
                    PassarellaSessio^ esborraSessio = gcnew PassarellaSessio(sessioId, data, hi, hf, adr, ll);
                    TxEsborrarSessio^ esborra = gcnew TxEsborrarSessio(esborraSessio);
                    esborra->executar();
                    trobat = true;
                }
            }
            readerSesiones->Close(); // Cerrar el DataReader de sesiones después de usarlo
        }

        if (!trobat) {
            System::Windows::Forms::MessageBox::Show("No existeix la sessio.");
        }

        cn->Close(); // Cerrar la conexión al finalizar
        if (trobat) {
            this->textBox1->Text = "";
        }
    }
    else {
        System::Windows::Forms::MessageBox::Show("Camp buit, si us plau, introdueixi la hora d'inici de la sessió a eliminar.");
    }
    omplir();
}