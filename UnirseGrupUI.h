#pragma once
#include "StarRatingView.h"
#include "TxConsultarGrup.h"
#include "TxValoracioMitjana.h"
#include "TxCercaValoracio.h"
#include "TxCercaValoracioGrup.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UnirseGrupUI
	/// </summary>
	public ref class UnirseGrupUI : public System::Windows::Forms::Form
	{
	public:
		UnirseGrupUI(String^ nomGrup)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			grup = nomGrup;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UnirseGrupUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ButtonUnirse;
	private: System::Windows::Forms::Button^ ButtonCloseForm;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	
	private: String^ grup;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ButtonUnirse = (gcnew System::Windows::Forms::Button());
			this->ButtonCloseForm = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ButtonUnirse
			// 
			this->ButtonUnirse->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->ButtonUnirse->Location = System::Drawing::Point(400, 249);
			this->ButtonUnirse->Name = L"ButtonUnirse";
			this->ButtonUnirse->Size = System::Drawing::Size(108, 28);
			this->ButtonUnirse->TabIndex = 6;
			this->ButtonUnirse->Text = L"Unirse";
			this->ButtonUnirse->UseVisualStyleBackColor = true;
			// 
			// ButtonCloseForm
			// 
			this->ButtonCloseForm->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonCloseForm->FlatAppearance->BorderSize = 0;
			this->ButtonCloseForm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonCloseForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonCloseForm->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ButtonCloseForm->Location = System::Drawing::Point(481, -7);
			this->ButtonCloseForm->Name = L"ButtonCloseForm";
			this->ButtonCloseForm->Size = System::Drawing::Size(46, 46);
			this->ButtonCloseForm->TabIndex = 8;
			this->ButtonCloseForm->Text = L"X";
			this->ButtonCloseForm->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->ButtonCloseForm->UseVisualStyleBackColor = false;
			this->ButtonCloseForm->Click += gcnew System::EventHandler(this, &UnirseGrupUI::ButtonCloseForm_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(30, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 15);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Grup:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(252, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 15);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Temàtica:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(30, 45);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 15);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Valoracio:";
			this->label5->Click += gcnew System::EventHandler(this, &UnirseGrupUI::label5_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Location = System::Drawing::Point(12, 72);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(382, 205);
			this->panel1->TabIndex = 17;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				372)));
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel1->ForeColor = System::Drawing::Color::White;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->Padding = System::Windows::Forms::Padding(3);
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(378, 6);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(252, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 15);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Participants:";
			this->label1->Click += gcnew System::EventHandler(this, &UnirseGrupUI::label1_Click);
			// 
			// UnirseGrupUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(520, 289);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ButtonUnirse);
			this->Controls->Add(this->ButtonCloseForm);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"UnirseGrupUI";
			this->Text = L"UnirseGrupUI";
			this->Load += gcnew System::EventHandler(this, &UnirseGrupUI::UnirseGrupUI_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void UnirseGrupUI_Load(System::Object^ sender, System::EventArgs^ e) {
	TxConsultaGrup^ txcg = gcnew TxConsultaGrup(grup);
	txcg->executar();
	ConsultaGrup Cgrup = txcg->obteResultat();
	this->label2->Text += "  " + grup;
	this->label4->Text += "  " + Cgrup._tematica;
	this->label1->Text += "  " + Cgrup._nombreParticipants;

	TxValoracioMitjana^ txvm = gcnew TxValoracioMitjana(grup);
	System::Windows::Forms::FlowLayoutPanel^ panelEstrellas = gcnew System::Windows::Forms::FlowLayoutPanel();
	StarRatingView^ starRatingControl = gcnew StarRatingView(txvm->executar());
	panelEstrellas->Location = System::Drawing::Point(85, 35);
	panelEstrellas->Controls->Add(starRatingControl);
	panelEstrellas->Size = System::Drawing::Size(197, 20);
	panelEstrellas->AutoSize = true;
	this->Controls->Add(panelEstrellas);

	TxCercaValoracioGrup^ txcvg = gcnew TxCercaValoracioGrup(grup);
	List<PassarellaValoracio^>^ valoracions = txcvg->executar();
	
	this->tableLayoutPanel1->RowCount = valoracions->Count*3;
	//Creacion de los titulos:
	/*System::Windows::Forms::TableLayoutPanel^ panell = gcnew System::Windows::Forms::TableLayoutPanel();
	panell->ColumnCount = 3;
	panell->RowCount = 1;
	panell->AutoSize = true;
	panell->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
	panell->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
		100)));
	panell->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
		100)));
	panell->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
		20)));
	panell->Dock = System::Windows::Forms::DockStyle::Top;
	panell->ForeColor = System::Drawing::Color::White;
	panell->Padding = System::Windows::Forms::Padding(3);

	System::Windows::Forms::Label^ Usuari = gcnew System::Windows::Forms::Label();
	Usuari->Text = "Usuari";
	Usuari->Anchor = System::Windows::Forms::AnchorStyles::None;
	Usuari->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	Usuari->Font = gcnew System::Drawing::Font("Arial Black", 10, System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline);
	Usuari->AutoSize = true;
	panell->Controls->Add(Usuari, 0, 0);

	System::Windows::Forms::Label^ Comentari = gcnew System::Windows::Forms::Label();
	Comentari->Text = "Comentari";
	Comentari->Anchor = System::Windows::Forms::AnchorStyles::None;
	Comentari->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	Comentari->Font = gcnew System::Drawing::Font("Arial Black", 10, System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline);
	Comentari->AutoSize = true;
	panell->Controls->Add(Comentari, 1, 0);

	System::Windows::Forms::Label^ Valoracio = gcnew System::Windows::Forms::Label();
	Valoracio->Text = "Valoració";
	Valoracio->Anchor = System::Windows::Forms::AnchorStyles::None;
	Valoracio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	Valoracio->Font = gcnew System::Drawing::Font("Arial Black", 10, System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline);
	Valoracio->AutoSize = true;
	panell->Controls->Add(Valoracio, 2, 0);

	this->tableLayoutPanel1->Controls->Add(panell, 0, 0);*/
	// Creacion de la tabla:
	for (int i = 0; i < valoracions->Count; i++)
	{
		System::Windows::Forms::TableLayoutPanel^ panel = gcnew System::Windows::Forms::TableLayoutPanel();
		panel->ColumnCount = 2;
		panel->RowCount = 1;
		panel->AutoSize = true;
		panel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
		panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			100)));
		panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			100)));
		panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			20)));
		panel->Dock = System::Windows::Forms::DockStyle::Top;

		System::Windows::Forms::TableLayoutPanel^ panel1 = gcnew System::Windows::Forms::TableLayoutPanel();
		panel1->ColumnCount = 1;
		panel1->RowCount = 1;
		panel1->AutoSize = true;
		panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
		panel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			100)));
		panel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			100)));
		panel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			20)));
		panel1->Dock = System::Windows::Forms::DockStyle::Top;

		System::Windows::Forms::Label^ label = gcnew System::Windows::Forms::Label();
		label->Text = valoracions[i]->obteEstudiant();
		label->Anchor = System::Windows::Forms::AnchorStyles::None;
		label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		label->Font = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Bold);
		label->AutoSize = true;
		panel->Controls->Add(label, 0, 0);


		System::Windows::Forms::Label^ label1 = gcnew System::Windows::Forms::Label();
		label1->Text = valoracions[i]->obteComentari();
		label1->Anchor = System::Windows::Forms::AnchorStyles::None;
		label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		label1->Font = gcnew System::Drawing::Font("Arial", 8, System::Drawing::FontStyle::Bold);
		label1->AutoSize = true;
		panel1->Controls->Add(label1, 0, 0);

		System::Windows::Forms::FlowLayoutPanel^ panelEstrellas = gcnew System::Windows::Forms::FlowLayoutPanel();
		StarRatingView^ starRatingControl = gcnew StarRatingView(static_cast<float>(*valoracions[i]->obteValoracio()));
		panelEstrellas->Controls->Add(starRatingControl);
		panelEstrellas->Size = System::Drawing::Size(197, 20);
		panelEstrellas->AutoSize = true;
		panel->Controls->Add(panelEstrellas, 1, 0);

		System::Windows::Forms::Label^ horizontalLine = gcnew System::Windows::Forms::Label();
		horizontalLine->Height = 2;
		horizontalLine->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		horizontalLine->Dock = System::Windows::Forms::DockStyle::Top;
		
		this->tableLayoutPanel1->Controls->Add(panel, 0, i*3);
		this->tableLayoutPanel1->Controls->Add(panel1, 0, (i*3)+1);
		this->tableLayoutPanel1->Controls->Add(horizontalLine, 0, (i*3)+2);
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ButtonCloseForm_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
