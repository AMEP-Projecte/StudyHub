#include "pch.h"
#include "MenuGestioGrups.h"
#include "ConsultarEstudiantUI.h"
#include "MenuPrincipal.h"
#include "CrearNouGrupEstudi.h"
#include "ConsultarGrup.h"
#include "EditarGrup.h"
#include "EliminarGrupEstudi.h"

#include "TxCercaValoracio.h"
#include "StarRatingControl.h"
#include "StarRatingView.h"

using namespace StudyHub;

System::Void MenuGestioGrups::crea_Click(System::Object^ sender, System::EventArgs^ e) {
	CrearNouGrupEstudi^ Crear = gcnew CrearNouGrupEstudi();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(Crear);
}

System::Void MenuGestioGrups::consulta_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultarGrup^ consultar = gcnew ConsultarGrup();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(consultar);
}

System::Void MenuGestioGrups::edita_Click(System::Object^ sender, System::EventArgs^ e) {
	EditarGrup^ editar = gcnew EditarGrup();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(editar);
}

System::Void MenuGestioGrups::elimina_Click(System::Object^ sender, System::EventArgs^ e) {
	EliminarGrupEstudi^ eliminar = gcnew EliminarGrupEstudi();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(eliminar);
}

System::Void MenuGestioGrups::tornar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

System::Void MenuGestioGrups::MenuGestioGrups_Load(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ cn = gcnew MySqlConnection("Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;");

	DataTable^ dt = gcnew DataTable();

	Sistema^ sist = Sistema::getInstance();
	String^ username = sist->obteEstudiant()->obteUsername();
	String^ sql = "SELECT nom, tematica FROM grup ";
	sql += "WHERE nom IN(SELECT grup FROM pertany WHERE estudiant = '" + username + "'); ";
	MySqlDataAdapter^ da = gcnew MySqlDataAdapter(sql, cn);

	da->Fill(dt);

	int files = dt->Rows->Count;
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
		TableLayoutPanel^ layoutDades = gcnew TableLayoutPanel();
		layoutDades->AutoSize = true;
		layoutDades->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
		layoutDades->ColumnCount = 3;
		layoutDades->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
		layoutDades->ForeColor = System::Drawing::Color::White;
		layoutDades->Location = System::Drawing::Point(294, 127);
		layoutDades->Name = L"layoutDades";
		layoutDades->RowCount = files + 1;
		layoutDades->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 57)));
		layoutDades->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
		// layoutDades->Size = System::Drawing::Size(576, 366);
		layoutDades->TabIndex = 8;

		Label^ columnaNom = gcnew Label();
		columnaNom->AutoSize = true;
		columnaNom->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		columnaNom->Dock = System::Windows::Forms::DockStyle::Fill;
		columnaNom->Text = L"Nom";
		columnaNom->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

		Label^ columnaTematica = gcnew Label();
		columnaTematica->AutoSize = true;
		columnaTematica->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		columnaTematica->Dock = System::Windows::Forms::DockStyle::Fill;
		columnaTematica->Text = L"Temàtica";
		columnaTematica->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		columnaTematica->Click += gcnew System::EventHandler(this, &MenuGestioGrups::proba_Click); // Click

		
		Label^ columnaValoracio = gcnew Label();
		columnaValoracio->AutoSize = true;
		columnaValoracio->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		columnaValoracio->Dock = System::Windows::Forms::DockStyle::Fill;
		columnaValoracio->Text = L"Valoració";
		columnaValoracio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		

		layoutDades->Controls->Add(columnaNom, 0, 0);
		layoutDades->Controls->Add(columnaTematica, 1, 0);
		layoutDades->Controls->Add(columnaValoracio, 2, 0);


		// List<Label^>^ dades = gcnew List<Label^>();
		for (int i = 0; i < files; ++i) {
			DataRow^ fila = dt->Rows[i];

			String^ nomGrup = fila[0]->ToString();
			String^ tematicaGrup = fila[1]->ToString();

			Label^ labelNom = gcnew Label();
			labelNom->AutoSize = true;
			labelNom->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			labelNom->Dock = System::Windows::Forms::DockStyle::Fill;
			labelNom->Text = nomGrup;
			labelNom->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			Label^ labelTematica = gcnew Label();
			labelTematica->AutoSize = true;
			labelTematica->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			labelTematica->Dock = System::Windows::Forms::DockStyle::Fill;
			labelTematica->Text = tematicaGrup;
			labelTematica->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			layoutDades->Controls->Add(labelNom, 0, i + 1);
			layoutDades->Controls->Add(labelTematica, 1, i + 1);

			// valoracio
			Sistema^ sistema = Sistema::getInstance();
			TxCercaValoracio^ Cerca = gcnew TxCercaValoracio(sistema->obteUsername(), nomGrup);
			PassarellaValoracio^ p = Cerca->executar();
			if (p==nullptr) {
				StarRatingControl^ starRatingControl = gcnew StarRatingControl(nomGrup);
				layoutDades->Controls->Add(starRatingControl, 2, i + 1);
			}
			else {
				Int64^ prueba = p->obteValoracio();
				float floatValue = static_cast<float>(*prueba);
				StarRatingView^ starRatingControl = gcnew StarRatingView(floatValue);
				layoutDades->Controls->Add(starRatingControl, 2, i + 1);
			}
		}

		this->layoutPanel->Controls->Add(layoutDades, 0, 1);
	}
}

System::Void MenuGestioGrups::proba_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Hola.");
}