﻿#pragma once
#include "Sistema.h"
#include "TxCercarGrups.h"
#include "StarRatingView.h"
#include "MenuPrincipal.h"
#include "UnirseGrupUI.h"
#include "MenuGestioGrups.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CercaGrup
	/// </summary>
	public ref class CercaGrup : public System::Windows::Forms::Form
	{
	public:
		CercaGrup(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~CercaGrup()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ tornar;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: List<Grup>^ grups;
	private: System::Windows::Forms::ComboBox^ comboBox1;





	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tornar = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 21, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(203, 16);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Cerca Grups";
			// 
			// tornar
			// 
			this->tornar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tornar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tornar->ForeColor = System::Drawing::Color::DarkCyan;
			this->tornar->Location = System::Drawing::Point(19, 28);
			this->tornar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tornar->Name = L"tornar";
			this->tornar->Size = System::Drawing::Size(74, 27);
			this->tornar->TabIndex = 5;
			this->tornar->Text = L"Tornar";
			this->tornar->UseVisualStyleBackColor = true;
			this->tornar->Click += gcnew System::EventHandler(this, &CercaGrup::tornar_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Location = System::Drawing::Point(17, 65);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(578, 254);
			this->panel1->TabIndex = 0;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				559)));
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel1->ForeColor = System::Drawing::Color::White;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(574, 8);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Nom", L"Tematica", L"Participants", L"Valoracio" });
			this->comboBox1->Location = System::Drawing::Point(525, 38);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(70, 21);
			this->comboBox1->TabIndex = 20;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CercaGrup::comboBox1_SelectedIndexChanged);
			// 
			// CercaGrup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 331);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tornar);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"CercaGrup";
			this->Text = L"CercaGrup";
			this->Load += gcnew System::EventHandler(this, &CercaGrup::CercaGrup_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tornar_Click(System::Object^ sender, System::EventArgs^ e) {
		MenuPrincipal^ menu = MenuPrincipal::getInstance();
		MenuGestioGrups^ gestioGrups = gcnew MenuGestioGrups();
		menu->AbrirFormularioEnPanel(gestioGrups);
	}
	private: System::Void carregarTaula() {
		this->tableLayoutPanel1->Controls->Clear();
		this->tableLayoutPanel1->RowCount = grups->Count + 1;
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
			panel->Tag = grups[i]._grup->obteNom();

			System::Windows::Forms::Label^ label = gcnew System::Windows::Forms::Label();
			label->Text = grups[i]._grup->obteNom();
			label->Anchor = System::Windows::Forms::AnchorStyles::None;
			label->Click += gcnew System::EventHandler(this, &CercaGrup::On_Click);
			label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			label->Font = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Bold);
			label->AutoSize = true;
			label->Tag = grups[i]._grup->obteNom();
			panel->Controls->Add(label, 0, 0);


			System::Windows::Forms::Label^ label1 = gcnew System::Windows::Forms::Label();
			label1->Text = grups[i]._grup->obteTematica();
			label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			label1->Click += gcnew System::EventHandler(this, &CercaGrup::On_Click);
			label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			label1->Font = gcnew System::Drawing::Font("Arial", 8, System::Drawing::FontStyle::Bold);
			label1->AutoSize = true;
			label1->Tag = grups[i]._grup->obteNom();
			panel->Controls->Add(label1, 1, 0);

			System::Windows::Forms::Label^ label2 = gcnew System::Windows::Forms::Label();
			label2->Text = grups[i]._nombreParticipants.ToString();
			label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			label2->Click += gcnew System::EventHandler(this, &CercaGrup::On_Click);
			label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			label2->Font = gcnew System::Drawing::Font("Arial", 12, System::Drawing::FontStyle::Bold);
			label2->AutoSize = true;
			label2->Tag = grups[i]._grup->obteNom();
			panel->Controls->Add(label2, 2, 0);

			System::Windows::Forms::FlowLayoutPanel^ panelEstrellas = gcnew System::Windows::Forms::FlowLayoutPanel();
			StarRatingView^ starRatingControl = gcnew StarRatingView(grups[i]._valMitja);
			panelEstrellas->Controls->Add(starRatingControl);
			panelEstrellas->AutoSize = true;
			panel->Controls->Add(panelEstrellas, 3, 0);

			panel->Click += gcnew System::EventHandler(this, &CercaGrup::On_Click);

			this->tableLayoutPanel1->Controls->Add(panel, 0, i + 1);
			int x = (panel->GetColumnWidths()[3] - panelEstrellas->Width) / 2;
			int y = (panel->GetRowHeights()[0] - panelEstrellas->Height) / 2;
			panelEstrellas->Margin = System::Windows::Forms::Padding(x, y, 0, 0);
		}
	}
	private: System::Void CercaGrup_Load(System::Object^ sender, System::EventArgs^ e) {
		MenuPrincipal^ menu = MenuPrincipal::getInstance();
		menu->ButtonMenuEstudiant->Visible = true;
		menu->ButtonMenuGrups->Visible = true;
		menu->buttonMenuSessions->Visible = true;

		TxCercarGrups^ tx = gcnew TxCercarGrups();
		tx->executar();
		grups = tx->obteResultat();
		carregarTaula();
	}
	private: System::Void On_Click(System::Object^ sender, System::EventArgs^ e) {
		MenuPrincipal^ Menu = Menu->getInstance();
		TableLayoutPanel^ clickedPanel = dynamic_cast<TableLayoutPanel^>(sender);
		Label^ clickedLabel = dynamic_cast<Label^>(sender);
		String^ labelInfo;
		if (clickedPanel) {
			labelInfo = dynamic_cast<String^>(clickedPanel->Tag);
		}
		else if (clickedLabel) {
			labelInfo = dynamic_cast<String^>(clickedLabel->Tag);
		}
		UnirseGrupUI^ Unirse = gcnew UnirseGrupUI(labelInfo);
		//MessageBox::Show("Row clicked: " + labelInfo);
		Menu->AbrirSubFormularioEnPanelOriginal(Unirse);
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		ComboBox^ cb = dynamic_cast<ComboBox^>(sender);
		if (cb->Text == "Nom") {
			grups->Sort(gcnew Comparison<Grup>(compareNom));
		}
		if (cb->Text == "Tematica") {
			grups->Sort(gcnew Comparison<Grup>(compareTema));
		}
		if (cb->Text == "Participants") {
			grups->Sort(gcnew Comparison<Grup>(comparePart));
		}
		if (cb->Text == "Valoracio") {
			grups->Sort(gcnew Comparison<Grup>(compareVal));
		}
		carregarTaula();
	}

	private: static int compareNom(Grup g1, Grup g2) {return String::Compare(g1._grup->obteNom(), g2._grup->obteNom()); }
	private: static int compareTema(Grup g1, Grup g2) { return String::Compare(g1._grup->obteTematica(), g2._grup->obteTematica()); }
	private: static int comparePart(Grup g1, Grup g2) { return g2._nombreParticipants.CompareTo(g1._nombreParticipants); }
	private: static int compareVal(Grup g1, Grup g2) { return g2._valMitja.CompareTo(g1._valMitja); }
};
}
