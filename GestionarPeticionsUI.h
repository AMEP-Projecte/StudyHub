#pragma once

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de GestionarPeticions
	/// </summary>
	public ref class GestionarPeticionsUI : public System::Windows::Forms::Form
	{
	public:
		GestionarPeticionsUI(void)
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
		~GestionarPeticionsUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridViewPeticions;
	private: System::Windows::Forms::TextBox^ textBoxEstudiant;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxGrup;
	private: System::Windows::Forms::Button^ buttonAcceptar;
	private: System::Windows::Forms::Button^ buttonRebutjar;
	private: System::Windows::Forms::Button^ buttonTornar;




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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewPeticions = (gcnew System::Windows::Forms::DataGridView());
			this->textBoxEstudiant = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxGrup = (gcnew System::Windows::Forms::TextBox());
			this->buttonAcceptar = (gcnew System::Windows::Forms::Button());
			this->buttonRebutjar = (gcnew System::Windows::Forms::Button());
			this->buttonTornar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPeticions))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(114, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(578, 52);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Gestionar Peticions d\'Accés";
			// 
			// dataGridViewPeticions
			// 
			this->dataGridViewPeticions->AllowUserToAddRows = false;
			this->dataGridViewPeticions->AllowUserToDeleteRows = false;
			this->dataGridViewPeticions->AllowUserToResizeColumns = false;
			this->dataGridViewPeticions->AllowUserToResizeRows = false;
			this->dataGridViewPeticions->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridViewPeticions->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridViewPeticions->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewPeticions->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dataGridViewPeticions->Location = System::Drawing::Point(25, 132);
			this->dataGridViewPeticions->MultiSelect = false;
			this->dataGridViewPeticions->Name = L"dataGridViewPeticions";
			this->dataGridViewPeticions->ReadOnly = true;
			this->dataGridViewPeticions->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dataGridViewPeticions->RowHeadersWidth = 51;
			this->dataGridViewPeticions->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridViewPeticions->RowTemplate->Height = 24;
			this->dataGridViewPeticions->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridViewPeticions->ShowEditingIcon = false;
			this->dataGridViewPeticions->Size = System::Drawing::Size(390, 260);
			this->dataGridViewPeticions->TabIndex = 3;
			this->dataGridViewPeticions->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionarPeticionsUI::dataGridView1_CellContentClick);
			this->dataGridViewPeticions->Click += gcnew System::EventHandler(this, &GestionarPeticionsUI::dataGridViewPeticions_Click);
			// 
			// textBoxEstudiant
			// 
			this->textBoxEstudiant->Location = System::Drawing::Point(541, 138);
			this->textBoxEstudiant->Name = L"textBoxEstudiant";
			this->textBoxEstudiant->Size = System::Drawing::Size(151, 22);
			this->textBoxEstudiant->TabIndex = 4;
			this->textBoxEstudiant->TextChanged += gcnew System::EventHandler(this, &GestionarPeticionsUI::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(431, 135);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Estudiant:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(431, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Grup:";
			// 
			// textBoxGrup
			// 
			this->textBoxGrup->Location = System::Drawing::Point(541, 194);
			this->textBoxGrup->Name = L"textBoxGrup";
			this->textBoxGrup->Size = System::Drawing::Size(151, 22);
			this->textBoxGrup->TabIndex = 6;
			// 
			// buttonAcceptar
			// 
			this->buttonAcceptar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAcceptar->ForeColor = System::Drawing::Color::DarkCyan;
			this->buttonAcceptar->Location = System::Drawing::Point(635, 266);
			this->buttonAcceptar->Name = L"buttonAcceptar";
			this->buttonAcceptar->Size = System::Drawing::Size(151, 39);
			this->buttonAcceptar->TabIndex = 8;
			this->buttonAcceptar->Text = L"Acceptar petició";
			this->buttonAcceptar->UseVisualStyleBackColor = true;
			this->buttonAcceptar->Click += gcnew System::EventHandler(this, &GestionarPeticionsUI::buttonAcceptar_Click);
			// 
			// buttonRebutjar
			// 
			this->buttonRebutjar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRebutjar->ForeColor = System::Drawing::Color::DarkCyan;
			this->buttonRebutjar->Location = System::Drawing::Point(436, 266);
			this->buttonRebutjar->Name = L"buttonRebutjar";
			this->buttonRebutjar->Size = System::Drawing::Size(151, 39);
			this->buttonRebutjar->TabIndex = 9;
			this->buttonRebutjar->Text = L"Rebutjar petició";
			this->buttonRebutjar->UseVisualStyleBackColor = true;
			this->buttonRebutjar->Click += gcnew System::EventHandler(this, &GestionarPeticionsUI::buttonRebutjar_Click);
			// 
			// buttonTornar
			// 
			this->buttonTornar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTornar->ForeColor = System::Drawing::Color::DarkCyan;
			this->buttonTornar->Location = System::Drawing::Point(635, 348);
			this->buttonTornar->Name = L"buttonTornar";
			this->buttonTornar->Size = System::Drawing::Size(151, 39);
			this->buttonTornar->TabIndex = 10;
			this->buttonTornar->Text = L"Tornar";
			this->buttonTornar->UseVisualStyleBackColor = true;
			this->buttonTornar->Click += gcnew System::EventHandler(this, &GestionarPeticionsUI::buttonTornar_Click);
			// 
			// GestionarPeticionsUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(809, 455);
			this->Controls->Add(this->buttonTornar);
			this->Controls->Add(this->buttonRebutjar);
			this->Controls->Add(this->buttonAcceptar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxGrup);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxEstudiant);
			this->Controls->Add(this->dataGridViewPeticions);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"GestionarPeticionsUI";
			this->Text = L"GestionarPeticions";
			this->Load += gcnew System::EventHandler(this, &GestionarPeticionsUI::GestionarPeticionsUI_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPeticions))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GestionarPeticionsUI_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void actualitzarTaula();
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridViewPeticions_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonAcceptar_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonRebutjar_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonTornar_Click(System::Object^ sender, System::EventArgs^ e);
};
}
