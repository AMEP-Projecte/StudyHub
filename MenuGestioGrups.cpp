#include "pch.h"
#include "MenuGestioGrups.h"
#include "ConsultarEstudiantUI.h"
#include "MenuPrincipal.h"
#include "CrearNouGrupEstudi.h"
#include "ConsultarGrup.h"
#include "EditarGrup.h"
#include "EliminarGrupEstudi.h"
#include "CercaGrup.h"
#include "GestionarPeticionsUI.h"
#include "TxCercaValoracio.h"
#include "StarRatingControl.h"
#include "StarRatingView.h"
#include "TxGrupsEstudiant.h"

using namespace StudyHub;

System::Void MenuGestioGrups::crea_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->ButtonMenuGrups->Visible = true;

	CrearNouGrupEstudi^ Crear = gcnew CrearNouGrupEstudi();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->ButtonMenuGrups->Visible = true;
	Menu->AbrirSubFormularioEnPanel(Crear);
}

System::Void MenuGestioGrups::consulta_Click(System::Object^ sender, System::EventArgs^ e) {
	CercaGrup^ consultar = gcnew CercaGrup();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->ButtonMenuGrups->Visible = true;
	Menu->AbrirSubFormularioEnPanel(consultar);
}

System::Void MenuGestioGrups::edita_Click(System::Object^ sender, System::EventArgs^ e) {
	EditarGrup^ editar = gcnew EditarGrup();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->ButtonMenuGrups->Visible = true;
	Menu->AbrirSubFormularioEnPanel(editar);
}

System::Void MenuGestioGrups::elimina_Click(System::Object^ sender, System::EventArgs^ e) {
	EliminarGrupEstudi^ eliminar = gcnew EliminarGrupEstudi();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->ButtonMenuGrups->Visible = true;
	Menu->AbrirSubFormularioEnPanel(eliminar);
}

System::Void MenuGestioGrups::buttonGestionaPeticions_Click(System::Object^ sender, System::EventArgs^ e) {
	GestionarPeticionsUI^ peticions = gcnew GestionarPeticionsUI();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(peticions);
}


