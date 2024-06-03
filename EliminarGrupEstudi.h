#pragma once
#include "TxEliminarGrup.h"
#include "Sistema.h"
#include "StarRatingView.h"
#include "MenuPrincipal.h"
#include "MenuGestioGrups.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for EliminarGrupEstudi
	/// </summary>
	public ref class EliminarGrupEstudi : public System::Windows::Forms::Form
	{

	public:
		EliminarGrupEstudi(void)
		{
			InitializeComponent();
			omplir();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EliminarGrupEstudi()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: List<Grup>^ grups;
	private: int seleccionat;
	private: System::Windows::Forms::Button^ ButtonTornar;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		/// 

		// Pre: Cert
		// Post: Hem creat una Data Table amb l'inforamació dels grups creats per l'usuari actual 
		void omplir() {
			/*Sistema^ sist = Sistema::getInstance();
			MySqlConnection^ cn = gcnew MySqlConnection(Sistema::getInstance()->obteCadenaDeConnexio());
			DataTable^ dt = gcnew DataTable();
			String^ sql = String::Format("SELECT * FROM grup WHERE creador = '{0}';", sist->obteEstudiant()->obteUsername());
			MySqlDataAdapter^ da = gcnew MySqlDataAdapter(sql, cn);

			da->Fill(dt);

			this->dataGridView1->DataSource = dt;*/
		}
		void InitializeComponent(void)
		{
			this->ButtonTornar = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ButtonTornar
			// 
			this->ButtonTornar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ButtonTornar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonTornar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ButtonTornar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonTornar->ForeColor = System::Drawing::Color::DarkCyan;
			this->ButtonTornar->Location = System::Drawing::Point(82, 351);
			this->ButtonTornar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ButtonTornar->Name = L"ButtonTornar";
			this->ButtonTornar->Size = System::Drawing::Size(192, 44);
			this->ButtonTornar->TabIndex = 14;
			this->ButtonTornar->Text = L"Tornar";
			this->ButtonTornar->UseVisualStyleBackColor = false;
			this->ButtonTornar->Click += gcnew System::EventHandler(this, &EliminarGrupEstudi::ButtonTornar_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::DarkCyan;
			this->button3->Location = System::Drawing::Point(520, 351);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(192, 44);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &EliminarGrupEstudi::button3_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(233, 17);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(280, 45);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Eliminar Grups:";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ForeColor = System::Drawing::Color::White;
			this->tableLayoutPanel1->Location = System::Drawing::Point(43, 61);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 37)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(718, 270);
			this->tableLayoutPanel1->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(4, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(800, 46);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Els meus grups";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// EliminarGrupEstudi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(788, 407);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->ButtonTornar);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"EliminarGrupEstudi";
			this->Text = L"EsborraSessioUI";
			this->Load += gcnew System::EventHandler(this, &EliminarGrupEstudi::EliminarGrupEstudi_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Panel^ panel = dynamic_cast<Panel^>(tableLayoutPanel1->Controls[1]);
	TableLayoutPanel^ table = dynamic_cast<TableLayoutPanel^>(panel->Controls[seleccionat]);
	Label^ label = dynamic_cast<Label^>(table->Controls[0]);
	String^ grup = dynamic_cast<String^>(label->Text);

	Sistema^ sist = Sistema::getInstance();
	try {
		if (grup != "") {
			TxEliminarGrup EliminarGrup(grup, sist->obteEstudiant()->obteUsername()); 
			EliminarGrup.executar();
			omplir();

			MenuPrincipal^ menu = MenuPrincipal::getInstance();
			MenuGestioGrups^ gestioGrups = gcnew MenuGestioGrups();
			menu->AbrirFormularioEnPanel(gestioGrups);
		}
		else {
			MessageBox::Show("Escriu el nom del grup a eliminar.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void EliminarGrupEstudi_Load(System::Object^ sender, System::EventArgs^ e) {
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->ButtonMenuEstudiant->Visible = true;
	menu->ButtonMenuGrups->Visible = true;
	menu->buttonMenuSessions->Visible = true;
	Sistema^ sist = Sistema::getInstance();
	TxEliminarGrup^ tx;
	grups = tx->obteGrupsEstudiant(sist->obteEstudiant()->obteUsername());
	omplirTaula();
}
private: System::Void omplirTaula() {
	seleccionat = 1;
	this->tableLayoutPanel1->Controls->Clear();
	if (grups->Count == 0) {
		Label^ noSessionsLabel = gcnew Label();
		noSessionsLabel->AutoSize = true;
		noSessionsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		noSessionsLabel->Dock = System::Windows::Forms::DockStyle::Fill;
		noSessionsLabel->Text = L"Encara no tens cap grup";
		noSessionsLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

		this->tableLayoutPanel1->Controls->Add(noSessionsLabel, 0, 1);
	}
	else {
		this->tableLayoutPanel1->RowCount = 2;

		Panel^ scrollPanel = gcnew Panel();
		scrollPanel->Dock = System::Windows::Forms::DockStyle::Fill;
		scrollPanel->AutoScroll = true;
		//Creacion de los titulos:
		System::Windows::Forms::TableLayoutPanel^ panell = gcnew System::Windows::Forms::TableLayoutPanel();
		panell->ColumnCount = 4;
		panell->RowCount = 1;
		panell->AutoSize = true;
		panell->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
		panell->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			100)));
		panell->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			100)));
		panell->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			100)));
		panell->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			20)));
		panell->Dock = System::Windows::Forms::DockStyle::Top;
		panell->ForeColor = System::Drawing::Color::White;
		panell->Padding = System::Windows::Forms::Padding(3);

		System::Windows::Forms::Label^ NomGrup = gcnew System::Windows::Forms::Label();
		NomGrup->Text = "Nom";
		NomGrup->Anchor = System::Windows::Forms::AnchorStyles::None;
		NomGrup->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		NomGrup->Font = gcnew System::Drawing::Font("Arial Black", 12, System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline);
		NomGrup->AutoSize = true;
		panell->Controls->Add(NomGrup, 0, 0);

		System::Windows::Forms::Label^ Tematica = gcnew System::Windows::Forms::Label();
		Tematica->Text = "Tem\u00e0tica";
		Tematica->Anchor = System::Windows::Forms::AnchorStyles::None;
		Tematica->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		Tematica->Font = gcnew System::Drawing::Font("Arial Black", 12, System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline);
		Tematica->AutoSize = true;
		panell->Controls->Add(Tematica, 1, 0);

		System::Windows::Forms::Label^ Participants = gcnew System::Windows::Forms::Label();
		Participants->Text = "Participants";
		Participants->Anchor = System::Windows::Forms::AnchorStyles::None;
		Participants->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		Participants->Font = gcnew System::Drawing::Font("Arial Black", 9, System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline);
		Participants->AutoSize = true;
		panell->Controls->Add(Participants, 2, 0);

		System::Windows::Forms::Label^ Valoracio = gcnew System::Windows::Forms::Label();
		Valoracio->Text = "Valoraci\u00F3";
		Valoracio->Anchor = System::Windows::Forms::AnchorStyles::None;
		Valoracio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		Valoracio->Font = gcnew System::Drawing::Font("Arial Black", 12, System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline);
		Valoracio->AutoSize = true;
		panell->Controls->Add(Valoracio, 3, 0);

		this->tableLayoutPanel1->Controls->Add(panell, 0, 0);
		// Creacion de la tabla:
		for (int i = 0; i < grups->Count; i++)
		{
			System::Windows::Forms::TableLayoutPanel^ panel = gcnew System::Windows::Forms::TableLayoutPanel();
			panel->ColumnCount = 4;
			panel->RowCount = 1;
			panel->AutoSize = true;
			panel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			panel->Dock = System::Windows::Forms::DockStyle::Top;
			panel->Tag = i+"";

			System::Windows::Forms::Label^ label = gcnew System::Windows::Forms::Label();
			label->Text = grups[i]._grup->obteNom();
			label->Anchor = System::Windows::Forms::AnchorStyles::None;
			label->Click += gcnew System::EventHandler(this, &EliminarGrupEstudi::On_Click);
			label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			label->Font = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Bold);
			label->AutoSize = true;
			label->Tag = i+"";
			panel->Controls->Add(label, 0, 0);


			System::Windows::Forms::Label^ label1 = gcnew System::Windows::Forms::Label();
			label1->Text = grups[i]._grup->obteTematica();
			label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			label1->Click += gcnew System::EventHandler(this, &EliminarGrupEstudi::On_Click);
			label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			label1->Font = gcnew System::Drawing::Font("Arial", 8, System::Drawing::FontStyle::Bold);
			label1->AutoSize = true;
			label1->Tag = i+"";
			panel->Controls->Add(label1, 1, 0);

			System::Windows::Forms::Label^ label2 = gcnew System::Windows::Forms::Label();
			label2->Text = grups[i]._nombreParticipants.ToString();
			label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			label2->Click += gcnew System::EventHandler(this, &EliminarGrupEstudi::On_Click);
			label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			label2->Font = gcnew System::Drawing::Font("Arial", 12, System::Drawing::FontStyle::Bold);
			label2->AutoSize = true;
			label2->Tag = i+"";
			panel->Controls->Add(label2, 2, 0);

			System::Windows::Forms::FlowLayoutPanel^ panelEstrellas = gcnew System::Windows::Forms::FlowLayoutPanel();
			StarRatingView^ starRatingControl = gcnew StarRatingView(grups[i]._valMitja);
			panelEstrellas->Controls->Add(starRatingControl);
			panelEstrellas->AutoSize = true;
			panel->Controls->Add(panelEstrellas, 3, 0);

			panel->Click += gcnew System::EventHandler(this, &EliminarGrupEstudi::On_Click);
			

			System::Windows::Forms::Label^ horizontalLine = gcnew System::Windows::Forms::Label();
			horizontalLine->Height = 2;
			horizontalLine->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			horizontalLine->Dock = System::Windows::Forms::DockStyle::Top;
			scrollPanel->Controls->Add(horizontalLine);

			scrollPanel->Controls->Add(panel);
			

			int x = (panel->GetColumnWidths()[3] - panelEstrellas->Width) / 2;
			int y = (panel->GetRowHeights()[0] - panelEstrellas->Height) / 2;
			panelEstrellas->Margin = System::Windows::Forms::Padding(x, y, 0, 0);
		}

		this->tableLayoutPanel1->Controls->Add(scrollPanel);
	}
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void On_Click(System::Object^ sender, System::EventArgs^ e) {
	Panel^ panel = dynamic_cast<Panel^>(tableLayoutPanel1->Controls[1]);
	TableLayoutPanel^ table = dynamic_cast<TableLayoutPanel^>(panel->Controls[seleccionat]);
	
	// Posar la resta de files com "no seleccionades"
	Control^ parent = panel->Parent;
	if (parent != nullptr)
	{
		for each (Control ^ control in parent->Controls)
		{
			TableLayoutPanel^ siblingTable = dynamic_cast<TableLayoutPanel^>(control);
			if (siblingTable != nullptr && siblingTable != panel)
			{
				siblingTable->BackColor = System::Drawing::Color::Transparent;
			}
		}
	}

	table->BackColor = System::Drawing::SystemColors::ActiveCaption;

	TableLayoutPanel^ clickedPanel = dynamic_cast<TableLayoutPanel^>(sender);
	Label^ clickedLabel = dynamic_cast<Label^>(sender);
	String^ labelInfo;
	if (clickedPanel) {
		labelInfo = dynamic_cast<String^>(clickedPanel->Tag);
	}
	else if (clickedLabel) {
		labelInfo = dynamic_cast<String^>(clickedLabel->Tag);
	}
	seleccionat = (Convert::ToInt32(labelInfo)*2)+1;

	table = dynamic_cast<TableLayoutPanel^>(panel->Controls[seleccionat]);
	table->BackColor = System::Drawing::Color::Black;
}

private: System::Void ButtonTornar_Click(System::Object^ sender, System::EventArgs^ e);

};
}
