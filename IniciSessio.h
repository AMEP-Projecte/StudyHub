#pragma once
#include "TxIniciarSessio.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for IniciSessio
	/// </summary>
	public ref class IniciSessio : public System::Windows::Forms::Form
	{
	public:
		IniciSessio(void)
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
		~IniciSessio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ ButtonIniciarSessio;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ButtonIniciarSessio = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(35, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(151, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(353, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(151, 124);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(353, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(35, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Contrasenya";
			// 
			// ButtonIniciarSessio
			// 
			this->ButtonIniciarSessio->ForeColor = System::Drawing::Color::DarkCyan;
			this->ButtonIniciarSessio->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->ButtonIniciarSessio->Location = System::Drawing::Point(212, 231);
			this->ButtonIniciarSessio->Name = L"ButtonIniciarSessio";
			this->ButtonIniciarSessio->Size = System::Drawing::Size(166, 44);
			this->ButtonIniciarSessio->TabIndex = 4;
			this->ButtonIniciarSessio->Text = L"Iniciar Sessio";
			this->ButtonIniciarSessio->UseVisualStyleBackColor = true;
			this->ButtonIniciarSessio->Click += gcnew System::EventHandler(this, &IniciSessio::button1_Click);
			// 
			// IniciSessio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(591, 331);
			this->Controls->Add(this->ButtonIniciarSessio);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"IniciSessio";
			this->Text = L"IniciSessio";
			this->Load += gcnew System::EventHandler(this, &IniciSessio::IniciSessio_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void IniciSessio_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