System::Void MenuGestioGrups::MenuGestioGrups_Load(System::Object^ sender, System::EventArgs^ e) {
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->ButtonMenuEstudiant->Visible = true;
	menu->ButtonMenuGrups->Visible = false;
	menu->buttonMenuSessions->Visible = true;

	Sistema^ sistema = Sistema::getInstance();
	TxGrupsEstudiant^ tx = gcnew TxGrupsEstudiant(sistema->obteUsername());
	tx->executar();
	ConsultaGrupEstudiant^ grupsEstudiant = tx->obteResultat();

	int files = grupsEstudiant->grup->Count;
	if (files == 0) {
		Label^ MissatgeNoGrups = gcnew Label();
		MissatgeNoGrups->AutoSize = true;
		MissatgeNoGrups->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		MissatgeNoGrups->Dock = System::Windows::Forms::DockStyle::Fill;
		MissatgeNoGrups->Text = L"Encara no pertanys a cap grup";
		MissatgeNoGrups->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

		this->layoutPanel->Controls->Add(MissatgeNoGrups, 0, 1);
	}
	else {
		// CAPÇELERA DE LES COLUMNES
		this->layoutPanel->RowCount = 3;

		TableLayoutPanel^ layoutTitols = gcnew TableLayoutPanel();
		layoutTitols->AutoSize = true;
		layoutTitols->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
		layoutTitols->ColumnCount = 3;
		// layoutTitols->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
		layoutTitols->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 115)));
		layoutTitols->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 115)));
		layoutTitols->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 165)));
		layoutTitols->ForeColor = System::Drawing::Color::White;
		layoutTitols->Location = System::Drawing::Point(294, 127);
		layoutTitols->Name = L"layoutTitols";
		layoutTitols->RowCount = 1;
		layoutTitols->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 45)));
		// layoutTitols->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
		layoutTitols->TabIndex = 8;
		layoutTitols->Dock = System::Windows::Forms::DockStyle::Fill;

		Label^ columnaNom = gcnew Label();
		columnaNom->AutoSize = true;
		columnaNom->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		columnaNom->Dock = System::Windows::Forms::DockStyle::Fill;
		columnaNom->Text = L"Nom";
		columnaNom->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		layoutTitols->Controls->Add(columnaNom, 0, 0); 

		Label^ columnaTematica = gcnew Label();
		columnaTematica->AutoSize = true;
		columnaTematica->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		columnaTematica->Dock = System::Windows::Forms::DockStyle::Fill;
		columnaTematica->Text = L"Temàtica";
		columnaTematica->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		layoutTitols->Controls->Add(columnaTematica, 1, 0);
		
		Label^ columnaValoracio = gcnew Label();
		columnaValoracio->AutoSize = true;
		columnaValoracio->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		columnaValoracio->Dock = System::Windows::Forms::DockStyle::Fill;
		columnaValoracio->Text = L"Valoració";
		columnaValoracio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;		
		layoutTitols->Controls->Add(columnaValoracio, 2, 0);

		layoutPanel->Controls->Add(layoutTitols, 0, 1);

		// DADES
		Panel^ scrollPanel = gcnew Panel();
		scrollPanel->AutoScroll = true;
		scrollPanel->AutoSize = true;
		scrollPanel->Margin = System::Windows::Forms::Padding(0);
		scrollPanel->Padding = System::Windows::Forms::Padding(0);

		TableLayoutPanel^ layoutDades = gcnew TableLayoutPanel();
		layoutDades->AutoSize = true;
		layoutDades->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
		layoutDades->ColumnCount = 1;
		layoutDades->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
		layoutDades->ForeColor = System::Drawing::Color::White;
		// layoutDades->Location = System::Drawing::Point(294, 127);
		layoutDades->Name = L"layoutDades";
		layoutDades->RowCount = files;
		// layoutDades->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 55)));
		layoutDades->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
		layoutDades->TabIndex = 8;

		for (int i = 0; i < files; ++i) {
			TableLayoutPanel^ layoutFila = gcnew TableLayoutPanel();
			layoutFila->AutoSize = true;
			layoutFila->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			layoutFila->ColumnCount = 3;
			layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 115)));
			layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 115)));
			layoutFila->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 165)));
			layoutFila->ForeColor = System::Drawing::Color::White;
			// layoutFila->Location = System::Drawing::Point(294, 127);
			layoutFila->Name = L"layoutFila";
			// layoutFila->Click += gcnew System::EventHandler(this, &MenuGestioGrups::fila_Click); // SELECCIONAR FILA
			layoutFila->RowCount = 1;
			layoutFila->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			// layoutFila->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			layoutFila->TabIndex = 8;

			Label^ labelNom = gcnew Label();
			labelNom->AutoSize = true;
			labelNom->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			labelNom->Dock = System::Windows::Forms::DockStyle::Fill;
			labelNom->Text = grupsEstudiant->grup[i];
			labelNom->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// labelNom->Click += gcnew System::EventHandler(this, &MenuGestioGrups::labelenfila_Click); // SELECCIONAR FILA

			Label^ labelTematica = gcnew Label();
			labelTematica->AutoSize = true;
			labelTematica->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			labelTematica->Dock = System::Windows::Forms::DockStyle::Fill;
			labelTematica->Text = grupsEstudiant->tematica[i];
			labelTematica->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// labelTematica->Click += gcnew System::EventHandler(this, &MenuGestioGrups::labelenfila_Click); // SELECCIONAR FILA

			layoutFila->Controls->Add(labelNom, 0, 0);
			layoutFila->Controls->Add(labelTematica, 1, 0);

			// valoracio
			TxCercaValoracio^ Cerca = gcnew TxCercaValoracio(sistema->obteUsername(), grupsEstudiant->grup[i]);
			PassarellaValoracio^ p = Cerca->executar();
			if (p==nullptr) {
				StarRatingControl^ starRatingControl = gcnew StarRatingControl(grupsEstudiant->grup[i]);
				layoutFila->Controls->Add(starRatingControl, 2, 0);
			}
			else {
				Int64^ prueba = p->obteValoracio();
				float floatValue = static_cast<float>(*prueba);
				StarRatingView^ starRatingControl = gcnew StarRatingView(floatValue);
				// starRatingControl->Click += gcnew System::EventHandler(this, &MenuGestioGrups::labelenfila_Click); // SELECCIONAR FILA
				layoutFila->Controls->Add(starRatingControl, 2, 0);
			}

			layoutDades->Controls->Add(layoutFila, 0, i);
		}

		scrollPanel->Controls->Add(layoutDades);
		this->layoutPanel->Controls->Add(scrollPanel, 0, 3);
	}
}

/*
System::Void MenuGestioGrups::labelenfila_Click(Object^ sender, EventArgs^ e)
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

System::Void MenuGestioGrups::fila_Click(System::Object^ sender, System::EventArgs^ e) {

	TableLayoutPanel^ table = dynamic_cast<TableLayoutPanel^>(sender);
	if (table != nullptr)
	{
		// Llamar a la función para procesar los labels dentro del panel
		selecciona(table);
	}
}

System::Void MenuGestioGrups::selecciona(TableLayoutPanel^ table) {
		String^ infoLabel = "";
		for each (Control ^ control in table->Controls)
		{
			Label^ label = dynamic_cast<Label^>(control);
			if (label != nullptr)
			{
				infoLabel += " " + label->Text;
			}
		}

		MessageBox::Show(infoLabel);
}
*/