#include "pch.h"
#include "MenuGestioEstudiant.h"
#include "ConsultarEstudiantUI.h"
#include "EliminarPerfilEstudiantUI.h"
#include "MenuPrincipal.h"
#include "TancarSessio.h"
#include "EditarEstudiant.h"
#include "TxValoracionsEStudiant.h"
#include "StarRatingView.h"

using namespace StudyHub;

System::Void MenuGestioEstudiant::tornar_Click(System::Object^ sender, System::EventArgs^ e) {
	// Crear una nova instancia del nou formulari
	TancarSessio^ tancarSes = gcnew TancarSessio();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(tancarSes);
}

System::Void MenuGestioEstudiant::editar_Click(System::Object^ sender, System::EventArgs^ e) {
	EditarEstudiant^ editar = gcnew EditarEstudiant();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(editar);
}

System::Void MenuGestioEstudiant::eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	StudyHub::EliminarPerfilEstudiantUI^ eliminar = gcnew StudyHub::EliminarPerfilEstudiantUI();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(eliminar);
	Sistema^ sistema = Sistema::getInstance();
}

System::Void MenuGestioEstudiant::consulta_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultarEstudiantUI^ consultar = gcnew ConsultarEstudiantUI();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(consultar);
}

System::Void MenuGestioEstudiant::MenuGestioEstudiant_Load(System::Object^ sender, System::EventArgs^ e) {
    MenuPrincipal^ menu = MenuPrincipal::getInstance();
    menu->ButtonMenuEstudiant->Visible = false;
    menu->ButtonMenuGrups->Visible = true;
    menu->buttonMenuSessions->Visible = true;

    Sistema^ sistema = Sistema::getInstance();

    TxValoracionsEstudiant^ tx = gcnew TxValoracionsEstudiant(sistema->obteUsername());
    tx->executar();
    ConsultaValoracions^ valoracions = tx->obteResultat();

        int rowsCount = valoracions->grup->Count;
        if (rowsCount == 0) {
            // Mostrar mensaje si no hay sesiones.
            Label^ noSessionsLabel = gcnew Label();
            noSessionsLabel->AutoSize = true;
            noSessionsLabel->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
            noSessionsLabel->Dock = System::Windows::Forms::DockStyle::Fill;
            noSessionsLabel->Text = L"Encara no has fet valoracions";
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
            layoutDades->Dock = System::Windows::Forms::DockStyle::Top; // Ensure proper scroll behavior
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

            Label^ columnaPuntuacio = gcnew Label();
            columnaPuntuacio->AutoSize = true;
            columnaPuntuacio->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
            columnaPuntuacio->Dock = System::Windows::Forms::DockStyle::Fill;
            columnaPuntuacio->Text = L"Puntuació";
            columnaPuntuacio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

            Label^ columnaComentari = gcnew Label();
            columnaComentari->AutoSize = true;
            columnaComentari->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
            columnaComentari->Dock = System::Windows::Forms::DockStyle::Fill;
            columnaComentari->Text = L"Comentari";
            columnaComentari->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

            layoutDades->Controls->Add(columnaGrup, 0, 0);
            layoutDades->Controls->Add(columnaPuntuacio, 1, 0);
            layoutDades->Controls->Add(columnaComentari, 2, 0);

            // Añadir filas de datos al TableLayoutPanel.
            for (int i = 0; i < rowsCount; ++i) {
                Label^ labelGrup = gcnew Label();
                labelGrup->AutoSize = true;
                labelGrup->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
                labelGrup->Dock = System::Windows::Forms::DockStyle::Fill;
                labelGrup->Text = valoracions->grup[i];
                labelGrup->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

                Int64 puntuacio = Convert::ToInt64(valoracions->valoracio[i]);
                float floatValue = static_cast<float>(puntuacio);
                StarRatingView^ starRatingControl = gcnew StarRatingView(floatValue);

                Label^ labelComentari = gcnew Label();
                labelComentari->AutoSize = true;
                labelComentari->Font = gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
                labelComentari->Dock = System::Windows::Forms::DockStyle::Fill;
                labelComentari->Text = valoracions->comentari[i];
                labelComentari->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

                layoutDades->Controls->Add(labelGrup, 0, i + 1);
                layoutDades->Controls->Add(starRatingControl, 1, i + 1);
                layoutDades->Controls->Add(labelComentari, 2, i + 1);
            }

            // Añadir el TableLayoutPanel al Panel con AutoScroll.
            scrollPanel->Controls->Add(layoutDades);
            // Añadir el Panel con AutoScroll al TableLayoutPanel principal.
            this->tableLayoutPanel1->Controls->Add(scrollPanel, 0, 1);
        }
}
