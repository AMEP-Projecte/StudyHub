#include "pch.h"
#include "MenuPrincipal.h"
#include "MenuGestioProveidorAdmin.h"
#include "CrearProveidorUI.h"
#include "EsborrarProveidorUI.h"

using namespace StudyHub;

System::Void MenuGestioProveidorAdmin::crear_Click(System::Object^ sender, System::EventArgs^ e) {
	CrearProveidorUI^ consultar = gcnew CrearProveidorUI();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(consultar);
}

System::Void MenuGestioProveidorAdmin::eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
    if (usernameProveidor != "") {
        try {
            String^ aux = usernameProveidor;
            TxEsborrarProveidor^ ep = gcnew TxEsborrarProveidor(aux);
            ep->executar();
            MessageBox::Show("Prove\u00efdor esborrat correctament.");

        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
            omplirInfoProveidors();
        }
    }
    else {
        MessageBox::Show("Selecciona un prove\u00efdor a eliminar.");
    }
}

System::Void MenuGestioProveidorAdmin::MenuGestioProveidorAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
    omplirInfoProveidors();
}

System::Void MenuGestioProveidorAdmin::omplirInfoProveidors() {
    TxObteProveidorsAmbEspaisCreats^ tx = gcnew TxObteProveidorsAmbEspaisCreats();
    tx->executar();
    ConsultaProveidors^ totsProveidors = tx->obteResultat();


    int files = totsProveidors->proveidors->Count;
    if (files == 0) {
        Label^ MissatgeNoProveidors = gcnew Label();
        MissatgeNoProveidors->AutoSize = true;
        MissatgeNoProveidors->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        MissatgeNoProveidors->Dock = System::Windows::Forms::DockStyle::Fill;
        MissatgeNoProveidors->Text = L"No hi ha prove\u00efdors.";
        MissatgeNoProveidors->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

        this->tableLayoutPanel1->Controls->Add(MissatgeNoProveidors, 0, 1);
    }
    else {
        // Crear el panel contenedor principal
        Panel^ mainPanel = gcnew Panel();
        mainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
        mainPanel->Margin = System::Windows::Forms::Padding(0);
        mainPanel->Padding = System::Windows::Forms::Padding(0);

        // Crear el TableLayoutPanel para las cabeceras
        TableLayoutPanel^ headerLayout = gcnew TableLayoutPanel();
        headerLayout->AutoSize = true;
        headerLayout->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
        headerLayout->ColumnCount = 2;
        headerLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 64)));
        headerLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 36)));
        headerLayout->RowCount = 1;
        headerLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
        headerLayout->Dock = System::Windows::Forms::DockStyle::Top;
        headerLayout->Margin = System::Windows::Forms::Padding(0, 20, 0, 0);
        headerLayout->Padding = System::Windows::Forms::Padding(0);

        Label^ columnaUsername = gcnew Label();
        columnaUsername->AutoSize = true;
        columnaUsername->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold | FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        columnaUsername->Dock = System::Windows::Forms::DockStyle::Fill;
        columnaUsername->Text = L"Username";
        columnaUsername->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

        Label^ columnaNumEspais = gcnew Label();
        columnaNumEspais->AutoSize = true;
        columnaNumEspais->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold | FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        columnaNumEspais->Dock = System::Windows::Forms::DockStyle::Fill;
        columnaNumEspais->Text = L"N\u00famero d'espais";
        columnaNumEspais->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

        headerLayout->Controls->Add(columnaUsername, 0, 0);
        headerLayout->Controls->Add(columnaNumEspais, 1, 0);

        // Crear el Panel con scroll para los datos
        Panel^ scrollPanel = gcnew Panel();
        scrollPanel->AutoScroll = true;
        scrollPanel->Dock = System::Windows::Forms::DockStyle::Fill;
        // scrollPanel->Margin = System::Windows::Forms::Padding(0);
        // scrollPanel->Padding = System::Windows::Forms::Padding(0);

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
            String^ usernameProveidor = totsProveidors->proveidors[i]->obteNomUsuari();
            ConsultaEspaisDelProveidor espaisDelProveidor = totsProveidors->espais[i];
            String^ numEspais = (espaisDelProveidor.espais->Count).ToString();

            TableLayoutPanel^ layoutFila = gcnew TableLayoutPanel();
            layoutFila->AutoSize = true;
            layoutFila->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
            layoutFila->ColumnCount = 2;
            layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 60.0F)));
            layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 30.0F)));
            layoutFila->ForeColor = System::Drawing::Color::White;
            layoutFila->Dock = System::Windows::Forms::DockStyle::Top;
            layoutFila->Name = L"layoutFila";
            layoutFila->RowCount = 1;
            layoutFila->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::AutoSize)));
            layoutFila->TabIndex = 8;
            layoutFila->Margin = System::Windows::Forms::Padding(0);
            layoutFila->Padding = System::Windows::Forms::Padding(0);
            layoutFila->Click += gcnew System::EventHandler(this, &MenuGestioProveidorAdmin::fila_Click);

            Label^ labelUsername = gcnew Label();
            labelUsername->AutoSize = true;
            labelUsername->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            labelUsername->Dock = System::Windows::Forms::DockStyle::Fill;
            labelUsername->Text = usernameProveidor;
            labelUsername->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            labelUsername->Click += gcnew System::EventHandler(this, &MenuGestioProveidorAdmin::labelenfila_Click);

            Label^ labelNumEspais = gcnew Label();
            labelNumEspais->AutoSize = true;
            labelNumEspais->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            labelNumEspais->Dock = System::Windows::Forms::DockStyle::Fill;
            labelNumEspais->Text = numEspais;
            labelNumEspais->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            labelNumEspais->Click += gcnew System::EventHandler(this, &MenuGestioProveidorAdmin::labelenfila_Click);

            layoutFila->Controls->Add(labelUsername, 0, 0);
            layoutFila->Controls->Add(labelNumEspais, 1, 0);

            layoutDades->Controls->Add(layoutFila, 0, i);
        }

        scrollPanel->Controls->Add(layoutDades);    //scroll para deslizar por el panel de datos
        mainPanel->Controls->Add(scrollPanel);
        mainPanel->Controls->Add(headerLayout);
        this->tableLayoutPanel1->Controls->Add(mainPanel, 0, 1);
    }
}

System::Void MenuGestioProveidorAdmin::labelenfila_Click(Object^ sender, EventArgs^ e) {
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

System::Void MenuGestioProveidorAdmin::fila_Click(System::Object^ sender, System::EventArgs^ e) {
    TableLayoutPanel^ table = dynamic_cast<TableLayoutPanel^>(sender);
    if (table != nullptr)
    {
        // Llamar a la función para procesar los labels dentro del panel
        selecciona(table);
    }
}

System::Void MenuGestioProveidorAdmin::selecciona(TableLayoutPanel^ table) {

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
            usernameProveidor = label->Text;

            labelCount++;

            if (labelCount == 1)
                break; // Stop iterating after finding three labels
        }
    }
}
