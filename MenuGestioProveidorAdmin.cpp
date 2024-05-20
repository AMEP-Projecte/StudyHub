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
        TableLayoutPanel^ layoutDades = gcnew TableLayoutPanel();
        layoutDades->AutoSize = true;
        layoutDades->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
        layoutDades->ColumnCount = 2;
        layoutDades->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
        layoutDades->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
        layoutDades->ForeColor = System::Drawing::Color::White;
        layoutDades->Location = System::Drawing::Point(294, 127);
        layoutDades->Name = L"layoutDades";
        layoutDades->RowCount = files + 1;
        layoutDades->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 57)));
        layoutDades->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
        layoutDades->TabIndex = 8;

        Label^ columnaUsername = gcnew Label();
        columnaUsername->AutoSize = true;
        columnaUsername->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        columnaUsername->Dock = System::Windows::Forms::DockStyle::Fill;
        columnaUsername->Text = L"Username";
        columnaUsername->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

        Label^ columnaNumEspais = gcnew Label();
        columnaNumEspais->AutoSize = true;
        columnaNumEspais->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        columnaNumEspais->Dock = System::Windows::Forms::DockStyle::Fill;
        columnaNumEspais->Text = L"Número d'espais";
        columnaNumEspais->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

        layoutDades->Controls->Add(columnaUsername, 0, 0);
        layoutDades->Controls->Add(columnaNumEspais, 1, 0);

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

            layoutDades->Controls->Add(labelUsername, 0, i + 1);
            layoutDades->Controls->Add(labelNumEspais, 1, i + 1);
        }

        this->tableLayoutPanel1->Controls->Add(layoutDades, 0, 1);
    }
}
