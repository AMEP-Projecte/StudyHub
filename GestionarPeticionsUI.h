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
			this->dataGridViewPeticions->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridViewPeticions->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridViewPeticions->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewPeticions->Location = System::Drawing::Point(25, 143);
			this->dataGridViewPeticions->Name = L"dataGridViewPeticions";
			this->dataGridViewPeticions->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dataGridViewPeticions->RowHeadersWidth = 51;
			this->dataGridViewPeticions->RowTemplate->Height = 24;
			this->dataGridViewPeticions->Size = System::Drawing::Size(390, 260);
			this->dataGridViewPeticions->TabIndex = 3;
			this->dataGridViewPeticions->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionarPeticionsUI::dataGridView1_CellContentClick);
			// 
			// GestionarPeticionsUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(809, 455);
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
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	
	};
}
