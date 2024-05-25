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
	EsborrarProveidorUI^ editar = gcnew EsborrarProveidorUI();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(editar);
}

System::Void MenuGestioProveidorAdmin::MenuGestioProveidorAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
    MySqlConnection^ cn = gcnew MySqlConnection("Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;");

    DataTable^ dt = gcnew DataTable();

    String^ sql = "SELECT p.username AS Proveedor, ";
    sql += "COUNT(e.proveidor) AS NumeroEspacios ";
    sql += "FROM proveidor p ";
    sql += "LEFT JOIN espai e ON p.username = e.proveidor ";
    sql += "GROUP BY p.username ";
    sql += "ORDER BY p.username;";

    MySqlDataAdapter^ da;
    try {
        da = gcnew MySqlDataAdapter(sql, cn);
    }
    catch(Exception^ e) {
        MessageBox::Show(e->Message);
    }
    
    da->Fill(dt);

    int files = dt->Rows->Count;
    if (files == 0) {
        Label^ MissatgeNoProveidors = gcnew Label();
        MissatgeNoProveidors->AutoSize = true;
        MissatgeNoProveidors->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        MissatgeNoProveidors->Dock = System::Windows::Forms::DockStyle::Fill;
        MissatgeNoProveidors->Text = L"No hi ha proveïdors.";
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
        headerLayout->Margin = System::Windows::Forms::Padding(0, 20, 0, 0); // A�adir margen superior
        headerLayout->Padding = System::Windows::Forms::Padding(0);

        Label^ columnaUsername = gcnew Label();
        columnaUsername->AutoSize = true;
        columnaUsername->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        columnaUsername->Dock = System::Windows::Forms::DockStyle::Fill;
        columnaUsername->Text = L"Username";
        columnaUsername->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

        Label^ columnaNumEspais = gcnew Label();
        columnaNumEspais->AutoSize = true;
        columnaNumEspais->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        columnaNumEspais->Dock = System::Windows::Forms::DockStyle::Fill;
        columnaNumEspais->Text = L"Número d'espais";
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
        layoutDades->ColumnCount = 2;
        layoutDades->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 60.0F)));
        layoutDades->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 30.0F)));
        layoutDades->ForeColor = System::Drawing::Color::White;
        layoutDades->Dock = System::Windows::Forms::DockStyle::Top;
        layoutDades->Name = L"layoutDades";
        layoutDades->RowCount = files;
        layoutDades->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::AutoSize)));
        layoutDades->TabIndex = 8;
        layoutDades->Margin = System::Windows::Forms::Padding(0);
        layoutDades->Padding = System::Windows::Forms::Padding(0);

        for (int i = 0; i < files; ++i) {
            DataRow^ fila = dt->Rows[i];

            String^ usernameProveidor = fila[0]->ToString();
            String^ numEspais = fila[1]->ToString();

            Label^ labelUsername = gcnew Label();
            labelUsername->AutoSize = true;
            labelUsername->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            labelUsername->Dock = System::Windows::Forms::DockStyle::Fill;
            labelUsername->Text = usernameProveidor;
            labelUsername->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

            Label^ labelNumEspais = gcnew Label();
            labelNumEspais->AutoSize = true;
            labelNumEspais->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            labelNumEspais->Dock = System::Windows::Forms::DockStyle::Fill;
            labelNumEspais->Text = numEspais;
            labelNumEspais->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

            layoutDades->Controls->Add(labelUsername, 0, i);
            layoutDades->Controls->Add(labelNumEspais, 1, i);
        }

        scrollPanel->Controls->Add(layoutDades);
        mainPanel->Controls->Add(scrollPanel);
        mainPanel->Controls->Add(headerLayout);
        this->tableLayoutPanel1->Controls->Add(mainPanel, 0, 1);
    }
}
