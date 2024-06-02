#include "pch.h"
#include "MenuPrincipal.h"
#include "MenuGestioEstudiantsAdmin.h"
#include "TxEsborraUsuari.h"
#include "TxEsborraEstudiantAdmin.h"
#include "TxObteEstudiantsGrupsEspais.h"
#include "ValoracionsEstudiant.h"


using namespace MySql::Data::MySqlClient;
using namespace StudyHub;

Control^ MenuGestioEstudiantsAdmin::GetControlFromTable(TableLayoutPanel^ table, int column, int row)
{
    for each (Control ^ control in table->Controls)
    {
        if (table->GetColumn(control) == column && table->GetRow(control) == row)
        {
            return control;
        }
    }
    return nullptr; // Retorna nullptr si no se encuentra el control
}

System::Void MenuGestioEstudiantsAdmin::omplir() {
    Control^ control = GetControlFromTable(tableLayoutPanel1, 0, 1);
    if (control != nullptr)  tableLayoutPanel1->Controls->Remove(control);

    TxObteEstudiantsGrupsEspais^ tx = gcnew TxObteEstudiantsGrupsEspais("estudiants");
    tx->executar();
    ConsultaEstudiantsGrupsEspais^ totsEstudiants = tx->obteResultat();

    
        int files = totsEstudiants->estudiants->Count;
        if (files == 0) {
            Label^ MissatgeNoEstudiants = gcnew Label();
            MissatgeNoEstudiants->AutoSize = true;
            MissatgeNoEstudiants->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            MissatgeNoEstudiants->Dock = System::Windows::Forms::DockStyle::Fill;
            MissatgeNoEstudiants->Text = L"No hi ha estudiants.";
            MissatgeNoEstudiants->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

            this->tableLayoutPanel1->Controls->Add(MissatgeNoEstudiants, 0, 1);
        }
        else {
            // Crear el Panel contenedor principal con scroll
            Panel^ scrollPanel = gcnew Panel();
            scrollPanel->AutoScroll = true;
            scrollPanel->Dock = System::Windows::Forms::DockStyle::Fill;

            // Crear el TableLayoutPanel para los datos
            TableLayoutPanel^ layoutDades = gcnew TableLayoutPanel();
            layoutDades->AutoSize = true;
            layoutDades->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
            layoutDades->ColumnCount = 1;
            //layoutDades->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 60.0F)));
            layoutDades->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::AutoSize)));
            layoutDades->ForeColor = System::Drawing::Color::White;
            layoutDades->Dock = System::Windows::Forms::DockStyle::Top;
            layoutDades->Name = L"layoutDades";
            layoutDades->RowCount = files;
            layoutDades->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::AutoSize)));
            layoutDades->TabIndex = 8;
            layoutDades->Margin = System::Windows::Forms::Padding(0);
            layoutDades->Padding = System::Windows::Forms::Padding(0);

            for (int i = 0; i < files; ++i) {
                TableLayoutPanel^ layoutFila = gcnew TableLayoutPanel();
                layoutFila->AutoSize = true;
                layoutFila->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
                layoutFila->ColumnCount = 2;
                layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 75)));
                layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
                layoutFila->ForeColor = System::Drawing::Color::White;
                layoutFila->Dock = System::Windows::Forms::DockStyle::Top;
                layoutFila->Name = L"layoutFila";
                layoutFila->RowCount = 1; // Número de filas para los datos
                layoutFila->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::AutoSize)));
                layoutFila->TabIndex = 8;
                layoutFila->Margin = System::Windows::Forms::Padding(0);
                layoutFila->Padding = System::Windows::Forms::Padding(0);
                layoutFila->Click += gcnew System::EventHandler(this, &MenuGestioEstudiantsAdmin::fila_Click);

                Label^ labelNom = gcnew Label();
                labelNom->AutoSize = true;
                labelNom->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(0)));
                labelNom->Dock = System::Windows::Forms::DockStyle::Fill;
                labelNom->Text = totsEstudiants->estudiants[i]->obteNomUsuari();
                labelNom->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
                labelNom->Click += gcnew System::EventHandler(this, &MenuGestioEstudiantsAdmin::labelenfila_Click); // SELECCIONAR FILA

                Label^ labelVal = gcnew Label();
                labelVal->AutoSize = true;
                labelVal->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(0)));
                labelVal->Dock = System::Windows::Forms::DockStyle::Fill;
                labelVal->Text = (totsEstudiants->estudiants[i]->obteNumValoracions()).ToString();;
                labelVal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
                labelVal->Click += gcnew System::EventHandler(this, &MenuGestioEstudiantsAdmin::labelenfila_Click); // SELECCIONAR FILA

                layoutFila->Controls->Add(labelNom, 0, 0);
                layoutFila->Controls->Add(labelVal, 1, 0);

                layoutDades->Controls->Add(layoutFila, 0, i);
            }

            // Añadir el layoutDades al panel con scroll
            scrollPanel->Controls->Add(layoutDades);

            // Añadir el panel con scroll al tableLayoutPanel1
            this->tableLayoutPanel1->Controls->Add(scrollPanel, 0, 1);
        }
}

System::Void MenuGestioEstudiantsAdmin::MenuGestioEstudiantsAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
    omplir();
}

System::Void MenuGestioEstudiantsAdmin::eliminaEstudiant_Click(System::Object^ sender, System::EventArgs^ e) {
    if (selectedUsername != "") {
            TxEsborraEstudiantAdmin^ EliminaE = gcnew TxEsborraEstudiantAdmin(selectedUsername);
            EliminaE->executa();
            MessageBox::Show("Estudiant esborrat correctament.");

            selectedUsername = "";
            
            omplir();
    }
    else {
        MessageBox::Show("Has de seleccionar un estudiant.");
    }
}

System::Void MenuGestioEstudiantsAdmin::labelenfila_Click(Object^ sender, EventArgs^ e)
{
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

System::Void MenuGestioEstudiantsAdmin::fila_Click(System::Object^ sender, System::EventArgs^ e) {

    TableLayoutPanel^ table = dynamic_cast<TableLayoutPanel^>(sender);
    if (table != nullptr)
    {
        // Llamar a la función para procesar los labels dentro del panel
        selecciona(table);
    }
}

System::Void MenuGestioEstudiantsAdmin::selecciona(TableLayoutPanel^ table) {
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
            if (labelCount == 0) selectedUsername = label->Text;
            else userValoracions = label->Text;

            labelCount++;

            if (labelCount == 2)
                break; // Stop iterating after finding three labels
        }
    }
}

System::Void MenuGestioEstudiantsAdmin::buttonValoracions_Click(System::Object^ sender, System::EventArgs^ e) {
    if (userValoracions == "") {
        MessageBox::Show("Has de seleccionar un estudiant.");
    }
    else if (userValoracions == "0") {
        MessageBox::Show("No hi han valoracions a veure d'aquest estudiant.");
    }
    else {
        ValoracionsEstudiant^ valoracions = gcnew ValoracionsEstudiant();
        valoracions->usernameEstudiant = selectedUsername;

        MenuPrincipal^ menu = MenuPrincipal::getInstance();
        menu->buttonGestioEstudiants->Visible = true;
        menu->AbrirFormularioEnPanel(valoracions);
    }
}

