#include "pch.h"
#include "EditarSessio.h"
#include "MenuPrincipal.h"
#include "MenuSessionsUI.h"
#include "TxGestionaSessions.h"

System::Void StudyHub::EditarSessio::buttonTornar_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuSessionsUI^ menuGestioSessions = gcnew MenuSessionsUI();
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->AbrirFormularioEnPanel(menuGestioSessions);
}


System::Void StudyHub::EditarSessio::buttonEditar_Click(System::Object^ sender, System::EventArgs^ e) {

    if (_grup == "") {
        MessageBox::Show("Selecciona una sessio per editar.");
    }
    else {
        TxEditarSessio^ tx = gcnew TxEditarSessio(_grup, _data, _hora_inici, _hora_fi);

        if (_hora_fi == textBox1->Text) MessageBox::Show("Posa una nova hora de fi.");
        else {
            

            tx->posaNovaHoraFi(textBox1->Text);

            try {
                tx->executar();
                MessageBox::Show("Hora de fi de sessio modificada correctament.");
                MenuSessionsUI^ menuGestioSessions = gcnew MenuSessionsUI();
                MenuPrincipal^ menu = MenuPrincipal::getInstance();
                menu->AbrirFormularioEnPanel(menuGestioSessions);

            }
            catch (Exception^ ex) {
                MessageBox::Show(ex->Message);
            }
        }
    }
}


