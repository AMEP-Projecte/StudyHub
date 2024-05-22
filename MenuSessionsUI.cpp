#include "pch.h"
#include "MenuSessionsUI.h"

#include "MenuPrincipal.h"
#include "ConsultarSessionsUI.h"
#include "EditarSessio.h"
#include "EsborraSessioUI.h"
#include "ProgramarSessioEstudiUI.h"
#include "ParticipacioSessio.h"

using namespace StudyHub;

System::Void MenuSessionsUI::participaSessions_Click(System::Object^ sender, System::EventArgs^ e) {
    ParticipaSessio^ participa = gcnew ParticipaSessio();
    participa->grup = grupSessio;
    participa->data = dataSessio;
    PassarellaSessio^ sessio = CercadoraSessio::cercaHora(dataSessio, grupSessio, adrecaSessio);
    participa->horaInici = sessio->obteHoraInici();
    
    MenuPrincipal^ menu = MenuPrincipal::getInstance();
    menu->AbrirFormularioEnPanel(participa);
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
    MySqlConnection^ cn = gcnew MySqlConnection("Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;");
    MySqlCommand^ cmd = gcnew MySqlCommand();
    MySqlDataAdapter^ da = gcnew MySqlDataAdapter();
    DataTable^ dt = gcnew DataTable();

    Sistema^ sist = Sistema::getInstance();
    String^ username = sist->obteEstudiant()->obteUsername();
    String^ sql = "SELECT grup, data, adreca FROM sessio WHERE grup IN (SELECT grup FROM pertany WHERE estudiant = @username) AND (grup, data) NOT IN (SELECT grup, data FROM participa WHERE estudiant = @username);";
    cmd->Connection = cn;
    cmd->CommandText = sql;
    cmd->Parameters->AddWithValue("@username", username);
    da->SelectCommand = cmd;

    da->Fill(dt);

    int rowsCount = dt->Rows->Count;
    if (rowsCount == 0) {
        Label^ noSessionsLabel = gcnew Label();
        noSessionsLabel->AutoSize = true;
        noSessionsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
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
         

        this->tableLayoutPanel1->RowCount = 3;

        // Crear y configurar el TableLayoutPanel para las filas de datos.
        TableLayoutPanel^ layoutDades1 = gcnew TableLayoutPanel();
        layoutDades1->AutoSize = true;
        layoutDades1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
        layoutDades1->ColumnCount = 3;
        layoutDades1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 27.33F)));
        layoutDades1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25.33F)));
        layoutDades1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 47.33F)));
        layoutDades1->ForeColor = System::Drawing::Color::White;
        layoutDades1->Dock = System::Windows::Forms::DockStyle::Top;
        layoutDades1->RowCount = 1;
        layoutDades1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 57)));
        layoutDades1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
        layoutDades1->TabIndex = 8;
       
        

        // Añadir la fila de encabezado al principio.
        Label^ columnaGrup = gcnew Label();
        columnaGrup->AutoSize = true;
        columnaGrup->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        columnaGrup->Dock = System::Windows::Forms::DockStyle::Fill;
        columnaGrup->Text = L"Grup";
        columnaGrup->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        layoutDades1->Controls->Add(columnaGrup, 0, 0);

        Label^ columnaData = gcnew Label();
        columnaData->AutoSize = true;
        columnaData->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        columnaData->Dock = System::Windows::Forms::DockStyle::Fill;
        columnaData->Text = L"Data";
        columnaData->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        layoutDades1->Controls->Add(columnaData, 1, 0);

        Label^ columnaAdreca = gcnew Label();
        columnaAdreca->AutoSize = true;
        columnaAdreca->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        columnaAdreca->Dock = System::Windows::Forms::DockStyle::Fill;
        columnaAdreca->Text = L"Adreca";
        columnaAdreca->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        layoutDades1->Controls->Add(columnaAdreca, 2, 0);
        tableLayoutPanel1->Controls->Add(layoutDades1, 0, 1);

     

        // DADES
        TableLayoutPanel^ layoutDades = gcnew TableLayoutPanel();
        layoutDades->AutoSize = true;
        layoutDades->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
        layoutDades->ColumnCount = 1;
        layoutDades->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 33.33F)));
        layoutDades->Dock = System::Windows::Forms::DockStyle::Top;
        layoutDades->ForeColor = System::Drawing::Color::White;
        layoutDades->Location = System::Drawing::Point(294, 127);
        layoutDades->Name = L"layoutDades";
        layoutDades->RowCount = rowsCount;
        layoutDades->TabIndex = 8; 
       
       
       

        // Añadir las filas de datos al TableLayoutPanel.
        for (int i = 0; i < rowsCount; ++i) {
            TableLayoutPanel^ layoutFila = gcnew TableLayoutPanel();
            layoutFila->Height = 49;
            layoutFila->Width = 339;
            layoutFila->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
            layoutFila->ColumnCount = 3;
            layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 28.33F)));
            layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 28.33F)));
            layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 43.33F)));
            layoutFila->ForeColor = System::Drawing::Color::White;
            layoutFila->Location = System::Drawing::Point(294, 127);
            layoutFila->Name = L"layoutFila";
            layoutFila->Click += gcnew System::EventHandler(this, &MenuSessionsUI::fila_Click); // SELECCIONAR FILA
            layoutFila->RowCount = 1;
            layoutFila->RowStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20.0F)));
         

            layoutFila->TabIndex = 8;

            DataRow^ fila = dt->Rows[i];

            String^ nomGrup = fila["grup"]->ToString();
            DateTime^ fecha = Convert::ToDateTime(fila["data"]);

            // Formatear la fecha a "yyyy-MM-dd"
            String^ dataSessio = fecha->ToString("yyyy-MM-dd");
          
            String^ direccioSessio = fila["adreca"]->ToString();

            Label^ labelGrup = gcnew Label();
            labelGrup->AutoSize = true;
            labelGrup->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            labelGrup->Dock = System::Windows::Forms::DockStyle::Fill;
            labelGrup->Text = nomGrup;
            labelGrup->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            labelGrup->Click += gcnew System::EventHandler(this, &MenuSessionsUI::labelenfila_Click); // SELECCIONAR FILA

            Label^ labelData = gcnew Label();
            labelData->AutoSize = true;
            labelData->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            labelData->Dock = System::Windows::Forms::DockStyle::Fill;
            labelData->Text = dataSessio;
            labelData->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            labelData->Click += gcnew System::EventHandler(this, &MenuSessionsUI::labelenfila_Click); // SELECCIONAR FILA

            Label^ labelAdreca = gcnew Label();
            labelAdreca->AutoSize = true;
            labelAdreca->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            labelAdreca->Dock = System::Windows::Forms::DockStyle::Fill;
            labelAdreca->Text = direccioSessio;
            labelAdreca->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            labelAdreca->Click += gcnew System::EventHandler(this, &MenuSessionsUI::labelenfila_Click); // SELECCIONAR FILA

            layoutFila->Controls->Add(labelGrup, 0, 0);
            layoutFila->Controls->Add(labelData, 1, 0);
            layoutFila->Controls->Add(labelAdreca, 2, 0);



            layoutDades->Controls->Add(layoutFila, 0, i);


        }


        this->tableLayoutPanel1->Controls->Add(layoutDades, 0, 3);
        // Añadir el TableLayoutPanel al Panel con AutoScroll.
        scrollPanel->Controls->Add(layoutDades);

  // Añadir el Panel con AutoScroll al TableLayoutPanel principal.
  this->tableLayoutPanel1->Controls->Add(scrollPanel, 0, 3);
    }
}
  

 

  

System::Void MenuSessionsUI::labelenfila_Click(Object^ sender, EventArgs^ e)
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

System::Void MenuSessionsUI::fila_Click(System::Object^ sender, System::EventArgs^ e) {

    TableLayoutPanel^ table = dynamic_cast<TableLayoutPanel^>(sender);
    if (table != nullptr)
    {
        // Llamar a la función para procesar los labels dentro del panel
        selecciona(table);
    }
}

System::Void MenuSessionsUI::selecciona(TableLayoutPanel^ table) {
   
    int labelCount = 0;
    table->BackColor = System::Drawing::Color::White;
    

    for each (Control ^ control in table->Controls)
    {
        Label^ label = dynamic_cast<Label^>(control);
        if (label != nullptr)
        {
            if (labelCount == 0)
                grupSessio = label->Text;
            else if (labelCount == 1)
                dataSessio = label->Text;
            else if (labelCount == 2)
                adrecaSessio = label->Text;

            labelCount++;

            if (labelCount == 3)
                break; // Stop iterating after finding three labels
        }
    }


    // Aquí puedes hacer lo que necesites con los tres strings guardados.
}


