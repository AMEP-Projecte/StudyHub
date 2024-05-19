#include "pch.h"
#include "MenuGestioEspais.h"
#include "MenuPrincipal.h"
#include "CrearEspaiUI.h"
#include "ConsultarEspaiUI.h"
#include "EditarEspaiUI.h"
#include "EliminarEspaiUI.h"

using namespace StudyHub;

System::Void MenuGestioEspais::botoncrear_Click(System::Object^ sender, System::EventArgs^ e) {
	CrearEspaiUI^ Crear = gcnew CrearEspaiUI();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirFormularioEnPanel(Crear);
}

System::Void MenuGestioEspais::botonconsultar_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultarEspaiUI^ Crear = gcnew ConsultarEspaiUI();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirFormularioEnPanel(Crear);
}

System::Void MenuGestioEspais::botoneditar_Click(System::Object^ sender, System::EventArgs^ e) {
	EditarEspaiUI^ Crear = gcnew EditarEspaiUI();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirFormularioEnPanel(Crear);
}
System::Void MenuGestioEspais::botoneliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	EliminarEspai^ Crear = gcnew EliminarEspai();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirFormularioEnPanel(Crear);
}

System::Void MenuGestioEspais::MenuGestioEspais_Load(System::Object^ sender, System::EventArgs^ e){

        // Establecer la conexión a la base de datos MySQL.
        MySqlConnection^ cn = gcnew MySqlConnection("Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;");
        MySqlCommand^ cmd = gcnew MySqlCommand();
        MySqlDataAdapter^ da = gcnew MySqlDataAdapter();
        DataTable^ dt = gcnew DataTable();

        try {
            cn->Open();

            // Obtener el nombre de usuario del estudiante actual.
            Sistema^ sist = Sistema::getInstance();
            String^ username = sist->obteProveidor()->obteNomUsuari();

            String^ sql = "SELECT nom, adreca, capacitat FROM espai WHERE proveidor = @username;";
           
            cmd->Connection = cn;
            cmd->CommandText = sql;
            cmd->Parameters->AddWithValue("@username", username);
            da->SelectCommand = cmd;

            da->Fill(dt);

            int rowsCount = dt->Rows->Count;
            if (rowsCount == 0) {
                // Mostrar mensaje si no hay sesiones.
                Label^ noEspais = gcnew Label();
                noEspais->AutoSize = true;
                noEspais->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
                noEspais->Dock = System::Windows::Forms::DockStyle::Fill;
                noEspais->Text = L"Encara tens cap espai";
                noEspais->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

                this->tableLayoutPanel1->Controls->Add(noEspais, 0, 1);
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
                Label^ columnaEspai = gcnew Label();
                columnaEspai->AutoSize = true;
                columnaEspai->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
                columnaEspai->Dock = System::Windows::Forms::DockStyle::Fill;
                columnaEspai->Text = L"Espai";
                columnaEspai->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

                Label^ columnaAdreca = gcnew Label();
                columnaAdreca->AutoSize = true;
                columnaAdreca->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
                columnaAdreca->Dock = System::Windows::Forms::DockStyle::Fill;
                columnaAdreca->Text = L"Adreca";
                columnaAdreca->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

                Label^ columnaCapacitat = gcnew Label();
                columnaCapacitat->AutoSize = true;
                columnaCapacitat->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
                columnaCapacitat->Dock = System::Windows::Forms::DockStyle::Fill;
                columnaCapacitat->Text = L"Capacitat";
                columnaCapacitat->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

                layoutDades->Controls->Add(columnaEspai, 0, 0);
                layoutDades->Controls->Add(columnaAdreca, 1, 0);
                layoutDades->Controls->Add(columnaCapacitat, 2, 0);

                // Añadir filas de datos al TableLayoutPanel.
                for (int i = 0; i < rowsCount; ++i) {
                    DataRow^ fila = dt->Rows[i];

                    String^ espai = fila["nom"]->ToString();
                    String^ adrecaSessio = fila["adreca"]->ToString();
                    String^ capacitatSessio = fila["capacitat"]->ToString();

                    Label^ labelEspai = gcnew Label();
                    labelEspai->AutoSize = true;
                    labelEspai->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
                    labelEspai->Dock = System::Windows::Forms::DockStyle::Fill;
                    labelEspai->Text = espai;
                    labelEspai->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

                    Label^ labelAdreca = gcnew Label();
                    labelAdreca->AutoSize = true;
                    labelAdreca->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
                    labelAdreca->Dock = System::Windows::Forms::DockStyle::Fill;
                    labelAdreca->Text = adrecaSessio;
                    labelAdreca->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

                    Label^ labelCapacitat = gcnew Label();
                    labelCapacitat->AutoSize = true;
                    labelCapacitat->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
                    labelCapacitat->Dock = System::Windows::Forms::DockStyle::Fill;
                    labelCapacitat->Text = capacitatSessio;
                    labelCapacitat->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

                    layoutDades->Controls->Add(labelEspai, 0, i + 1);
                    layoutDades->Controls->Add(labelAdreca, 1, i + 1);
                    layoutDades->Controls->Add(labelCapacitat, 2, i + 1);
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


