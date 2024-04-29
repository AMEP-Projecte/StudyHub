#pragma once
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
			this->label1->Location = System::Drawing::Point(107, 22);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(391, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Crear Perfil d\'Estudiant";
			// 
			// NomLabel
			// 
			this->NomLabel->AutoSize = true;
			this->NomLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->NomLabel->Location = System::Drawing::Point(38, 87);
			this->NomLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NomLabel->Name = L"NomLabel";
			this->NomLabel->Size = System::Drawing::Size(29, 13);
			this->NomLabel->TabIndex = 1;
			this->NomLabel->Text = L"Nom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(39, 193);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Correu Electr\u00F2nic";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(360, 87);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Nom d\'usuari";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(38, 238);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Contrasenya";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(40, 288);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Repeteix la contrasenya";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(361, 193);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Idioma Preferit";
			// 
			// nomBox
			// 
			this->nomBox->Location = System::Drawing::Point(41, 106);
			this->nomBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->nomBox->Name = L"nomBox";
			this->nomBox->Size = System::Drawing::Size(297, 20);
			this->nomBox->TabIndex = 7;
			// 
			// correuBox
			// 
			this->correuBox->Location = System::Drawing::Point(41, 211);
			this->correuBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->correuBox->Name = L"correuBox";
			this->correuBox->Size = System::Drawing::Size(297, 20);
			this->correuBox->TabIndex = 8;
			// 
			// nomusuariBox
			// 
			this->nomusuariBox->Location = System::Drawing::Point(363, 106);
			this->nomusuariBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->nomusuariBox->Name = L"nomusuariBox";
			this->nomusuariBox->Size = System::Drawing::Size(175, 20);
			this->nomusuariBox->TabIndex = 9;
			// 
			// contrasenyaBox
			// 
			this->contrasenyaBox->Location = System::Drawing::Point(41, 258);
			this->contrasenyaBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->contrasenyaBox->Name = L"contrasenyaBox";
			this->contrasenyaBox->Size = System::Drawing::Size(297, 20);
			this->contrasenyaBox->TabIndex = 10;
			// 
			// repeteixContrasenyaBox
			// 
			this->repeteixContrasenyaBox->Location = System::Drawing::Point(41, 310);
			this->repeteixContrasenyaBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->repeteixContrasenyaBox->Name = L"repeteixContrasenyaBox";
			this->repeteixContrasenyaBox->Size = System::Drawing::Size(297, 20);
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
			this->idiomaPreferitBox->Location = System::Drawing::Point(363, 211);
			this->idiomaPreferitBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->idiomaPreferitBox->Name = L"idiomaPreferitBox";
			this->idiomaPreferitBox->Size = System::Drawing::Size(175, 21);
			this->idiomaPreferitBox->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::DarkCyan;
			this->button1->Location = System::Drawing::Point(393, 301);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 29);
			this->button1->TabIndex = 13;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CrearEstudiant::button1_Click);
			// 
			// CognomsBox
			// 
			this->CognomsBox->Location = System::Drawing::Point(41, 161);
			this->CognomsBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->CognomsBox->Name = L"CognomsBox";
			this->CognomsBox->Size = System::Drawing::Size(297, 20);
			this->CognomsBox->TabIndex = 15;
			// 
			// Cognom
			// 
			this->Cognom->AutoSize = true;
			this->Cognom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Cognom->Location = System::Drawing::Point(38, 142);
			this->Cognom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Cognom->Name = L"Cognom";
			this->Cognom->Size = System::Drawing::Size(51, 13);
			this->Cognom->TabIndex = 14;
			this->Cognom->Text = L"Cognoms";
			// 
			// LocalitatBox
			// 
			this->LocalitatBox->Location = System::Drawing::Point(364, 161);
			this->LocalitatBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->LocalitatBox->Name = L"LocalitatBox";
			this->LocalitatBox->Size = System::Drawing::Size(175, 20);
			this->LocalitatBox->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(361, 142);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Localitat";
			// 
			// CrearEstudiant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 370);
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
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
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
};
}
