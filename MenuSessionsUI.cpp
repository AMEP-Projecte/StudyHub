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
        String^ sql = "SELECT grup, data, adreca FROM sessio WHERE grup IN (SELECT grup FROM pertany WHERE estudiant = @username);";
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

            // Crear y configurar el TableLayoutPanel para mostrar los datos.
            TableLayoutPanel^ layoutDades = gcnew TableLayoutPanel();
            layoutDades->AutoSize = true;
            layoutDades->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
            layoutDades->ColumnCount = 3;
            layoutDades->ColumnStyles->Add(gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 33.33F));
            layoutDades->ColumnStyles->Add(gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 33.33F));
            layoutDades->ColumnStyles->Add(gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 33.33F));
            layoutDades->ForeColor = System::Drawing::Color::White;
            layoutDades->Dock = System::Windows::Forms::DockStyle::Top; // Change this line to ensure proper scroll behavior
            layoutDades->RowCount = rowsCount + 1;
            layoutDades->RowStyles->Add(gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 57));
            for (int i = 0; i < rowsCount; ++i) {
                layoutDades->RowStyles->Add(gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::AutoSize));
            }
            layoutDades->TabIndex = 8;

            // Crear y configurar las etiquetas de las columnas.
            Label^ columnaGrup = gcnew Label();
            columnaGrup->AutoSize = true;
            columnaGrup->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
            columnaGrup->Dock = System::Windows::Forms::DockStyle::Fill;
            columnaGrup->Text = L"Grup";
            columnaGrup->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

            Label^ columnaData = gcnew Label();
            columnaData->AutoSize = true;
            columnaData->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
            columnaData->Dock = System::Windows::Forms::DockStyle::Fill;
            columnaData->Text = L"Data";
            columnaData->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

            Label^ columnaDireccio = gcnew Label();
            columnaDireccio->AutoSize = true;
            columnaDireccio->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
            columnaDireccio->Dock = System::Windows::Forms::DockStyle::Fill;
            columnaDireccio->Text = L"Adreca";
            columnaDireccio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

            layoutDades->Controls->Add(columnaGrup, 0, 0);
            layoutDades->Controls->Add(columnaData, 1, 0);
            layoutDades->Controls->Add(columnaDireccio, 2, 0);

            // Añadir filas de datos al TableLayoutPanel.
            for (int i = 0; i < rowsCount; ++i) {
                DataRow^ fila = dt->Rows[i];

                String^ nomGrup = fila["grup"]->ToString();
                String^ dataSessio = fila["data"]->ToString();
                String^ direccioSessio = fila["adreca"]->ToString();

                Label^ labelGrup = gcnew Label();
                labelGrup->AutoSize = true;
                labelGrup->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
                labelGrup->Dock = System::Windows::Forms::DockStyle::Fill;
                labelGrup->Text = nomGrup;
                labelGrup->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

                Label^ labelData = gcnew Label();
                labelData->AutoSize = true;
                labelData->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
                labelData->Dock = System::Windows::Forms::DockStyle::Fill;
                labelData->Text = dataSessio;
                labelData->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

                Label^ labelDireccio = gcnew Label();
                labelDireccio->AutoSize = true;
                labelDireccio->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
                labelDireccio->Dock = System::Windows::Forms::DockStyle::Fill;
                labelDireccio->Text = direccioSessio;
                labelDireccio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

                layoutDades->Controls->Add(labelGrup, 0, i + 1);
                layoutDades->Controls->Add(labelData, 1, i + 1);
                layoutDades->Controls->Add(labelDireccio, 2, i + 1);
            }

            // Añadir el TableLayoutPanel al Panel con AutoScroll.
            scrollPanel->Controls->Add(layoutDades);
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

