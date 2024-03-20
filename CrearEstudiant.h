#pragma once
#include "PassarellaEstudiant.h"
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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(186, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(429, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Crear Perfil d\'Estudiant";
			this->label1->Click += gcnew System::EventHandler(this, &CrearEstudiant::label1_Click);
			// 
			// NomLabel
			// 
			this->NomLabel->AutoSize = true;
			this->NomLabel->Location = System::Drawing::Point(22, 149);
			this->NomLabel->Name = L"NomLabel";
			this->NomLabel->Size = System::Drawing::Size(121, 20);
			this->NomLabel->TabIndex = 1;
			this->NomLabel->Text = L"Nom i Cognoms";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 222);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Correu Electronic";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(505, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Nom d\'usuari";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 295);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Contrasenya";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 368);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(179, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Repeteix la contrasenya";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(503, 256);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Idioma Preferit";
			this->label7->Click += gcnew System::EventHandler(this, &CrearEstudiant::label7_Click);
			// 
			// nomBox
			// 
			this->nomBox->Location = System::Drawing::Point(27, 182);
			this->nomBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->nomBox->Name = L"nomBox";
			this->nomBox->Size = System::Drawing::Size(444, 26);
			this->nomBox->TabIndex = 7;
			// 
			// correuBox
			// 
			this->correuBox->Location = System::Drawing::Point(27, 250);
			this->correuBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->correuBox->Name = L"correuBox";
			this->correuBox->Size = System::Drawing::Size(444, 26);
			this->correuBox->TabIndex = 8;
			// 
			// nomusuariBox
			// 
			this->nomusuariBox->Location = System::Drawing::Point(508, 192);
			this->nomusuariBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->nomusuariBox->Name = L"nomusuariBox";
			this->nomusuariBox->Size = System::Drawing::Size(260, 26);
			this->nomusuariBox->TabIndex = 9;
			// 
			// contrasenyaBox
			// 
			this->contrasenyaBox->Location = System::Drawing::Point(27, 318);
			this->contrasenyaBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->contrasenyaBox->Name = L"contrasenyaBox";
			this->contrasenyaBox->Size = System::Drawing::Size(444, 26);
			this->contrasenyaBox->TabIndex = 10;
			this->contrasenyaBox->TextChanged += gcnew System::EventHandler(this, &CrearEstudiant::textBox4_TextChanged);
			// 
			// repeteixContrasenyaBox
			// 
			this->repeteixContrasenyaBox->Location = System::Drawing::Point(27, 405);
			this->repeteixContrasenyaBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->repeteixContrasenyaBox->Name = L"repeteixContrasenyaBox";
			this->repeteixContrasenyaBox->Size = System::Drawing::Size(450, 26);
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
			this->idiomaPreferitBox->Location = System::Drawing::Point(508, 286);
			this->idiomaPreferitBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->idiomaPreferitBox->Name = L"idiomaPreferitBox";
			this->idiomaPreferitBox->Size = System::Drawing::Size(260, 28);
			this->idiomaPreferitBox->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(646, 499);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 32);
			this->button1->TabIndex = 13;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CrearEstudiant::button1_Click);
			// 
			// CrearEstudiant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 574);
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
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"CrearEstudiant";
			this->Text = L" ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	PassarellaEstudiant pe(nomusuariBox->Text, contrasenyaBox->Text, correuBox->Text, nomBox->Text, "    ", idiomaPreferitBox->Text, "   ", 0);
	pe.insereix();
}
};
}
