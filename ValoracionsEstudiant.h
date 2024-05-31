#pragma once

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ValoracionsEstudiant
	/// </summary>
	public ref class ValoracionsEstudiant : public System::Windows::Forms::Form
	{
	public:
		ValoracionsEstudiant(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	private: System::Windows::Forms::Label^ titol;
	private: System::Windows::Forms::Button^ buttonElimina;
	private: String^ grupValorat = ""; // Variable que guarda una Primary Key de la valoració
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ labelheadergrup;
	private: System::Windows::Forms::Label^ labelheadercomentari;
	private: System::Windows::Forms::Label^ labelheadervaloracio;
	private: System::Windows::Forms::Label^ labelUsuari;


	public: String^ usernameEstudiant;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ValoracionsEstudiant()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->titol = (gcnew System::Windows::Forms::Label());
			this->buttonElimina = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelheadercomentari = (gcnew System::Windows::Forms::Label());
			this->labelheadervaloracio = (gcnew System::Windows::Forms::Label());
			this->labelheadergrup = (gcnew System::Windows::Forms::Label());
			this->labelUsuari = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// titol
			// 
			this->titol->AutoSize = true;
			this->titol->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 21, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titol->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->titol->Location = System::Drawing::Point(61, 28);
			this->titol->Name = L"titol";
			this->titol->Size = System::Drawing::Size(333, 37);
			this->titol->TabIndex = 0;
			this->titol->Text = L"Valoracions de l\'usuari";
			// 
			// buttonElimina
			// 
			this->buttonElimina->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonElimina->ForeColor = System::Drawing::Color::DarkCyan;
			this->buttonElimina->Location = System::Drawing::Point(237, 238);
			this->buttonElimina->Margin = System::Windows::Forms::Padding(2);
			this->buttonElimina->Name = L"buttonElimina";
			this->buttonElimina->Size = System::Drawing::Size(101, 35);
			this->buttonElimina->TabIndex = 1;
			this->buttonElimina->Text = L"Eliminar";
			this->buttonElimina->UseVisualStyleBackColor = true;
			this->buttonElimina->Click += gcnew System::EventHandler(this, &ValoracionsEstudiant::buttonElimina_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(56, 82);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 23.8806F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 76.1194F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(494, 134);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				110)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				190)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				183)));
			this->tableLayoutPanel2->Controls->Add(this->labelheadercomentari, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->labelheadervaloracio, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->labelheadergrup, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(488, 26);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// labelheadercomentari
			// 
			this->labelheadercomentari->AutoSize = true;
			this->labelheadercomentari->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelheadercomentari->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelheadercomentari->ForeColor = System::Drawing::Color::White;
			this->labelheadercomentari->Location = System::Drawing::Point(309, 2);
			this->labelheadercomentari->Name = L"labelheadercomentari";
			this->labelheadercomentari->Size = System::Drawing::Size(176, 22);
			this->labelheadercomentari->TabIndex = 2;
			this->labelheadercomentari->Text = L"Comentari";
			this->labelheadercomentari->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelheadervaloracio
			// 
			this->labelheadervaloracio->AutoSize = true;
			this->labelheadervaloracio->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelheadervaloracio->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelheadervaloracio->ForeColor = System::Drawing::Color::White;
			this->labelheadervaloracio->Location = System::Drawing::Point(117, 2);
			this->labelheadervaloracio->Name = L"labelheadervaloracio";
			this->labelheadervaloracio->Size = System::Drawing::Size(184, 22);
			this->labelheadervaloracio->TabIndex = 1;
			this->labelheadervaloracio->Text = L"Valoració";
			this->labelheadervaloracio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelheadergrup
			// 
			this->labelheadergrup->AutoSize = true;
			this->labelheadergrup->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelheadergrup->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelheadergrup->ForeColor = System::Drawing::Color::White;
			this->labelheadergrup->Location = System::Drawing::Point(5, 2);
			this->labelheadergrup->Name = L"labelheadergrup";
			this->labelheadergrup->Size = System::Drawing::Size(104, 22);
			this->labelheadergrup->TabIndex = 0;
			this->labelheadergrup->Text = L"Grup";
			this->labelheadergrup->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelUsuari
			// 
			this->labelUsuari->AutoSize = true;
			this->labelUsuari->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 21, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUsuari->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelUsuari->Location = System::Drawing::Point(390, 28);
			this->labelUsuari->Name = L"labelUsuari";
			this->labelUsuari->Size = System::Drawing::Size(103, 37);
			this->labelUsuari->TabIndex = 3;
			this->labelUsuari->Text = L"usuari";
			// 
			// ValoracionsEstudiant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(593, 332);
			this->Controls->Add(this->labelUsuari);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->buttonElimina);
			this->Controls->Add(this->titol);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ValoracionsEstudiant";
			this->Text = L"ValoracionsEstudiant";
			this->Load += gcnew System::EventHandler(this, &ValoracionsEstudiant::ValoracionsEstudiant_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ValoracionsEstudiant_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonElimina_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void labelenfila_Click(Object^ sender, EventArgs^ e);
	private: System::Void fila_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void selecciona(TableLayoutPanel^ table);

	private: System::Void omplir();
};
}