System::Void StudyHub::EditarSessio::EditarSessio_Load(System::Object^ sender, System::EventArgs^ e) {
    Sistema^ sistema = Sistema::getInstance();

    TxGestionaSessions^ tx = gcnew TxGestionaSessions(sistema->obteUsername(), "no confirmades");
    tx->executar();
    ConsultaSessio^ sessions = tx->obteResultat();

        int rowsCount = sessions->grup->Count;
        if (rowsCount == 0) {
            Label^ noSessionsLabel = gcnew Label();
            noSessionsLabel->AutoSize = true;
            noSessionsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            noSessionsLabel->Dock = System::Windows::Forms::DockStyle::Fill;
            noSessionsLabel->Text = L"Encara no tens sessions";
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
            layoutDades1->AutoSize = false;
            layoutDades1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
            layoutDades1->ColumnCount = 6;
            layoutDades1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 15.33F)));
            layoutDades1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.33F)));
            layoutDades1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 26.33F)));
            layoutDades1 ->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 13.33F)));
            layoutDades1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.33F)));
            layoutDades1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.33F)));
            layoutDades1->ForeColor = System::Drawing::Color::White;
            layoutDades1->Dock = System::Windows::Forms::DockStyle::Top;
            layoutDades1->RowCount = 1;
            layoutDades1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40)));
            layoutDades1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            layoutDades1->TabIndex = 8;



            // Añadir la fila de encabezado al principio.
            Label^ columnaGrup = gcnew Label();
            columnaGrup->AutoSize = true;
            columnaGrup->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            columnaGrup->Dock = System::Windows::Forms::DockStyle::Fill;
            columnaGrup->Text = L"Grup";
            columnaGrup->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            layoutDades1->Controls->Add(columnaGrup, 0, 0);

            Label^ columnaData = gcnew Label();
            columnaData->AutoSize = true;
            columnaData->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            columnaData->Dock = System::Windows::Forms::DockStyle::Fill;
            columnaData->Text = L"Data";
            columnaData->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            layoutDades1->Controls->Add(columnaData, 1, 0);

            Label^ columnaAdreca = gcnew Label();
            columnaAdreca->AutoSize = true;
            columnaAdreca->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            columnaAdreca->Dock = System::Windows::Forms::DockStyle::Fill;
            columnaAdreca->Text = L"Adreça";
            columnaAdreca->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            layoutDades1->Controls->Add(columnaAdreca, 2, 0);

            Label^ columna1 = gcnew Label();
            columna1->AutoSize = true;
            columna1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            columna1->Dock = System::Windows::Forms::DockStyle::Fill;
            columna1->Text = L"Hora Inici";
            columna1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            layoutDades1->Controls->Add(columna1, 3, 0);



            Label^ columna2 = gcnew Label();
            columna2->AutoSize = true;
            columna2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            columna2->Dock = System::Windows::Forms::DockStyle::Fill;
            columna2->Text = L"Hora Fi";
            columna2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            layoutDades1->Controls->Add(columna2, 4, 0);

            Label^ columna3 = gcnew Label();
            columna3->AutoSize = true;
            columna3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            columna3->Dock = System::Windows::Forms::DockStyle::Fill;
            columna3->Text = L"Llocs Lliures";
            columna3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            layoutDades1->Controls->Add(columna3, 5, 0);


            tableLayoutPanel1->Controls->Add(layoutDades1, 0, 1);




            // DADES
            TableLayoutPanel^ layoutDades = gcnew TableLayoutPanel();
            layoutDades->AutoSize = true;
            layoutDades->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
            layoutDades->ColumnCount = 6;
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
                layoutFila->Width = 550;
                layoutFila->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
                layoutFila->ColumnCount = 6;
                layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 15.33F)));
                layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 17.33F)));
                layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 29.33F)));
                layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.33F)));
                layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.33F)));
                layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 7.33F)));

                layoutFila->ForeColor = System::Drawing::Color::White;
                layoutFila->Location = System::Drawing::Point(294, 127);
                layoutFila->Name = L"layoutFila";
                layoutFila->Click += gcnew System::EventHandler(this, &EditarSessio::fila_Click); // SELECCIONAR FILA
                layoutFila->RowCount = 1;
                layoutFila->RowStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20.0F)));
                layoutFila->TabIndex = 8;

                Label^ labelGrup = gcnew Label();
                labelGrup->AutoSize = true;
                labelGrup->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(0)));
                labelGrup->Dock = System::Windows::Forms::DockStyle::Fill;
                labelGrup->Text = sessions->grup[i];
                labelGrup->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
                labelGrup->Click += gcnew System::EventHandler(this, &EditarSessio::labelenfila_Click); // SELECCIONAR FILA

                Label^ labelData = gcnew Label();
                labelData->AutoSize = true;
                labelData->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(0)));
                labelData->Dock = System::Windows::Forms::DockStyle::Fill;
                labelData->Text = sessions->data[i];
                labelData->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
                labelData->Click += gcnew System::EventHandler(this, &EditarSessio::labelenfila_Click); // SELECCIONAR FILA

                Label^ labelAdreca = gcnew Label();
                labelAdreca->AutoSize = true;
                labelAdreca->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(0)));
                labelAdreca->Dock = System::Windows::Forms::DockStyle::Fill;
                labelAdreca->Text = sessions->adreca[i];
                labelAdreca->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
                labelAdreca->Click += gcnew System::EventHandler(this, &EditarSessio::labelenfila_Click); // SELECCIONAR FILA


                Label^ labelHoraI = gcnew Label();
                labelHoraI->AutoSize = true;
                labelHoraI->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(0)));
                labelHoraI->Dock = System::Windows::Forms::DockStyle::Fill;
                labelHoraI->Text = sessions->horaInici[i];
                labelHoraI->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
                labelHoraI->Click += gcnew System::EventHandler(this, &EditarSessio::labelenfila_Click);

                Label^ labelHoraF = gcnew Label();
                labelHoraF->AutoSize = true;
                labelHoraF->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(0)));
                labelHoraF->Dock = System::Windows::Forms::DockStyle::Fill;
                labelHoraF->Text = sessions->horaFi[i];
                labelHoraF->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
                labelHoraF->Click += gcnew System::EventHandler(this, &EditarSessio::labelenfila_Click);


                Label^ labelLlocs = gcnew Label();
                labelLlocs->AutoSize = true;
                labelHoraI->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(0)));
                labelLlocs->Dock = System::Windows::Forms::DockStyle::Fill;
                labelLlocs->Text = sessions->llocsLliures[i];
                labelLlocs->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
                labelLlocs->Click += gcnew System::EventHandler(this, &EditarSessio::labelenfila_Click);

                layoutFila->Controls->Add(labelGrup, 0, 0);
                layoutFila->Controls->Add(labelData, 1, 0);
                layoutFila->Controls->Add(labelAdreca, 2, 0);
                layoutFila->Controls->Add(labelHoraI, 3, 0);
                layoutFila->Controls->Add(labelHoraF, 4, 0);
                layoutFila->Controls->Add(labelLlocs, 5, 0);


                layoutDades->Controls->Add(layoutFila, 0, i);


            }


            this->tableLayoutPanel1->Controls->Add(layoutDades, 0, 3);
            // Añadir el TableLayoutPanel al Panel con AutoScroll.
            scrollPanel->Controls->Add(layoutDades);

            // Añadir el Panel con AutoScroll al TableLayoutPanel principal.
            this->tableLayoutPanel1->Controls->Add(scrollPanel, 0, 3);
        }
}


System::Void  StudyHub::EditarSessio::labelenfila_Click(Object^ sender, EventArgs^ e)
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

System::Void  StudyHub::EditarSessio::fila_Click(System::Object^ sender, System::EventArgs^ e) {

    TableLayoutPanel^ table = dynamic_cast<TableLayoutPanel^>(sender);
    if (table != nullptr)
    {
        // Llamar a la función para procesar los labels dentro del panel
        selecciona(table);
    }
}

System::Void  StudyHub::EditarSessio::selecciona(TableLayoutPanel^ table) {

    int labelCount = 0;
    table->BackColor = System::Drawing::Color::Black;


    for each (Control ^ control in table->Controls)
    {
        Label^ label = dynamic_cast<Label^>(control);
        if (label != nullptr)
        {
            if (labelCount == 0)
                _grup = label->Text;
            else if (labelCount == 1)
                _data = label->Text;
            else if (labelCount ==3 )
                _hora_inici = label->Text;
            else if (labelCount == 4)
                _hora_fi = label->Text;

            labelCount++;

            if (labelCount == 5) break; // Stop iterating after finding 5 labels
        }
    }
    textBox1->Text = _hora_fi;

}

