#include "pch.h"
#include "MenuPrincipal.h"
#include "MenuGestioEstudiantsAdmin.h"
#include "TxEsborraUsuari.h"
#include "TxEsborraEstudiantAdmin.h"


using namespace MySql::Data::MySqlClient; // Agrega este espacio de nombres


using namespace StudyHub;


System::Void MenuGestioEstudiantsAdmin::MenuGestioEstudiantsAdmin_Load(System::Object^ sender, System::EventArgs^ e) {

    MySqlConnection^ cn = gcnew MySqlConnection("Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;");

    DataTable^ dt = gcnew DataTable();
    String^ sql = "SELECT username FROM estudiant ORDER BY username ASC"; // Añadir ORDER BY para ordenar alfabeticamente A-Z
    MySqlDataAdapter^ da;

    try {
        da = gcnew MySqlDataAdapter(sql, cn);
        da->Fill(dt);

        int files = dt->Rows->Count;
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
            scrollPanel->Margin = System::Windows::Forms::Padding(0);
            scrollPanel->Padding = System::Windows::Forms::Padding(0);

            // Crear el TableLayoutPanel para los datos
            TableLayoutPanel^ layoutDades = gcnew TableLayoutPanel();
            layoutDades->AutoSize = true;
            layoutDades->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
            layoutDades->ColumnCount = 1;
            layoutDades->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
            layoutDades->ForeColor = System::Drawing::Color::White;
            layoutDades->Name = L"layoutDades";
            layoutDades->RowCount = files; // Número de filas para los datos
            layoutDades->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100))); //57
            layoutDades->TabIndex = 8;
            layoutDades->Margin = System::Windows::Forms::Padding(0);
            layoutDades->Padding = System::Windows::Forms::Padding(0);

            for (int i = 0; i < files; ++i) {
                DataRow^ fila = dt->Rows[i];
                String^ usernameEstudiant = fila["username"]->ToString();

                // Crear un botón para cada estudiante
                Button^ buttonUsername = gcnew Button();
                buttonUsername->AutoSize = true;
                buttonUsername->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(0)));
                buttonUsername->Dock = System::Windows::Forms::DockStyle::Fill;
                buttonUsername->Text = usernameEstudiant;
                buttonUsername->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
                buttonUsername->Tag = usernameEstudiant; // Usar la propiedad Tag para almacenar el username

                // Asignar el evento Click
                buttonUsername->Click += gcnew System::EventHandler(this, &MenuGestioEstudiantsAdmin::OnButtonUsernameClick);

                layoutDades->Controls->Add(buttonUsername, 0, i); // Ajustar el índice de fila para los datos
            }

            // Añadir el layoutDades al panel con scroll
            scrollPanel->Controls->Add(layoutDades);

            // Añadir el panel con scroll al tableLayoutPanel1
            this->tableLayoutPanel1->Controls->Add(scrollPanel, 0, 1);
        }
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message);
    }
}


void MenuGestioEstudiantsAdmin::OnButtonUsernameClick(System::Object^ sender, System::EventArgs^ e) {
    Button^ clickedButton = safe_cast<Button^>(sender);
    //selectedUsername = safe_cast<String^>(clickedButton->Tag);
    selectedUsername = clickedButton->Text;


    // Aquí podrías tener un botón de eliminación en tu interfaz de usuario
    eliminaEstudiantButton->Tag = selectedUsername; // Configura el Tag del botón de eliminación con el username

    // Mostrar un mensaje opcional para confirmar la selección
    MessageBox::Show("Has seleccionado el estudiante: " + selectedUsername);
}


System::Void MenuGestioEstudiantsAdmin::eliminaEstudiant_Click(System::Object^ sender, System::EventArgs^ e) {
    //Button^ deleteButton = safe_cast<Button^>(sender);
   // String^ selectedUsername = safe_cast<String^>(eliminaEstudiantButton->Tag);
    /*
    if (selectedUsername != nullptr) {
        TxEsborraEstudiantAdmin txEE(selectedUsername);
        txEE.executa();
        MessageBox::Show("Estudiant esborrat correctament.");
    }
    else {
        MessageBox::Show("Has de seleccionar un estudiant.");
    } */

    /*
    try {
        if (selectedUsername != "") {
            TxEsborraEstudiantAdmin EliminaE(selectedUsername);
            EliminaE.executa();
        }
    }
    catch (Exception^ ex) {
        MessageBox::Show("Has de seleccionar un estudiant.");
    }
    */

    try {
        //if (!String::IsNullOrEmpty(selectedUsername)) {
        if (selectedUsername != "") {
        TxEsborraEstudiantAdmin^ EliminaE = gcnew TxEsborraEstudiantAdmin(selectedUsername);
            EliminaE->executa();
            MessageBox::Show("Estudiant esborrat correctament.");
        }
        else {
            MessageBox::Show("Has de seleccionar un estudiant.");
        }
    }
    catch (Exception^ ex) {
        // MessageBox::Show("Has de seleccionar un estudiant.");
    }

}


