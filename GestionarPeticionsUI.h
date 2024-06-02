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






	private: System::Windows::Forms::Button^ buttonAcceptar;
	private: System::Windows::Forms::Button^ buttonRebutjar;
	private: System::Windows::Forms::Button^ buttonTornar;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: int seleccionat;




	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonAcceptar = (gcnew System::Windows::Forms::Button());
			this->buttonRebutjar = (gcnew System::Windows::Forms::Button());
			this->buttonTornar = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1->SuspendLayout();
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
			// buttonAcceptar
			// 
			this->buttonAcceptar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAcceptar->ForeColor = System::Drawing::Color::DarkCyan;
			this->buttonAcceptar->Location = System::Drawing::Point(568, 150);
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
			this->buttonRebutjar->Location = System::Drawing::Point(568, 218);
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
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Location = System::Drawing::Point(111, 115);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(421, 287);
			this->panel1->TabIndex = 0;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				410)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(4, 2);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// GestionarPeticionsUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(809, 455);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->buttonTornar);
			this->Controls->Add(this->buttonRebutjar);
			this->Controls->Add(this->buttonAcceptar);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"GestionarPeticionsUI";
			this->Text = L"GestionarPeticions";
			this->Load += gcnew System::EventHandler(this, &GestionarPeticionsUI::GestionarPeticionsUI_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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
	//private: System::Void dataGridViewPeticions_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void On_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonAcceptar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonRebutjar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonTornar_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
