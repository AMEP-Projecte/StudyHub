#pragma once

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CrearEspaiUI
	/// </summary>
	public ref class CrearEspaiUI : public System::Windows::Forms::Form
	{
	public:
		CrearEspaiUI(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CrearEspaiUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1titulo;
	private: System::Windows::Forms::Label^ label2adr;
	private: System::Windows::Forms::Label^ label3nom;
	private: System::Windows::Forms::Label^ label4cap;
	private: System::Windows::Forms::Button^ botonetcrea;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button1;


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1titulo = (gcnew System::Windows::Forms::Label());
			this->label2adr = (gcnew System::Windows::Forms::Label());
			this->label3nom = (gcnew System::Windows::Forms::Label());
			this->label4cap = (gcnew System::Windows::Forms::Label());
			this->botonetcrea = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1titulo
			// 
			this->label1titulo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1titulo->AutoSize = true;
			this->label1titulo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->label1titulo->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1titulo->Location = System::Drawing::Point(213, 40);
			this->label1titulo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1titulo->Name = L"label1titulo";
			this->label1titulo->Size = System::Drawing::Size(197, 42);
			this->label1titulo->TabIndex = 3;
			this->label1titulo->Text = L"Crear Espai";
			this->label1titulo->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2adr
			// 
			this->label2adr->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2adr->AutoSize = true;
			this->label2adr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label2adr->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2adr->Location = System::Drawing::Point(57, 116);
			this->label2adr->Name = L"label2adr";
			this->label2adr->Size = System::Drawing::Size(67, 22);
			this->label2adr->TabIndex = 4;
			this->label2adr->Text = L"Adreça";
			// 
			// label3nom
			// 
			this->label3nom->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3nom->AutoSize = true;
			this->label3nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label3nom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3nom->Location = System::Drawing::Point(57, 167);
			this->label3nom->Name = L"label3nom";
			this->label3nom->Size = System::Drawing::Size(47, 22);
			this->label3nom->TabIndex = 5;
			this->label3nom->Text = L"Nom";
			// 
			// label4cap
			// 
			this->label4cap->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4cap->AutoSize = true;
			this->label4cap->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label4cap->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4cap->Location = System::Drawing::Point(57, 213);
			this->label4cap->Name = L"label4cap";
			this->label4cap->Size = System::Drawing::Size(86, 22);
			this->label4cap->TabIndex = 6;
			this->label4cap->Text = L"Capacitat";
			// 
			// botonetcrea
			// 
			this->botonetcrea->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->botonetcrea->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->botonetcrea->ForeColor = System::Drawing::Color::DarkCyan;
			this->botonetcrea->Location = System::Drawing::Point(374, 276);
			this->botonetcrea->Name = L"botonetcrea";
			this->botonetcrea->Size = System::Drawing::Size(144, 39);
			this->botonetcrea->TabIndex = 7;
			this->botonetcrea->Text = L"CREAR ESPAI";
			this->botonetcrea->UseVisualStyleBackColor = true;
			this->botonetcrea->Click += gcnew System::EventHandler(this, &CrearEspaiUI::botonetcrea_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(149, 120);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(369, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->Location = System::Drawing::Point(149, 167);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(369, 20);
			this->textBox2->TabIndex = 9;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(160, 192);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(90, 20);
			this->numericUpDown1->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->ForeColor = System::Drawing::Color::DarkCyan;
			this->button1->Location = System::Drawing::Point(83, 276);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 39);
			this->button1->TabIndex = 11;
			this->button1->Text = L"TORNAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CrearEspaiUI::button1_Click);
			// 
			// CrearEspaiUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 370);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label4cap);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->botonetcrea);
			this->Controls->Add(this->label3nom);
			this->Controls->Add(this->label2adr);
			this->Controls->Add(this->label1titulo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"CrearEspaiUI";
			this->Text = L"CrearEspaiUI";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void botonetcrea_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
