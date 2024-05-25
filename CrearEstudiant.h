﻿#pragma once
#include "TxCreaEstudiant.h"
namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CrearEstudiant
	/// </summary>
	public ref class CrearEstudiant : public System::Windows::Forms::Form
	{
	public:
		CrearEstudiant(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CrearEstudiant()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ NomLabel;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ nomBox;
	private: System::Windows::Forms::TextBox^ correuBox;
	private: System::Windows::Forms::TextBox^ nomusuariBox;



	private: System::Windows::Forms::TextBox^ contrasenyaBox;
	private: System::Windows::Forms::TextBox^ repeteixContrasenyaBox;
	private: System::Windows::Forms::ComboBox^ idiomaPreferitBox;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ CognomsBox;
	private: System::Windows::Forms::Label^ Cognom;
	private: System::Windows::Forms::TextBox^ LocalitatBox;
	private: System::Windows::Forms::Label^ label2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NomLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->nomBox = (gcnew System::Windows::Forms::TextBox());
			this->correuBox = (gcnew System::Windows::Forms::TextBox());
			this->nomusuariBox = (gcnew System::Windows::Forms::TextBox());
			this->contrasenyaBox = (gcnew System::Windows::Forms::TextBox());
			this->repeteixContrasenyaBox = (gcnew System::Windows::Forms::TextBox());
			this->idiomaPreferitBox = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->CognomsBox = (gcnew System::Windows::Forms::TextBox());
			this->Cognom = (gcnew System::Windows::Forms::Label());
			this->LocalitatBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(154, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(584, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Crear Perfil d\'Estudiant";
			// 
			// NomLabel
			// 
			this->NomLabel->AutoSize = true;
			this->NomLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->NomLabel->Location = System::Drawing::Point(57, 108);
			this->NomLabel->Name = L"NomLabel";
			this->NomLabel->Size = System::Drawing::Size(42, 20);
			this->NomLabel->TabIndex = 1;
			this->NomLabel->Text = L"Nom";
			this->NomLabel->Click += gcnew System::EventHandler(this, &CrearEstudiant::NomLabel_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(58, 271);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Correu Electrònic";
			this->label3->Click += gcnew System::EventHandler(this, &CrearEstudiant::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(540, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Nom d\'usuari";
			this->label4->Click += gcnew System::EventHandler(this, &CrearEstudiant::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(57, 340);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Contrasenya";
			this->label5->Click += gcnew System::EventHandler(this, &CrearEstudiant::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(60, 417);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(179, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Repeteix la contrasenya";
			this->label6->Click += gcnew System::EventHandler(this, &CrearEstudiant::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(542, 271);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Idioma Preferit";
			this->label7->Click += gcnew System::EventHandler(this, &CrearEstudiant::label7_Click);
			// 
			// nomBox
			// 
			this->nomBox->Location = System::Drawing::Point(62, 137);
			this->nomBox->Name = L"nomBox";
			this->nomBox->Size = System::Drawing::Size(444, 26);
			this->nomBox->TabIndex = 7;
			this->nomBox->TextChanged += gcnew System::EventHandler(this, &CrearEstudiant::nomBox_TextChanged);
			// 
			// correuBox
			// 
			this->correuBox->Location = System::Drawing::Point(62, 298);
			this->correuBox->Name = L"correuBox";
			this->correuBox->Size = System::Drawing::Size(444, 26);
			this->correuBox->TabIndex = 9;
			this->correuBox->TextChanged += gcnew System::EventHandler(this, &CrearEstudiant::correuBox_TextChanged);
			// 
			// nomusuariBox
			// 
			this->nomusuariBox->Location = System::Drawing::Point(544, 137);
			this->nomusuariBox->Name = L"nomusuariBox";
			this->nomusuariBox->Size = System::Drawing::Size(260, 26);
			this->nomusuariBox->TabIndex = 12;
			this->nomusuariBox->TextChanged += gcnew System::EventHandler(this, &CrearEstudiant::nomusuariBox_TextChanged);
			// 
			// contrasenyaBox
			// 
			this->contrasenyaBox->Location = System::Drawing::Point(62, 371);
			this->contrasenyaBox->Name = L"contrasenyaBox";
			this->contrasenyaBox->Size = System::Drawing::Size(444, 26);
			this->contrasenyaBox->TabIndex = 10;
			this->contrasenyaBox->TextChanged += gcnew System::EventHandler(this, &CrearEstudiant::contrasenyaBox_TextChanged);
			// 
			// repeteixContrasenyaBox
			// 
			this->repeteixContrasenyaBox->Location = System::Drawing::Point(62, 451);
			this->repeteixContrasenyaBox->Name = L"repeteixContrasenyaBox";
			this->repeteixContrasenyaBox->Size = System::Drawing::Size(444, 26);
			this->repeteixContrasenyaBox->TabIndex = 11;
			// 
			// idiomaPreferitBox
			// 
			this->idiomaPreferitBox->FormattingEnabled = true;
			this->idiomaPreferitBox->Items->AddRange(gcnew cli::array< System::Object^  >(26) {
				L"English", L"Español", L"Català", L"Français",
					L"Deutsch", L"Português", L"Italiano", L"中文 (Chinese)", L"日本語 (Japanese)", L"한국어 (Korean)", L"العربية (Arabic)", L"Русский (Russian)",
					L"हिन्दी (Hindi)", L"বাংলা (Bengali)", L"اردو (Urdu)", L"Türkçe (Turkish)", L"Bahasa Indonesia (Indonesian)", L"ไทย (Thai)",
					L"Tiếng Việt (Vietnamese)", L"Nederlands (Dutch)", L"Svenska (Swedish)", L"Norsk (Norwegian)", L"Dansk (Danish)", L"Suomi (Finnish)",
					L"Ελληνικά (Greek)", L"Polski (Polish)"
			});
			this->idiomaPreferitBox->Location = System::Drawing::Point(544, 298);
			this->idiomaPreferitBox->Name = L"idiomaPreferitBox";
			this->idiomaPreferitBox->Size = System::Drawing::Size(260, 28);
			this->idiomaPreferitBox->TabIndex = 14;
			this->idiomaPreferitBox->SelectedIndexChanged += gcnew System::EventHandler(this, &CrearEstudiant::idiomaPreferitBox_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::DarkCyan;
			this->button1->Location = System::Drawing::Point(590, 437);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 45);
			this->button1->TabIndex = 15;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CrearEstudiant::button1_Click);
			// 
			// CognomsBox
			// 
			this->CognomsBox->Location = System::Drawing::Point(62, 222);
			this->CognomsBox->Name = L"CognomsBox";
			this->CognomsBox->Size = System::Drawing::Size(444, 26);
			this->CognomsBox->TabIndex = 8;
			this->CognomsBox->TextChanged += gcnew System::EventHandler(this, &CrearEstudiant::CognomsBox_TextChanged);
			// 
			// Cognom
			// 
			this->Cognom->AutoSize = true;
			this->Cognom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Cognom->Location = System::Drawing::Point(57, 192);
			this->Cognom->Name = L"Cognom";
			this->Cognom->Size = System::Drawing::Size(77, 20);
			this->Cognom->TabIndex = 14;
			this->Cognom->Text = L"Cognoms";
			this->Cognom->Click += gcnew System::EventHandler(this, &CrearEstudiant::Cognom_Click);
			// 
			// LocalitatBox
			// 
			this->LocalitatBox->Location = System::Drawing::Point(546, 222);
			this->LocalitatBox->Name = L"LocalitatBox";
			this->LocalitatBox->Size = System::Drawing::Size(260, 26);
			this->LocalitatBox->TabIndex = 13;
			this->LocalitatBox->TextChanged += gcnew System::EventHandler(this, &CrearEstudiant::LocalitatBox_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(542, 192);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 20);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Localitat";
			this->label2->Click += gcnew System::EventHandler(this, &CrearEstudiant::label2_Click);
			// 
			// CrearEstudiant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(910, 569);
			this->Controls->Add(this->LocalitatBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->CognomsBox);
			this->Controls->Add(this->Cognom);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->idiomaPreferitBox);
			this->Controls->Add(this->repeteixContrasenyaBox);
			this->Controls->Add(this->contrasenyaBox);
			this->Controls->Add(this->nomusuariBox);
			this->Controls->Add(this->correuBox);
			this->Controls->Add(this->nomBox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->NomLabel);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CrearEstudiant";
			this->Text = L" ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (contrasenyaBox->Text == contrasenyaBox->Text) {
		TxCreaEstudiant tx(nomusuariBox->Text, contrasenyaBox->Text, correuBox->Text, nomBox->Text,
			CognomsBox->Text, idiomaPreferitBox->Text, LocalitatBox->Text, 0);
		tx.executa();
	}
	this->Close();

}
private: System::Void NomLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void nomBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void nomusuariBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Cognom_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CognomsBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LocalitatBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void correuBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void idiomaPreferitBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void contrasenyaBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
