#include "pch.h"
#include "MenuSessionsUI.h"

#include "MenuPrincipal.h"
#include "ConsultarSessionsUI.h"
#include "EditarSessio.h"
#include "EsborraSessioUI.h"
#include "ProgramarSessioEstudiUI.h"

using namespace StudyHub;

System::Void MenuSessionsUI::consultaSessions_Click(System::Object^ sender, System::EventArgs^ e) {
    ConsultarSessionsUI^ consulta = gcnew ConsultarSessionsUI();
    MenuPrincipal^ menu = MenuPrincipal::getInstance();
    menu->AbrirFormularioEnPanel(consulta);
}

System::Void MenuSessionsUI::editaSessions_Click(System::Object^ sender, System::EventArgs^ e) {
    EditarSessio^ edita = gcnew EditarSessio();
    MenuPrincipal^ menu = MenuPrincipal::getInstance();
    menu->AbrirFormularioEnPanel(edita);
}

System::Void MenuSessionsUI::esborraSessio_Click(System::Object^ sender, System::EventArgs^ e) {
    EsborraSessioUI^ esborra = gcnew EsborraSessioUI();
    MenuPrincipal^ menu = MenuPrincipal::getInstance();
    menu->AbrirFormularioEnPanel(esborra);
}

System::Void MenuSessionsUI::programaSessio_Click(System::Object^ sender, System::EventArgs^ e) {
    ProgamarSessioEstudiUI^ programa = gcnew ProgamarSessioEstudiUI();
    MenuPrincipal^ menu = MenuPrincipal::getInstance();
    menu->AbrirFormularioEnPanel(programa);
}

System::Void MenuSessionsUI::MenuSessionsUI_Load(System::Object^ sender, System::EventArgs^ e) {
    // Establecer la conexión a la base de datos MySQL.
    MySqlConnection^ cn = gcnew MySqlConnection("Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;");
    MySqlCommand^ cmd = gcnew MySqlCommand();
    MySqlDataAdapter^ da = gcnew MySqlDataAdapter();
    DataTable^ dt = gcnew DataTable();

    try {
        cn->Open();

        // Obtener el nombre de usuario del estudiante actual.
        Sistema^ sist = Sistema::getInstance();
        String^ username = sist->obteEstudiant()->obteUsername();

        // Consulta SQL para obtener las sesiones del usuario.
        String^ sql = "SELECT grup, data, adreca FROM sessio WHERE grup  IN (SELECT grup FROM pertany WHERE estudiant = @username) and grup NOT IN (SELECT grup FROM participa WHERE estudiant = @username);";
        cmd->Connection = cn;
        cmd->CommandText = sql;
        cmd->Parameters->AddWithValue("@username", username);
        da->SelectCommand = cmd;

        da->Fill(dt);

        int rowsCount = dt->Rows->Count;
        if (rowsCount == 0) {
            // Mostrar mensaje si no hay sesiones.
            Label^ noSessionsLabel = gcnew Label();
            noSessionsLabel->AutoSize = true;
            noSessionsLabel->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
            noSessionsLabel->Dock = System::Windows::Forms::DockStyle::Fill;
            noSessionsLabel->Text = L"Encara no hi ha sessions";
            noSessionsLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

            this->tableLayoutPanel1->Controls->Add(noSessionsLabel, 0, 1);
        }
        else {
            // Crear y configurar el Panel con AutoScroll habilitado.
            Panel^ scrollPanel = gcnew Panel();
            scrollPanel->Dock = System::Windows::Forms::DockStyle::Fill;
            scrollPanel->AutoScroll = true;

            // Crear y configurar el DataGridView para mostrar los datos.
            DataGridView^ dataGridView = gcnew DataGridView();
            dataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
            dataGridView->AutoSize = true;
            dataGridView->DataSource = dt;
            dataGridView->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
            dataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
            dataGridView->DefaultCellStyle->ForeColor = Color::Black;
            dataGridView->DefaultCellStyle->SelectionForeColor = Color::Black;
            // Añadir el DataGridView al Panel con AutoScroll.
            scrollPanel->Controls->Add(dataGridView);

            // Añadir el Panel con AutoScroll al TableLayoutPanel principal.
            this->tableLayoutPanel1->Controls->Add(scrollPanel, 0, 1);
        }
    }
    catch (MySqlException^ ex) {
        MessageBox::Show("Error de conexión a la base de datos: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    finally {
        if (cn->State == ConnectionState::Open) {
            cn->Close();
        }
    }
}

