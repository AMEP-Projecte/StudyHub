#include "pch.h"
#include "ValoracionsEstudiant.h"
#include "TxValoracionsEstudiant.h"
#include "TxEsborraValoracio.h"
#include "StarRatingView.h"
#include "MenuPrincipal.h"
#include "MenuGestioEstudiantsAdmin.h"

using namespace StudyHub;

System::Void ValoracionsEstudiant::omplir() {
	TxValoracionsEstudiant^ tx = gcnew TxValoracionsEstudiant(usernameEstudiant);
	tx->executar();
	ConsultaValoracions^ valoracions = tx->obteResultat();

    Panel^ scrollPanel = gcnew Panel();
    scrollPanel->AutoScroll = true;
    scrollPanel->AutoSize = true;
    scrollPanel->Margin = System::Windows::Forms::Padding(0);
    scrollPanel->Padding = System::Windows::Forms::Padding(0);

    int files = valoracions->grup->Count;
    // Crear el TableLayoutPanel para los datos
    TableLayoutPanel^ layoutDades = gcnew TableLayoutPanel();
    layoutDades->AutoSize = true;
    layoutDades->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
    layoutDades->ColumnCount = 1;
    layoutDades->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
    layoutDades->ForeColor = System::Drawing::Color::White;
    layoutDades->Name = L"layoutDades";
    layoutDades->RowCount = files; // Número de filas para los datos
    layoutDades->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
    layoutDades->TabIndex = 8;
    layoutDades->Margin = System::Windows::Forms::Padding(0);
    layoutDades->Padding = System::Windows::Forms::Padding(0);

    for (int i = 0; i < files; ++i) {
        TableLayoutPanel^ layoutFila = gcnew TableLayoutPanel();
        layoutFila->AutoSize = true;
        // layoutFila->Dock = DockStyle::Fill;
        layoutFila->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
        layoutFila->ColumnCount = 3;
        layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 110)));
        layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 190)));
        layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 185)));
        layoutFila->ForeColor = System::Drawing::Color::White;
        layoutFila->Name = L"layoutFila";
        layoutFila->RowCount = 1; 
        layoutFila->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
        layoutFila->TabIndex = 8;
        layoutFila->Margin = System::Windows::Forms::Padding(0);
        layoutFila->Padding = System::Windows::Forms::Padding(0);
        layoutFila->Click += gcnew System::EventHandler(this, &ValoracionsEstudiant::fila_Click);

        Label^ labelGrup = gcnew Label();
        labelGrup->AutoSize = true;
        labelGrup->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        labelGrup->Dock = System::Windows::Forms::DockStyle::Fill;
        labelGrup->Text = valoracions->grup[i];
        labelGrup->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        labelGrup->Click += gcnew System::EventHandler(this, &ValoracionsEstudiant::labelenfila_Click); // SELECCIONAR FILA

        Int64 puntuacio = Convert::ToInt64(valoracions->valoracio[i]);
        float floatValue = static_cast<float>(puntuacio);
        StarRatingView^ starRatingControl = gcnew StarRatingView(floatValue);
        starRatingControl->Click += gcnew System::EventHandler(this, &ValoracionsEstudiant::labelenfila_Click); // SELECCIONAR FILA

        Label^ labelComentari = gcnew Label();
        labelComentari->AutoSize = true;
        labelComentari->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        labelComentari->Dock = System::Windows::Forms::DockStyle::Fill;
        labelComentari->Text = valoracions->comentari[i];
        labelComentari->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        labelComentari->Click += gcnew System::EventHandler(this, &ValoracionsEstudiant::labelenfila_Click); // SELECCIONAR FILA

        layoutFila->Controls->Add(labelGrup, 0, 0);
        layoutFila->Controls->Add(starRatingControl, 1, 0);
        layoutFila->Controls->Add(labelComentari, 2, 0);

        layoutDades->Controls->Add(layoutFila, 0, i);
    }

    scrollPanel->Controls->Add(layoutDades);
    this->tableLayoutPanel1->Controls->Add(scrollPanel, 0, 1);
}

System::Void ValoracionsEstudiant::ValoracionsEstudiant_Load(System::Object^ sender, System::EventArgs^ e) {
    labelUsuari->Text = usernameEstudiant;
    omplir();
}

System::Void ValoracionsEstudiant::labelenfila_Click(Object^ sender, EventArgs^ e) {
    Label^ label = dynamic_cast<Label^>(sender);
    if (label != nullptr)
    {
        // Obtener el panel padre del label clicado
        TableLayoutPanel^ table = dynamic_cast<TableLayoutPanel^>(label->Parent);
        if (table != nullptr)
        {
            // Llamar a la función para procesar los labels dentro del panel
            selecciona(table);
        }
    }
}

System::Void ValoracionsEstudiant::fila_Click(System::Object^ sender, System::EventArgs^ e) {
    TableLayoutPanel^ table = dynamic_cast<TableLayoutPanel^>(sender);
    if (table != nullptr)
    {
        // Llamar a la función para procesar los labels dentro del panel
        selecciona(table);
    }
}

System::Void ValoracionsEstudiant::selecciona(TableLayoutPanel^ table) {
    int labelCount = 0;

    // Posar la resta de files com "no seleccionades"
    Control^ parent = table->Parent;
    if (parent != nullptr)
    {
        for each (Control ^ control in parent->Controls)
        {
            TableLayoutPanel^ siblingTable = dynamic_cast<TableLayoutPanel^>(control);
            if (siblingTable != nullptr && siblingTable != table)
            {
                siblingTable->BackColor = System::Drawing::Color::Transparent;
            }
        }
    }

    // Seleccionar fila
    table->BackColor = System::Drawing::Color::Black;

    for each (Control ^ control in table->Controls)
    {
        Label^ label = dynamic_cast<Label^>(control);
        if (label != nullptr)
        {
            grupValorat = label->Text;

            labelCount++;

            if (labelCount == 1)
                break; // Stop iterating after finding three labels
        }
    }
}

System::Void ValoracionsEstudiant::buttonElimina_Click(System::Object^ sender, System::EventArgs^ e) {
    if (grupValorat == "") {
        MessageBox::Show("Selecciona una valoració.");
    }
    else {
        TxEsborraValoracio^ tx = gcnew TxEsborraValoracio(usernameEstudiant, grupValorat);
        tx->executar();

        MenuPrincipal^ menu = MenuPrincipal::getInstance();
        MenuGestioEstudiantsAdmin^ gestioEstudiants = gcnew MenuGestioEstudiantsAdmin();
        menu->AbrirFormularioEnPanel(gestioEstudiants);
    }
}